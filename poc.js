!function() {
  const canvas = document.getElementById("casein-canvas");
  const gl = canvas.getContext("webgl");
  const ext_ia = gl.getExtension("ANGLE_instanced_arrays");

  var b = [ null ];
  function i(who) { return b.push(who) - 1; }

  function into(str, ptr, sz) { vaselin_toarr(ptr, sz).set(new TextEncoder().encode(str)); }
  function outo(ptr, sz) { return vaselin_tostr(ptr, sz); }

  leco_imports.gelo = {
    attach_shader : (p, s) => gl.attachShader(b[p], b[s]),
    bind_buffer : (t, n) => gl.bindBuffer(t, b[n]),
    buffer_data : (t, ptr, sz, m) => gl.bufferData(t, vaselin_toarr(ptr, sz), m),
    compile_shader : (s) => gl.compileShader(b[s]),
    create_buffer : () => i(gl.createBuffer()),
    create_program : () => i(gl.createProgram()),
    create_shader : (t) => i(gl.createShader(t)),
    enable_vertex_attrib_array : (n) => gl.enableVertexAttribArray(n),
    get_program_info_log : (s, ptr, sz) => into(gl.getProgramInfoLog(b[s]), ptr, sz),
    get_program_parameter_b : (s, n) => !!gl.getProgramParameter(b[s], n),
    get_shader_info_log : (s, ptr, sz) => into(gl.getShaderInfoLog(b[s]), ptr, sz),
    get_shader_parameter_b : (s, n) => !!gl.getShaderParameter(b[s], n),
    link_program : (p) => gl.linkProgram(b[p]),
    shader_source : (s, ptr, sz) => gl.shaderSource(b[s], outo(ptr, sz)),
    use_program : (p) => gl.useProgram(b[p]),
    vertex_attrib_array_pointer : gl.vertexAttribPointer.bind(gl),
  };
}();
