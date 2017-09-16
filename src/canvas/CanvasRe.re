
module Canvas2d = Canvas2dRe;
module WebGl = WebGlRe;

module CanvasElement = {
  external getContext2d : Dom.element => (_ [@bs.as "2d"]) => Canvas2d.t = "getContext" [@@bs.send];
  external getContextWebGl : Dom.element => (_ [@bs.as "webgl"]) => WebGl.glT = "getContext" [@@bs.send];
};