module Canvas2d = Canvas2dRe;
module WebGl = WebGlRe;

module CanvasElement = {
  [@bs.send] external getContext2d : (Dom.element, [@bs.as "2d"] _) => Canvas2d.t = "getContext";
  [@bs.send] external getContextWebGl : (Dom.element, [@bs.as "webgl"] _) => WebGl.glT = "getContext";
};
