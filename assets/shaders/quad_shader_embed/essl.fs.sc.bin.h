static const uint8_t essl_quad_fragment_shader_bin[3049] = {
    0x46, 0x53, 0x48, 0x0b, 0xdd, 0x2c, 0xd7, 0xd4, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x09, 0x75, // FSH..,.........u
    0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x30, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _Albedo0........
    0x00, 0x00, 0x09, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x00, 0x01, 0x00, 0x00, // ...u_Albedo1....
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x32, // .......u_Albedo2
    0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x75, 0x5f, 0x41, 0x6c, 0x62, // ...........u_Alb
    0x65, 0x64, 0x6f, 0x33, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x75, // edo3...........u
    0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x34, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _Albedo4........
    0x00, 0x00, 0x09, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x35, 0x00, 0x01, 0x00, 0x00, // ...u_Albedo5....
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x36, // .......u_Albedo6
    0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x75, 0x5f, 0x41, 0x6c, 0x62, // ...........u_Alb
    0x65, 0x64, 0x6f, 0x37, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x75, // edo7...........u
    0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x38, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _Albedo8........
    0x00, 0x00, 0x09, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x39, 0x00, 0x01, 0x00, 0x00, // ...u_Albedo9....
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, // .......u_Albedo1
    0x30, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x41, 0x6c, // 0...........u_Al
    0x62, 0x65, 0x64, 0x6f, 0x31, 0x31, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // bedo11..........
    0x0a, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x32, 0x00, 0x01, 0x00, 0x00, 0x01, // .u_Albedo12.....
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x33, // ......u_Albedo13
    0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x41, 0x6c, 0x62, // ...........u_Alb
    0x65, 0x64, 0x6f, 0x31, 0x34, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, // edo14...........
    0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x35, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, // u_Albedo15......
    0x00, 0x00, 0x00, 0x00, 0x90, 0x0a, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, // ........varying
    0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, // highp vec4 v_col
    0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, // or0;.varying hig
    0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // hp vec2 v_texcoo
    0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, // rd0;.varying hig
    0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // hp float v_texco
    0x6f, 0x72, 0x64, 0x31, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, // ord1;.varying hi
    0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ghp float v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x32, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, // oord2;.uniform s
    0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, // ampler2D u_Albed
    0x6f, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, // o0;.uniform samp
    0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x3b, // ler2D u_Albedo1;
    0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // .uniform sampler
    0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x32, 0x3b, 0x0a, 0x75, 0x6e, // 2D u_Albedo2;.un
    0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, // iform sampler2D
    0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x33, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // u_Albedo3;.unifo
    0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, // rm sampler2D u_A
    0x6c, 0x62, 0x65, 0x64, 0x6f, 0x34, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // lbedo4;.uniform
    0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, // sampler2D u_Albe
    0x64, 0x6f, 0x35, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, // do5;.uniform sam
    0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x36, // pler2D u_Albedo6
    0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, // ;.uniform sample
    0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x37, 0x3b, 0x0a, 0x75, // r2D u_Albedo7;.u
    0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // niform sampler2D
    0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x38, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, //  u_Albedo8;.unif
    0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, // orm sampler2D u_
    0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x39, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // Albedo9;.uniform
    0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, //  sampler2D u_Alb
    0x65, 0x64, 0x6f, 0x31, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, // edo10;.uniform s
    0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, // ampler2D u_Albed
    0x6f, 0x31, 0x31, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, // o11;.uniform sam
    0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, // pler2D u_Albedo1
    0x32, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, // 2;.uniform sampl
    0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x33, 0x3b, // er2D u_Albedo13;
    0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // .uniform sampler
    0x32, 0x44, 0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x34, 0x3b, 0x0a, 0x75, // 2D u_Albedo14;.u
    0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // niform sampler2D
    0x20, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x35, 0x3b, 0x0a, 0x76, 0x6f, 0x69, //  u_Albedo15;.voi
    0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, // d main ().{.  lo
    0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // wp vec4 texColor
    0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, // _1;.  texColor_1
    0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x69, //  = v_color0;.  i
    0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // f ((int(v_texcoo
    0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, // rd1) == 0)) {.
    0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, //   texColor_1 = (
    0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // v_color0 * textu
    0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x30, 0x2c, // re2D (u_Albedo0,
    0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, //  (v_texcoord0 *
    0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, // v_texcoord2)));.
    0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, //   };.  if ((int(
    0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, // v_texcoord1) ==
    0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // 1)) {.    texCol
    0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // or_1 = (texColor
    0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, // _1 * texture2D (
    0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, // u_Albedo1, (v_te
    0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // xcoord0 * v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, // oord2)));.  };.
    0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, //  if ((int(v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x32, 0x29, 0x29, 0x20, 0x7b, 0x0a, // oord1) == 2)) {.
    0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, //     texColor_1 =
    0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, //  (texColor_1 * t
    0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, // exture2D (u_Albe
    0x64, 0x6f, 0x32, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // do2, (v_texcoord
    0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, // 0 * v_texcoord2)
    0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, // ));.  };.  if ((
    0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, // int(v_texcoord1)
    0x20, 0x3d, 0x3d, 0x20, 0x33, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, //  == 3)) {.    te
    0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, // xColor_1 = (texC
    0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // olor_1 * texture
    0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x33, 0x2c, 0x20, 0x28, // 2D (u_Albedo3, (
    0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, // v_texcoord0 * v_
    0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // texcoord2)));.
    0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, // };.  if ((int(v_
    0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x34, 0x29, // texcoord1) == 4)
    0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ) {.    texColor
    0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, // _1 = (texColor_1
    0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, //  * texture2D (u_
    0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x34, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // Albedo4, (v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // oord0 * v_texcoo
    0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, // rd2)));.  };.  i
    0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // f ((int(v_texcoo
    0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x35, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, // rd1) == 5)) {.
    0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, //   texColor_1 = (
    0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, // texColor_1 * tex
    0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, // ture2D (u_Albedo
    0x35, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, // 5, (v_texcoord0
    0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, // * v_texcoord2)))
    0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, // ;.  };.  if ((in
    0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, // t(v_texcoord1) =
    0x3d, 0x20, 0x36, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, // = 6)) {.    texC
    0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // olor_1 = (texCol
    0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // or_1 * texture2D
    0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x36, 0x2c, 0x20, 0x28, 0x76, 0x5f, //  (u_Albedo6, (v_
    0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, // texcoord0 * v_te
    0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, // xcoord2)));.  };
    0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, // .  if ((int(v_te
    0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x37, 0x29, 0x29, 0x20, // xcoord1) == 7))
    0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, // {.    texColor_1
    0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, //  = (texColor_1 *
    0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, //  texture2D (u_Al
    0x62, 0x65, 0x64, 0x6f, 0x37, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // bedo7, (v_texcoo
    0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // rd0 * v_texcoord
    0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, // 2)));.  };.  if
    0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ((int(v_texcoord
    0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x38, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // 1) == 8)) {.
    0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, // texColor_1 = (te
    0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // xColor_1 * textu
    0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x38, 0x2c, // re2D (u_Albedo8,
    0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, //  (v_texcoord0 *
    0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, // v_texcoord2)));.
    0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, //   };.  if ((int(
    0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, // v_texcoord1) ==
    0x39, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // 9)) {.    texCol
    0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // or_1 = (texColor
    0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, // _1 * texture2D (
    0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x39, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, // u_Albedo9, (v_te
    0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // xcoord0 * v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, // oord2)));.  };.
    0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, //  if ((int(v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x30, 0x29, 0x29, 0x20, 0x7b, // oord1) == 10)) {
    0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, // .    texColor_1
    0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, // = (texColor_1 *
    0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, // texture2D (u_Alb
    0x65, 0x64, 0x6f, 0x31, 0x30, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // edo10, (v_texcoo
    0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // rd0 * v_texcoord
    0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, // 2)));.  };.  if
    0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ((int(v_texcoord
    0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, // 1) == 11)) {.
    0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, //  texColor_1 = (t
    0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, // exColor_1 * text
    0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, // ure2D (u_Albedo1
    0x31, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, // 1, (v_texcoord0
    0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, // * v_texcoord2)))
    0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, // ;.  };.  if ((in
    0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, // t(v_texcoord1) =
    0x3d, 0x20, 0x31, 0x32, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, // = 12)) {.    tex
    0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, // Color_1 = (texCo
    0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // lor_1 * texture2
    0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x32, 0x2c, 0x20, 0x28, // D (u_Albedo12, (
    0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, // v_texcoord0 * v_
    0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // texcoord2)));.
    0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, // };.  if ((int(v_
    0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x33, // texcoord1) == 13
    0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // )) {.    texColo
    0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, // r_1 = (texColor_
    0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, // 1 * texture2D (u
    0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, 0x33, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, // _Albedo13, (v_te
    0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // xcoord0 * v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, // oord2)));.  };.
    0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, //  if ((int(v_texc
    0x6f, 0x6f, 0x72, 0x64, 0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x34, 0x29, 0x29, 0x20, 0x7b, // oord1) == 14)) {
    0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, // .    texColor_1
    0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, // = (texColor_1 *
    0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, // texture2D (u_Alb
    0x65, 0x64, 0x6f, 0x31, 0x34, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // edo14, (v_texcoo
    0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // rd0 * v_texcoord
    0x32, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, // 2)));.  };.  if
    0x28, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ((int(v_texcoord
    0x31, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x35, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, // 1) == 15)) {.
    0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, //  texColor_1 = (t
    0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, // exColor_1 * text
    0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x31, // ure2D (u_Albedo1
    0x35, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, // 5, (v_texcoord0
    0x2a, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x29, 0x29, 0x29, // * v_texcoord2)))
    0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x65, // ;.  };.  if ((te
    0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, // xColor_1.w == 0.
    0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, // 0)) {.    discar
    0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, // d;.  };.  gl_Fra
    0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // gColor = texColo
    0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // r_1;.}...
};