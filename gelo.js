!function() {
  const canvas = document.getElementById("casein-canvas");
  const gl = canvas.getContext("webgl");
  const ext_ia = gl.getExtension("ANGLE_instanced_arrays");

  var b = [ null ];
  function i(who) { return b.push(who) - 1; }

  function into(str, ptr, sz) { vaselin_toarr(ptr, sz).set(new TextEncoder().encode(str)); }
  function outo(ptr, sz) { return vaselin_tostr(ptr, sz); }

  leco_imports.gelo = {
    active_texture : gl.activeTexture.bind(gl),
    attach_shader : (p, s) => gl.attachShader(b[p], b[s]),
    bind_buffer : (t, n) => gl.bindBuffer(t, b[n]),
    bind_texture : (t, n) => gl.bindTexture(t, b[n]),
    blend_func : gl.blendFunc.bind(gl),
    buffer_data : (t, ptr, sz, m) => gl.bufferData(t, vaselin_toarr(ptr, sz), m),
    clear : gl.clear.bind(gl),
    clear_color : gl.clearColor.bind(gl),
    compile_shader : (s) => gl.compileShader(b[s]),
    create_buffer : () => i(gl.createBuffer()),
    create_program : () => i(gl.createProgram()),
    create_shader : (t) => i(gl.createShader(t)),
    create_texture : () => i(gl.createTexture()),
    draw_arrays_instanced : ext_ia.drawArraysInstancedANGLE.bind(ext_ia),
    enable : gl.enable.bind(gl),
    enable_vertex_attrib_array : gl.enableVertexAttribArray.bind(gl),
    get_program_info_log : (s, ptr, sz) => into(gl.getProgramInfoLog(b[s]), ptr, sz),
    get_program_parameter_b : (s, n) => !!gl.getProgramParameter(b[s], n),
    get_shader_info_log : (s, ptr, sz) => into(gl.getShaderInfoLog(b[s]), ptr, sz),
    get_shader_parameter_b : (s, n) => !!gl.getShaderParameter(b[s], n),
    get_uniform_location : (p, ptr, sz) => gl.getUniformLocation(p, outo(ptr, sz)),
    link_program : (p) => gl.linkProgram(b[p]),
    shader_source : (s, ptr, sz) => gl.shaderSource(b[s], outo(ptr, sz)),
    tex_image_2d : (t, l, i, w, h, b, f, tp, ptr, sz) => gl.texImage2D(t, l, i, w, h, b, f, tp, vaselin_toarr(ptr, sz)),
    tex_parameter_i : gl.texParameteri.bind(gl),
    uniform2f : gl.uniform2f.bind(gl),
    uniform2i : gl.uniform2i.bind(gl),
    use_program : (p) => gl.useProgram(b[p]),
    vertex_attrib_divisor : ext_ia.vertexAttribDivisorANGLE.bind(gl),
    vertex_attrib_pointer : gl.vertexAttribPointer.bind(gl),
    viewport : gl.viewport.bind(gl),
  };
}();
