#define IMPORT(r, n) extern r __attribute__((import_module("gelo"), import_name(#n))) n

export module gelo;
import jute;

export namespace gelo {
  constexpr const auto ACTIVE_ATTRIBUTES = 35721;
  constexpr const auto ACTIVE_TEXTURE = 34016;
  constexpr const auto ACTIVE_UNIFORMS = 35718;
  constexpr const auto ALIASED_LINE_WIDTH_RANGE = 33902;
  constexpr const auto ALIASED_POINT_SIZE_RANGE = 33901;
  constexpr const auto ALPHA = 6406;
  constexpr const auto ALPHA_BITS = 3413;
  constexpr const auto ALWAYS = 519;
  constexpr const auto ARRAY_BUFFER = 34962;
  constexpr const auto ARRAY_BUFFER_BINDING = 34964;
  constexpr const auto ATTACHED_SHADERS = 35717;
  constexpr const auto BACK = 1029;
  constexpr const auto BLEND = 3042;
  constexpr const auto BLEND_COLOR = 32773;
  constexpr const auto BLEND_DST_ALPHA = 32970;
  constexpr const auto BLEND_DST_RGB = 32968;
  constexpr const auto BLEND_EQUATION = 32777;
  constexpr const auto BLEND_EQUATION_ALPHA = 34877;
  constexpr const auto BLEND_EQUATION_RGB = 32777;
  constexpr const auto BLEND_SRC_ALPHA = 32971;
  constexpr const auto BLEND_SRC_RGB = 32969;
  constexpr const auto BLUE_BITS = 3412;
  constexpr const auto BOOL = 35670;
  constexpr const auto BOOL_VEC2 = 35671;
  constexpr const auto BOOL_VEC3 = 35672;
  constexpr const auto BOOL_VEC4 = 35673;
  constexpr const auto BROWSER_DEFAULT_WEBGL = 37444;
  constexpr const auto BUFFER_SIZE = 34660;
  constexpr const auto BUFFER_USAGE = 34661;
  constexpr const auto BYTE = 5120;
  constexpr const auto CCW = 2305;
  constexpr const auto CLAMP_TO_EDGE = 33071;
  constexpr const auto COLOR_ATTACHMENT0 = 36064;
  constexpr const auto COLOR_BUFFER_BIT = 16384;
  constexpr const auto COLOR_CLEAR_VALUE = 3106;
  constexpr const auto COLOR_WRITEMASK = 3107;
  constexpr const auto COMPILE_STATUS = 35713;
  constexpr const auto COMPRESSED_TEXTURE_FORMATS = 34467;
  constexpr const auto CONSTANT_ALPHA = 32771;
  constexpr const auto CONSTANT_COLOR = 32769;
  constexpr const auto CONTEXT_LOST_WEBGL = 37442;
  constexpr const auto CULL_FACE = 2884;
  constexpr const auto CULL_FACE_MODE = 2885;
  constexpr const auto CURRENT_PROGRAM = 35725;
  constexpr const auto CURRENT_VERTEX_ATTRIB = 34342;
  constexpr const auto CW = 2304;
  constexpr const auto DECR = 7683;
  constexpr const auto DECR_WRAP = 34056;
  constexpr const auto DELETE_STATUS = 35712;
  constexpr const auto DEPTH_ATTACHMENT = 36096;
  constexpr const auto DEPTH_BITS = 3414;
  constexpr const auto DEPTH_BUFFER_BIT = 256;
  constexpr const auto DEPTH_CLEAR_VALUE = 2931;
  constexpr const auto DEPTH_COMPONENT = 6402;
  constexpr const auto DEPTH_COMPONENT16 = 33189;
  constexpr const auto DEPTH_FUNC = 2932;
  constexpr const auto DEPTH_RANGE = 2928;
  constexpr const auto DEPTH_STENCIL = 34041;
  constexpr const auto DEPTH_STENCIL_ATTACHMENT = 33306;
  constexpr const auto DEPTH_TEST = 2929;
  constexpr const auto DEPTH_WRITEMASK = 2930;
  constexpr const auto DITHER = 3024;
  constexpr const auto DONT_CARE = 4352;
  constexpr const auto DST_ALPHA = 772;
  constexpr const auto DST_COLOR = 774;
  constexpr const auto DYNAMIC_DRAW = 35048;
  constexpr const auto ELEMENT_ARRAY_BUFFER = 34963;
  constexpr const auto ELEMENT_ARRAY_BUFFER_BINDING = 34965;
  constexpr const auto EQUAL = 514;
  constexpr const auto FASTEST = 4353;
  constexpr const auto FLOAT = 5126;
  constexpr const auto FLOAT_MAT2 = 35674;
  constexpr const auto FLOAT_MAT3 = 35675;
  constexpr const auto FLOAT_MAT4 = 35676;
  constexpr const auto FLOAT_VEC2 = 35664;
  constexpr const auto FLOAT_VEC3 = 35665;
  constexpr const auto FLOAT_VEC4 = 35666;
  constexpr const auto FRAGMENT_SHADER = 35632;
  constexpr const auto FRAMEBUFFER = 36160;
  constexpr const auto FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 36049;
  constexpr const auto FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 36048;
  constexpr const auto FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 36051;
  constexpr const auto FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 36050;
  constexpr const auto FRAMEBUFFER_BINDING = 36006;
  constexpr const auto FRAMEBUFFER_COMPLETE = 36053;
  constexpr const auto FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 36054;
  constexpr const auto FRAMEBUFFER_INCOMPLETE_DIMENSIONS = 36057;
  constexpr const auto FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 36055;
  constexpr const auto FRAMEBUFFER_UNSUPPORTED = 36061;
  constexpr const auto FRONT = 1028;
  constexpr const auto FRONT_AND_BACK = 1032;
  constexpr const auto FRONT_FACE = 2886;
  constexpr const auto FUNC_ADD = 32774;
  constexpr const auto FUNC_REVERSE_SUBTRACT = 32779;
  constexpr const auto FUNC_SUBTRACT = 32778;
  constexpr const auto GENERATE_MIPMAP_HINT = 33170;
  constexpr const auto GEQUAL = 518;
  constexpr const auto GREATER = 516;
  constexpr const auto GREEN_BITS = 3411;
  constexpr const auto HIGH_FLOAT = 36338;
  constexpr const auto HIGH_INT = 36341;
  constexpr const auto IMPLEMENTATION_COLOR_READ_FORMAT = 35739;
  constexpr const auto IMPLEMENTATION_COLOR_READ_TYPE = 35738;
  constexpr const auto INCR = 7682;
  constexpr const auto INCR_WRAP = 34055;
  constexpr const auto INT = 5124;
  constexpr const auto INT_VEC2 = 35667;
  constexpr const auto INT_VEC3 = 35668;
  constexpr const auto INT_VEC4 = 35669;
  constexpr const auto INVALID_ENUM = 1280;
  constexpr const auto INVALID_FRAMEBUFFER_OPERATION = 1286;
  constexpr const auto INVALID_OPERATION = 1282;
  constexpr const auto INVALID_VALUE = 1281;
  constexpr const auto INVERT = 5386;
  constexpr const auto KEEP = 7680;
  constexpr const auto LEQUAL = 515;
  constexpr const auto LESS = 513;
  constexpr const auto LINEAR = 9729;
  constexpr const auto LINEAR_MIPMAP_LINEAR = 9987;
  constexpr const auto LINEAR_MIPMAP_NEAREST = 9985;
  constexpr const auto LINES = 1;
  constexpr const auto LINE_LOOP = 2;
  constexpr const auto LINE_STRIP = 3;
  constexpr const auto LINE_WIDTH = 2849;
  constexpr const auto LINK_STATUS = 35714;
  constexpr const auto LOW_FLOAT = 36336;
  constexpr const auto LOW_INT = 36339;
  constexpr const auto LUMINANCE = 6409;
  constexpr const auto LUMINANCE_ALPHA = 6410;
  constexpr const auto MAX_COMBINED_TEXTURE_IMAGE_UNITS = 35661;
  constexpr const auto MAX_CUBE_MAP_TEXTURE_SIZE = 34076;
  constexpr const auto MAX_FRAGMENT_UNIFORM_VECTORS = 36349;
  constexpr const auto MAX_RENDERBUFFER_SIZE = 34024;
  constexpr const auto MAX_TEXTURE_IMAGE_UNITS = 34930;
  constexpr const auto MAX_TEXTURE_SIZE = 3379;
  constexpr const auto MAX_VARYING_VECTORS = 36348;
  constexpr const auto MAX_VERTEX_ATTRIBS = 34921;
  constexpr const auto MAX_VERTEX_TEXTURE_IMAGE_UNITS = 35660;
  constexpr const auto MAX_VERTEX_UNIFORM_VECTORS = 36347;
  constexpr const auto MAX_VIEWPORT_DIMS = 3386;
  constexpr const auto MEDIUM_FLOAT = 36337;
  constexpr const auto MEDIUM_INT = 36340;
  constexpr const auto MIRRORED_REPEAT = 33648;
  constexpr const auto NEAREST = 9728;
  constexpr const auto NEAREST_MIPMAP_LINEAR = 9986;
  constexpr const auto NEAREST_MIPMAP_NEAREST = 9984;
  constexpr const auto NEVER = 512;
  constexpr const auto NICEST = 4354;
  constexpr const auto NONE = 0;
  constexpr const auto NOTEQUAL = 517;
  constexpr const auto NO_ERROR = 0;
  constexpr const auto ONE = 1;
  constexpr const auto ONE_MINUS_CONSTANT_ALPHA = 32772;
  constexpr const auto ONE_MINUS_CONSTANT_COLOR = 32770;
  constexpr const auto ONE_MINUS_DST_ALPHA = 773;
  constexpr const auto ONE_MINUS_DST_COLOR = 775;
  constexpr const auto ONE_MINUS_SRC_ALPHA = 771;
  constexpr const auto ONE_MINUS_SRC_COLOR = 769;
  constexpr const auto OUT_OF_MEMORY = 1285;
  constexpr const auto PACK_ALIGNMENT = 3333;
  constexpr const auto POINTS = 0;
  constexpr const auto POLYGON_OFFSET_FACTOR = 32824;
  constexpr const auto POLYGON_OFFSET_FILL = 32823;
  constexpr const auto POLYGON_OFFSET_UNITS = 10752;
  constexpr const auto RED_BITS = 3410;
  constexpr const auto RENDERBUFFER = 36161;
  constexpr const auto RENDERBUFFER_ALPHA_SIZE = 36179;
  constexpr const auto RENDERBUFFER_BINDING = 36007;
  constexpr const auto RENDERBUFFER_BLUE_SIZE = 36178;
  constexpr const auto RENDERBUFFER_DEPTH_SIZE = 36180;
  constexpr const auto RENDERBUFFER_GREEN_SIZE = 36177;
  constexpr const auto RENDERBUFFER_HEIGHT = 36163;
  constexpr const auto RENDERBUFFER_INTERNAL_FORMAT = 36164;
  constexpr const auto RENDERBUFFER_RED_SIZE = 36176;
  constexpr const auto RENDERBUFFER_STENCIL_SIZE = 36181;
  constexpr const auto RENDERBUFFER_WIDTH = 36162;
  constexpr const auto RENDERER = 7937;
  constexpr const auto REPEAT = 10497;
  constexpr const auto REPLACE = 7681;
  constexpr const auto RGB = 6407;
  constexpr const auto RGB5_A1 = 32855;
  constexpr const auto RGB8 = 32849;
  constexpr const auto RGB565 = 36194;
  constexpr const auto RGBA = 6408;
  constexpr const auto RGBA4 = 32854;
  constexpr const auto RGBA8 = 32856;
  constexpr const auto SAMPLER_2D = 35678;
  constexpr const auto SAMPLER_CUBE = 35680;
  constexpr const auto SAMPLES = 32937;
  constexpr const auto SAMPLE_ALPHA_TO_COVERAGE = 32926;
  constexpr const auto SAMPLE_BUFFERS = 32936;
  constexpr const auto SAMPLE_COVERAGE = 32928;
  constexpr const auto SAMPLE_COVERAGE_INVERT = 32939;
  constexpr const auto SAMPLE_COVERAGE_VALUE = 32938;
  constexpr const auto SCISSOR_BOX = 3088;
  constexpr const auto SCISSOR_TEST = 3089;
  constexpr const auto SHADER_TYPE = 35663;
  constexpr const auto SHADING_LANGUAGE_VERSION = 35724;
  constexpr const auto SHORT = 5122;
  constexpr const auto SRC_ALPHA = 770;
  constexpr const auto SRC_ALPHA_SATURATE = 776;
  constexpr const auto SRC_COLOR = 768;
  constexpr const auto STATIC_DRAW = 35044;
  constexpr const auto STENCIL_ATTACHMENT = 36128;
  constexpr const auto STENCIL_BACK_FAIL = 34817;
  constexpr const auto STENCIL_BACK_FUNC = 34816;
  constexpr const auto STENCIL_BACK_PASS_DEPTH_FAIL = 34818;
  constexpr const auto STENCIL_BACK_PASS_DEPTH_PASS = 34819;
  constexpr const auto STENCIL_BACK_REF = 36003;
  constexpr const auto STENCIL_BACK_VALUE_MASK = 36004;
  constexpr const auto STENCIL_BACK_WRITEMASK = 36005;
  constexpr const auto STENCIL_BITS = 3415;
  constexpr const auto STENCIL_BUFFER_BIT = 1024;
  constexpr const auto STENCIL_CLEAR_VALUE = 2961;
  constexpr const auto STENCIL_FAIL = 2964;
  constexpr const auto STENCIL_FUNC = 2962;
  constexpr const auto STENCIL_INDEX8 = 36168;
  constexpr const auto STENCIL_PASS_DEPTH_FAIL = 2965;
  constexpr const auto STENCIL_PASS_DEPTH_PASS = 2966;
  constexpr const auto STENCIL_REF = 2967;
  constexpr const auto STENCIL_TEST = 2960;
  constexpr const auto STENCIL_VALUE_MASK = 2963;
  constexpr const auto STENCIL_WRITEMASK = 2968;
  constexpr const auto STREAM_DRAW = 35040;
  constexpr const auto SUBPIXEL_BITS = 3408;
  constexpr const auto TEXTURE = 5890;
  constexpr const auto TEXTURE0 = 33984;
  constexpr const auto TEXTURE1 = 33985;
  constexpr const auto TEXTURE2 = 33986;
  constexpr const auto TEXTURE3 = 33987;
  constexpr const auto TEXTURE4 = 33988;
  constexpr const auto TEXTURE5 = 33989;
  constexpr const auto TEXTURE6 = 33990;
  constexpr const auto TEXTURE7 = 33991;
  constexpr const auto TEXTURE8 = 33992;
  constexpr const auto TEXTURE9 = 33993;
  constexpr const auto TEXTURE10 = 33994;
  constexpr const auto TEXTURE11 = 33995;
  constexpr const auto TEXTURE12 = 33996;
  constexpr const auto TEXTURE13 = 33997;
  constexpr const auto TEXTURE14 = 33998;
  constexpr const auto TEXTURE15 = 33999;
  constexpr const auto TEXTURE16 = 34000;
  constexpr const auto TEXTURE17 = 34001;
  constexpr const auto TEXTURE18 = 34002;
  constexpr const auto TEXTURE19 = 34003;
  constexpr const auto TEXTURE20 = 34004;
  constexpr const auto TEXTURE21 = 34005;
  constexpr const auto TEXTURE22 = 34006;
  constexpr const auto TEXTURE23 = 34007;
  constexpr const auto TEXTURE24 = 34008;
  constexpr const auto TEXTURE25 = 34009;
  constexpr const auto TEXTURE26 = 34010;
  constexpr const auto TEXTURE27 = 34011;
  constexpr const auto TEXTURE28 = 34012;
  constexpr const auto TEXTURE29 = 34013;
  constexpr const auto TEXTURE30 = 34014;
  constexpr const auto TEXTURE31 = 34015;
  constexpr const auto TEXTURE_2D = 3553;
  constexpr const auto TEXTURE_BINDING_2D = 32873;
  constexpr const auto TEXTURE_BINDING_CUBE_MAP = 34068;
  constexpr const auto TEXTURE_CUBE_MAP = 34067;
  constexpr const auto TEXTURE_CUBE_MAP_NEGATIVE_X = 34070;
  constexpr const auto TEXTURE_CUBE_MAP_NEGATIVE_Y = 34072;
  constexpr const auto TEXTURE_CUBE_MAP_NEGATIVE_Z = 34074;
  constexpr const auto TEXTURE_CUBE_MAP_POSITIVE_X = 34069;
  constexpr const auto TEXTURE_CUBE_MAP_POSITIVE_Y = 34071;
  constexpr const auto TEXTURE_CUBE_MAP_POSITIVE_Z = 34073;
  constexpr const auto TEXTURE_MAG_FILTER = 10240;
  constexpr const auto TEXTURE_MIN_FILTER = 10241;
  constexpr const auto TEXTURE_WRAP_S = 10242;
  constexpr const auto TEXTURE_WRAP_T = 10243;
  constexpr const auto TRIANGLES = 4;
  constexpr const auto TRIANGLE_FAN = 6;
  constexpr const auto TRIANGLE_STRIP = 5;
  constexpr const auto UNPACK_ALIGNMENT = 3317;
  constexpr const auto UNPACK_COLORSPACE_CONVERSION_WEBGL = 37443;
  constexpr const auto UNPACK_FLIP_Y_WEBGL = 37440;
  constexpr const auto UNPACK_PREMULTIPLY_ALPHA_WEBGL = 37441;
  constexpr const auto UNSIGNED_BYTE = 5121;
  constexpr const auto UNSIGNED_INT = 5125;
  constexpr const auto UNSIGNED_SHORT = 5123;
  constexpr const auto UNSIGNED_SHORT_4_4_4_4 = 32819;
  constexpr const auto UNSIGNED_SHORT_5_5_5_1 = 32820;
  constexpr const auto UNSIGNED_SHORT_5_6_5 = 33635;
  constexpr const auto VALIDATE_STATUS = 35715;
  constexpr const auto VENDOR = 7936;
  constexpr const auto VERSION = 7938;
  constexpr const auto VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 34975;
  constexpr const auto VERTEX_ATTRIB_ARRAY_ENABLED = 34338;
  constexpr const auto VERTEX_ATTRIB_ARRAY_NORMALIZED = 34922;
  constexpr const auto VERTEX_ATTRIB_ARRAY_POINTER = 34373;
  constexpr const auto VERTEX_ATTRIB_ARRAY_SIZE = 34339;
  constexpr const auto VERTEX_ATTRIB_ARRAY_STRIDE = 34340;
  constexpr const auto VERTEX_ATTRIB_ARRAY_TYPE = 34341;
  constexpr const auto VERTEX_SHADER = 35633;
  constexpr const auto VIEWPORT = 2978;
  constexpr const auto ZERO = 0;

  IMPORT(void, active_texture)(int id);
  IMPORT(void, attach_shader)(int prog, int shd);
  IMPORT(void, bind_buffer)(int type, int buf);
  IMPORT(void, bind_texture)(int type, int txt);
  IMPORT(void, blend_func)(int src, int dst);
  IMPORT(void, buffer_data)(int type, const void * ptr, unsigned sz, int mode);
  IMPORT(void, clear)(int who);
  IMPORT(void, clear_color)(float r, float g, float b, float a);
  IMPORT(void, compile_shader)(int shd);
  IMPORT(int, create_buffer)();
  IMPORT(int, create_program)();
  IMPORT(int, create_shader)(int type);
  IMPORT(int, create_texture)();
  IMPORT(void, draw_arrays_instanced)(int mode, int first, int v_count, int i_count);
  IMPORT(void, enable)(int feat);
  IMPORT(void, enable_vertex_attrib_array)(int idx);
  IMPORT(void, get_program_info_log)(int prog, char * buf, unsigned sz);
  IMPORT(bool, get_program_parameter_b)(int prog, int n);
  IMPORT(void, get_shader_info_log)(int shd, char * buf, unsigned sz);
  IMPORT(bool, get_shader_parameter_b)(int shd, int n);
  IMPORT(int, get_uniform_location)(int prog, const char * name, unsigned sz);
  IMPORT(void, link_program)(int prog);
  IMPORT(void, shader_source)(int shd, const char * src, unsigned sz);
  IMPORT(void, tex_image_2d)(int t, int lvl, int i_fmt, int w, int h, int border, int fmt, int type, const void * data, int sz);
  IMPORT(void, tex_parameter_i)(int t, int p, int v);
  IMPORT(void, uniform1i)(int u, int);
  IMPORT(void, uniform2f)(int u, float, float);
  IMPORT(void, use_program)(int prog);
  IMPORT(void, vertex_attrib_divisor)(int idx, int div);
  IMPORT(void, vertex_attrib_pointer)(int idx, int qty, int type, bool norm, int stride, int offset);
  IMPORT(void, viewport)(int x, int y, int w, int h);

  int get_uniform_location(int prog, jute::view name) {
    return get_uniform_location(prog, name.begin(), name.size());
  }
}
