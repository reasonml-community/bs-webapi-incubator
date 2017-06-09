external requestAnimationFrame : (float => unit) => unit = "" [@@bs.val];

module Base64 = Base64Re;
module Gl = GlRe;
module Canvas2d = Canvas2dRe;

module Storage = StorageRe;

module CanvasElement = {
  external getContextWebGl : Dom.element => (_ [@bs.as "webgl"]) => Gl.glT = "getContext" [@@bs.send];
  external getContext2d : Dom.element => (_ [@bs.as "2d"]) => Canvas2d.t = "getContext" [@@bs.send];
};

module Dom = DomRe;
