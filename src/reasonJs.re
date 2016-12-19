module Window = {
  type t;
  external window : t = "window" [@@bs.val];
  external innerWidth : t => int = "innerWidth" [@@bs.get];
  external innerHeight : t => int = "innerHeight" [@@bs.get];
  external addEventListener : t => string => (unit => unit) => unit = "addEventListener" [@@bs.send];
  external requestAnimationFrame : t => (unit => unit) => unit = "requestAnimationFrame" [@@bs.send];
  external onLoad : t => (unit => unit) => unit = "onload" [@@bs.set];
};

module Date = {
  type t;
  external make : unit => t = "Date" [@@bs.new];
  external makeWithValue : int => t = "Date" [@@bs.new];
  external now : unit => int = "" [@@bs.val "Date.now"];
  external getTimezoneOffset : t => int = "" [@@bs.send "getTimezoneOffset"];
  external getHours : t => int = "" [@@bs.send "getHours"];
  external getTime : t => int = "" [@@bs.send "getTime"];
};

/* TODO: maybe remove this. We have Random.float 1.0 in OCaml */
module Math = {
  external random : unit => float = "Math.random" [@@bs.val];
};

module Float32Array = {
  type t;
  external make : array float => t = "Float32Array" [@@bs.new];
};

module Uint16Array = {
  type t;
  external make : array int => t = "Uint16Array" [@@bs.new];
};

module GL = {
  type glT;
  type programT;
  type shaderT;
  type bufferT;

  /* ClearBufferMask */
  let _DEPTH_BUFFER_BIT : int               = 0x00000100;
  let _STENCIL_BUFFER_BIT : int             = 0x00000400;
  let _COLOR_BUFFER_BIT : int               = 0x00004000;

  /* BeginMode */
  let _POINTS : int                         = 0x0000;
  let _LINES : int                          = 0x0001;
  let _LINE_LOOP : int                      = 0x0002;
  let _LINE_STRIP : int                     = 0x0003;
  let _TRIANGLES : int                      = 0x0004;
  let _TRIANGLE_STRIP : int                 = 0x0005;
  let _TRIANGLE_FAN : int                   = 0x0006;


  /* TEXTURE_2D */
  let _CULL_FACE : int                      = 0x0B44;
  let _BLEND : int                          = 0x0BE2;
  let _DITHER : int                         = 0x0BD0;
  let _STENCIL_TEST : int                   = 0x0B90;
  let _DEPTH_TEST : int                     = 0x0B71;
  let _SCISSOR_TEST : int                   = 0x0C11;
  let _POLYGON_OFFSET_FILL : int            = 0x8037;
  let _SAMPLE_ALPHA_TO_COVERAGE : int       = 0x809E;
  let _SAMPLE_COVERAGE : int                = 0x80A0;

  /* BlendingFactorDest */
  let _ZERO : int                           = 0;
  let _ONE : int                            = 1;
  let _SRC_COLOR : int                      = 0x0300;
  let _ONE_MINUS_SRC_COLOR : int            = 0x0301;
  let _SRC_ALPHA : int                      = 0x0302;
  let _ONE_MINUS_SRC_ALPHA : int            = 0x0303;
  let _DST_ALPHA : int                      = 0x0304;
  let _ONE_MINUS_DST_ALPHA : int            = 0x0305;

  /* DataType */
  let _BYTE : int                           = 0x1400;
  let _UNSIGNED_BYTE : int                  = 0x1401;
  let _SHORT : int                          = 0x1402;
  let _UNSIGNED_SHORT : int                 = 0x1403;
  let _INT : int                            = 0x1404;
  let _UNSIGNED_INT : int                   = 0x1405;
  let _FLOAT : int                          = 0x1406;

  /* CullFaceMode */
  let _FRONT : int                          = 0x0404;
  let _BACK : int                           = 0x0405;
  let _FRONT_AND_BACK : int                 = 0x0408;

  /* Shaders */
  let _FRAGMENT_SHADER : int                  = 0x8B30;
  let _VERTEX_SHADER : int                    = 0x8B31;

  /* Buffer Objects */
  let _ARRAY_BUFFER : int                   = 0x8892;
  let _ELEMENT_ARRAY_BUFFER : int           = 0x8893;
  let _ARRAY_BUFFER_BINDING : int           = 0x8894;
  let _ELEMENT_ARRAY_BUFFER_BINDING : int   = 0x8895;

  let _STREAM_DRAW : int                    = 0x88E0;
  let _STATIC_DRAW : int                    = 0x88E4;
  let _DYNAMIC_DRAW : int                   = 0x88E8;

  /* void clear(GLbitfield mask); */
  external clear : glT => int => unit = "clear" [@@bs.send];

  /* void clearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); */
  external clearColor : glT => float => float => float => float => unit = "clearColor" [@@bs.send];

  /* void enable(GLenum cap); */
  external enable : glT => int => unit = "enable" [@@bs.send];

  /* void disable(GLenum cap); */
  external disable : glT => int => unit = "disable" [@@bs.send];

  /* void blendFunc(GLenum sfactor, GLenum dfactor); */
  external blendFunc: glT => int => int => unit = "blendFunc" [@@bs.send];

  /* void cullFace(GLenum mode); */
  external cullFace: glT => int => unit = "cullFace" [@@bs.send];

  external createBuffer: glT => bufferT = "createBuffer" [@@bs.send];
  external deleteBuffer: glT => bufferT => unit = "createBuffer" [@@bs.send];
  external bindBuffer: glT => int => bufferT => unit = "bindBuffer" [@@bs.send];
  external bufferData: glT => int => Uint16Array.t => int => unit = "bufferData" [@@bs.send];
  external bufferFloatData: glT => int => Float32Array.t => int => unit = "bufferData" [@@bs.send];


  external createProgram: glT => programT = "createProgram" [@@bs.send];
  external linkProgram: glT => programT => unit = "linkProgram" [@@bs.send];
  external useProgram: glT => programT => unit = "useProgram" [@@bs.send];
  external getProgramInfoLog: glT => programT => string = "getProgramInfoLog" [@@bs.send];
  external bindAttribLocation: glT => programT => int => string => unit = "bindAttribLocation" [@@bs.send];

  external createShader: glT => int => shaderT = "createShader" [@@bs.send];
  external shaderSource: glT => shaderT => string => unit = "shaderSource" [@@bs.send];
  external compileShader: glT => shaderT => unit = "compileShader" [@@bs.send];
  external attachShader: glT => programT => shaderT => unit = "attachShader" [@@bs.send];
  external getShaderInfoLog: glT => shaderT => string = "getShaderInfoLog" [@@bs.send];

  /* void drawElements(GLenum mode, GLsizei count, GLenum type, GLintptr offset); */
  external drawElements: glT => int => int => int => int => unit = "drawElements" [@@bs.send];


  /* void enableVertexAttribArray(GLuint index); */
  external enableVertexAttribArray: glT => int => unit = "enableVertexAttribArray" [@@bs.send];
  /* void vertexAttribPointer(GLuint indx, GLint size, GLenum type,
                             GLboolean normalized, GLsizei stride, GLintptr offset); */
  external vertexAttribPointer: glT => int => int => int => bool => int => int => unit = "vertexAttribPointer" [@@bs.send];
};

module Document = {
  type element;
  external getElementById : string => element = "document.getElementById" [@@bs.val];
  external appendChild : element => 'element => unit = "appendChild" [@@bs.send];

  /* Should be on CanvasElement */
  external getContext : element => string => GL.glT = "getContext" [@@bs.send];
};

external log: string => unit = "console.log" [@@bs.val];

type intervalId;

external setInterval : (unit => unit) => int => intervalId = "setInterval" [@@bs.val];

external clearInterval : intervalId => unit = "clearInterval" [@@bs.val];

type timeoutId;

external setTimeout : (unit => unit) => int => timeoutId = "setTimeout" [@@bs.val];

external clearTimeout : timeoutId => unit = "clearTimeout" [@@bs.val];

module LocalStorage = {
  external getItem : string => 'a = "localStorage.getItem" [@@bs.val];
  external setItem : string => 'a => unit = "localStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "localStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "localStorage.clear" [@@bs.val];
  external key : int => 'a = "localStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|localStorage.length|}];
};

module SessionStorage = {
  external getItem : string => 'a = "sessionStorage.getItem" [@@bs.val];
  external setItem : string => 'a => unit = "sessionStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "sessionStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "sessionStorage.clear" [@@bs.val];
  external key : int => 'a = "sessionStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|sessionStorage.length|}];
};

module Promise = {
  type promiseT 'a;
  type errorT;
  external thenDo : promiseT 'a => ('a => 'b) => promiseT 'b = "then" [@@bs.send];
  external catchError : promiseT 'a => (errorT => unit) => promiseT 'a = "catch" [@@bs.send];
};

module Response = {
  type responseT;
  /* TODO: type Headers */
  external ok : responseT => Js.boolean = "ok" [@@bs.get];
  external redirected : responseT => Js.boolean = "redirected" [@@bs.get];
  external status : responseT => int = "status" [@@bs.get];
  external statusText : responseT => string = "statusText" [@@bs.get];
  external type_ : responseT => string = "type" [@@bs.get];
  external url : responseT => string = "url" [@@bs.get];

  /** body getters **/
  external json : responseT => Js.t 'a = "json" [@@bs.send];
  external text : responseT => string = "text" [@@bs.send];
};

external fetch : string => Promise.promiseT Response.responseT = "fetch" [@@bs.val];
