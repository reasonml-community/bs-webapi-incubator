type glT;
type programT;
type shaderT;
type bufferT;

/* ClearBufferMask */
let _DEPTH_BUFFER_BIT: int = 256;
let _STENCIL_BUFFER_BIT: int = 1024;
let _COLOR_BUFFER_BIT: int = 16384;

/* BeginMode */
let _POINTS: int = 0;
let _LINES: int = 1;
let _LINE_LOOP: int = 2;
let _LINE_STRIP: int = 3;
let _TRIANGLES: int = 4;
let _TRIANGLE_STRIP: int = 5;
let _TRIANGLE_FAN: int = 6;

/* TEXTURE_2D */
let _CULL_FACE: int = 2884;
let _BLEND: int = 3042;
let _DITHER: int = 3024;
let _STENCIL_TEST: int = 2960;
let _DEPTH_TEST: int = 2929;
let _SCISSOR_TEST: int = 3089;
let _POLYGON_OFFSET_FILL: int = 32823;
let _SAMPLE_ALPHA_TO_COVERAGE: int = 32926;
let _SAMPLE_COVERAGE: int = 32928;

/* BlendingFactorDest */
let _ZERO: int = 0;
let _ONE: int = 1;
let _SRC_COLOR: int = 768;
let _ONE_MINUS_SRC_COLOR: int = 769;
let _SRC_ALPHA: int = 770;
let _ONE_MINUS_SRC_ALPHA: int = 771;
let _DST_ALPHA: int = 772;
let _ONE_MINUS_DST_ALPHA: int = 773;

/* DataType */
let _BYTE: int = 5120;
let _UNSIGNED_BYTE: int = 5121;
let _SHORT: int = 5122;
let _UNSIGNED_SHORT: int = 5123;
let _INT: int = 5124;
let _UNSIGNED_INT: int = 5125;
let _FLOAT: int = 5126;

/* CullFaceMode */
let _FRONT: int = 1028;
let _BACK: int = 1029;
let _FRONT_AND_BACK: int = 1032;

/* Shaders */
let _FRAGMENT_SHADER: int = 35632;
let _VERTEX_SHADER: int = 35633;

/* Buffer Objects */
let _ARRAY_BUFFER: int = 34962;
let _ELEMENT_ARRAY_BUFFER: int = 34963;
let _ARRAY_BUFFER_BINDING: int = 34964;
let _ELEMENT_ARRAY_BUFFER_BINDING: int = 34965;
let _STREAM_DRAW: int = 35040;
let _STATIC_DRAW: int = 35044;
let _DYNAMIC_DRAW: int = 35048;

/* void clear(GLbitfield mask); */
external clear : glT => int => unit = "clear" [@@bs.send];
/* void clearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); */
external clearColor : glT => float => float => float => float => unit = "clearColor" [@@bs.send];
/* void enable(GLenum cap); */
external enable : glT => int => unit = "enable" [@@bs.send];
/* void disable(GLenum cap); */
external disable : glT => int => unit = "disable" [@@bs.send];
/* void blendFunc(GLenum sfactor, GLenum dfactor); */
external blendFunc : glT => int => int => unit = "blendFunc" [@@bs.send];
/* void cullFace(GLenum mode); */
external cullFace : glT => int => unit = "cullFace" [@@bs.send];
external createBuffer : glT => bufferT = "createBuffer" [@@bs.send];
external deleteBuffer : glT => bufferT => unit = "createBuffer" [@@bs.send];
external bindBuffer : glT => int => bufferT => unit = "bindBuffer" [@@bs.send];
external bufferData : glT => int => Uint16ArrayRe.t => int => unit = "bufferData" [@@bs.send];
external bufferFloatData : glT => int => Float32ArrayRe.t => int => unit =
  "bufferData" [@@bs.send];
external createProgram : glT => programT = "createProgram" [@@bs.send];
external linkProgram : glT => programT => unit = "linkProgram" [@@bs.send];
external useProgram : glT => programT => unit = "useProgram" [@@bs.send];
external getProgramInfoLog : glT => programT => string = "getProgramInfoLog" [@@bs.send];
external bindAttribLocation : glT => programT => int => string => unit =
  "bindAttribLocation" [@@bs.send];
external createShader : glT => int => shaderT = "createShader" [@@bs.send];
external shaderSource : glT => shaderT => string => unit = "shaderSource" [@@bs.send];
external compileShader : glT => shaderT => unit = "compileShader" [@@bs.send];
external attachShader : glT => programT => shaderT => unit = "attachShader" [@@bs.send];
external getShaderInfoLog : glT => shaderT => string = "getShaderInfoLog" [@@bs.send];
/* void drawElements(GLenum mode, GLsizei count, GLenum type, GLintptr offset); */
external drawElements : glT => int => int => int => int => unit = "drawElements" [@@bs.send];
/* void enableVertexAttribArray(GLuint index); */
external enableVertexAttribArray : glT => int => unit = "enableVertexAttribArray" [@@bs.send];
/* void vertexAttribPointer(GLuint indx, GLint size, GLenum type,
   GLboolean normalized, GLsizei stride, GLintptr offset); */
external vertexAttribPointer : glT => int => int => int => Js.boolean => int => int => unit =
  "vertexAttribPointer" [@@bs.send];
