#pragma leco app
import casein;
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

namespace gelo {
  constexpr const auto array_buffer = 34962;
  constexpr const auto compile_status = 35713;
  constexpr const auto fragment_shader = 35632;
  constexpr const auto float_ = 5126;
  constexpr const auto link_status = 35714;
  constexpr const auto static_draw = 35044;
  constexpr const auto vertex_shader = 35633;

  IMPORT(void, attach_shader)(int prog, int shd);
  IMPORT(void, compile_shader)(int shd);
  IMPORT(int, create_program)();
  IMPORT(int, create_shader)(int type);
  IMPORT(void, get_program_info_log)(int prog, char * buf, unsigned sz);
  IMPORT(bool, get_program_parameter_b)(int prog, int n);
  IMPORT(void, get_shader_info_log)(int shd, char * buf, unsigned sz);
  IMPORT(bool, get_shader_parameter_b)(int shd, int n);
  IMPORT(int, link_program)(int prog);
  IMPORT(void, shader_source)(int shd, const char * src, unsigned sz);
  IMPORT(int, use_program)(int prog);
}

static void shader(int prog, int type, jute::view src) {
  using namespace gelo;

  auto v = create_shader(type);
  shader_source(v, src.begin(), src.size());
  compile_shader(v);
  if (!get_shader_parameter_b(v, compile_status)) {
    char buf[1024] {};
    get_shader_info_log(v, buf, sizeof(buf) - 1);
    silog::log(silog::error, "Error compiling shader:\n%s", buf);
  }
  attach_shader(prog, v);
}

static void run() {
  using namespace gelo;

  auto p = create_program();
  shader(p, vertex_shader, vert_shader);
  shader(p, fragment_shader, frag_shader);

  link_program(p);
  if (!get_program_parameter_b(p, link_status)) {
    char buf[1024] {};
    get_program_info_log(p, buf, sizeof(buf) - 1);
    silog::log(silog::error, "Error linking program:\n%s", buf);
  }

  use_program(p);
}

struct init {
  init() { casein::handle(casein::CREATE_WINDOW, run); }
} i;
