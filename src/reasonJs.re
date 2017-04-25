external requestAnimationFrame : (float => unit) => unit = "" [@@bs.val];

module Base64 = Base64Re;
module Gl = GlRe;
module Canvas2d = Canvas2d;

module Storage = StorageRe;

module CanvasElement = {
  external getWebglContext : Dom.element => (_ [@bs.as "webgl"]) => Gl.glT = "getContext" [@@bs.send];
  external get2dContext : Dom.element => (_ [@bs.as "2d"]) => Canvas2d.ctx = "getContext" [@@bs.send];
};

module Dom = DomRe;
