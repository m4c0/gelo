#pragma leco app
import casein;
import gelo;
import jute;
import silog;

using namespace jute::literals;

#define IMPORT(r, n) extern r __attribute__((import_module("gelo"), import_name(#n))) n

static constexpr const auto vert_shader = R"(
  attribute vec2 pos;
  void main() { gl_Position = vec4(pos, 0, 1); }
)"_s;
static constexpr const auto frag_shader = R"(
  void main() { gl_FragColor = vec4(0.1, 0.2, 0.3, 1.0); }
)"_s;
static constexpr const float quad[] { 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0 };
static constexpr const unsigned text[] { 0xFF00FFFF }; 

namespace gelo {
  IMPORT(void, active_texture)(int id);
  IMPORT(void, attach_shader)(int prog, int shd);
  IMPORT(void, bind_buffer)(int type, int buf);
  IMPORT(void, bind_texture)(int type, int txt);
  IMPORT(void, blend_func)(int src, int dst);
  IMPORT(void, buffer_data)(int type, const void * ptr, unsigned sz, int mode);
  IMPORT(void, compile_shader)(int shd);
  IMPORT(int, create_buffer)();
  IMPORT(int, create_program)();
  IMPORT(int, create_shader)(int type);
  IMPORT(int, create_texture)();
  IMPORT(void, enable)(int feat);
  IMPORT(void, enable_vertex_attrib_array)(int idx);
  IMPORT(void, get_program_info_log)(int prog, char * buf, unsigned sz);
  IMPORT(bool, get_program_parameter_b)(int prog, int n);
  IMPORT(void, get_shader_info_log)(int shd, char * buf, unsigned sz);
  IMPORT(bool, get_shader_parameter_b)(int shd, int n);
  IMPORT(int, get_uniform_location)(int prog, const char * name, unsigned sz);
  IMPORT(int, link_program)(int prog);
  IMPORT(void, shader_source)(int shd, const char * src, unsigned sz);
  IMPORT(int, uniform2f)(int u, float, float);
  IMPORT(int, uniform1i)(int u, int);
  IMPORT(int, use_program)(int prog);
  IMPORT(void, tex_image_2d)(int t, int lvl, int i_fmt, int w, int h, int border, int fmt, int type, const void * data, int sz);
  IMPORT(void, vertex_attrib_array_pointer)(int idx, int qty, int type, bool norm, int stride, int offset);
}

static void shader(int prog, int type, jute::view src) {
  using namespace gelo;

  auto v = create_shader(type);
  shader_source(v, src.begin(), src.size());
  compile_shader(v);
  if (!get_shader_parameter_b(v, COMPILE_STATUS)) {
    char buf[1024] {};
    get_shader_info_log(v, buf, sizeof(buf) - 1);
    silog::log(silog::error, "Error compiling shader:\n%s", buf);
  }
  attach_shader(prog, v);
}

static void run() {
  using namespace gelo;

  auto p = create_program();
  shader(p, VERTEX_SHADER, vert_shader);
  shader(p, FRAGMENT_SHADER, frag_shader);

  link_program(p);
  if (!get_program_parameter_b(p, LINK_STATUS)) {
    char buf[1024] {};
    get_program_info_log(p, buf, sizeof(buf) - 1);
    silog::log(silog::error, "Error linking program:\n%s", buf);
  }

  use_program(p);

  auto b = create_buffer();
  bind_buffer(ARRAY_BUFFER, b);
  buffer_data(ARRAY_BUFFER, quad, sizeof(quad), STATIC_DRAW);
  enable_vertex_attrib_array(0);
  vertex_attrib_array_pointer(0, 2, FLOAT, false, 0, 0);

  enable(BLEND);
  blend_func(ONE, ONE_MINUS_SRC_ALPHA);

  auto t = create_texture();
  active_texture(TEXTURE0);
  bind_texture(TEXTURE_2D, t);
  tex_image_2d(TEXTURE_2D, 0, RGBA, 1, 1, 0, RGBA, UNSIGNED_BYTE, text, sizeof(text));
}

struct init {
  init() { casein::handle(casein::CREATE_WINDOW, run); }
} i;
