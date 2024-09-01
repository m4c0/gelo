#pragma leco app
import casein;
import gelo;
import jute;
import silog;
import vaselin;

using namespace jute::literals;

static constexpr const auto vert_shader = R"(
  attribute vec2 pos;
  void main() { gl_Position = vec4(pos, 0, 1); }
)"_s;
static constexpr const auto frag_shader = R"(
  void main() { gl_FragColor = vec4(0.1, 0.2, 0.3, 1.0); }
)"_s;
static constexpr const float quad[] { 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0 };
static constexpr const unsigned text[] { 0xFF00FFFF }; 

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

static int p, b, t;

static void draw(void *) {
  using namespace gelo;

  clear_color(0.1, 0.1, 0.2, 1);
  clear(COLOR_BUFFER_BIT);
  viewport(0, 0, casein::window_size.x, casein::window_size.y);

  draw_arrays_instanced(TRIANGLES, 0, 6, 1);

  vaselin::request_animation_frame(draw, nullptr);
}

static void run() {
  using namespace gelo;

  p = create_program();
  shader(p, VERTEX_SHADER, vert_shader);
  shader(p, FRAGMENT_SHADER, frag_shader);

  link_program(p);
  if (!get_program_parameter_b(p, LINK_STATUS)) {
    char buf[1024] {};
    get_program_info_log(p, buf, sizeof(buf) - 1);
    silog::log(silog::error, "Error linking program:\n%s", buf);
  }

  use_program(p);

  b = create_buffer();
  bind_buffer(ARRAY_BUFFER, b);
  buffer_data(ARRAY_BUFFER, quad, sizeof(quad), STATIC_DRAW);
  enable_vertex_attrib_array(0);
  vertex_attrib_array_pointer(0, 2, FLOAT, false, 0, 0);

  enable(BLEND);
  blend_func(ONE, ONE_MINUS_SRC_ALPHA);

  t = create_texture();
  active_texture(TEXTURE0);
  bind_texture(TEXTURE_2D, t);
  tex_image_2d(TEXTURE_2D, 0, RGBA, 1, 1, 0, RGBA, UNSIGNED_BYTE, text, sizeof(text));
  tex_parameter_i(TEXTURE_2D, TEXTURE_WRAP_S, CLAMP_TO_EDGE);
  tex_parameter_i(TEXTURE_2D, TEXTURE_WRAP_T, CLAMP_TO_EDGE);
  tex_parameter_i(TEXTURE_2D, TEXTURE_MIN_FILTER, NEAREST);
  tex_parameter_i(TEXTURE_2D, TEXTURE_MAG_FILTER, NEAREST);

  vaselin::request_animation_frame(draw, nullptr);
}

struct init {
  init() { casein::handle(casein::CREATE_WINDOW, run); }
} i;
