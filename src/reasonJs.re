external requestAnimationFrame : (float => unit) => unit = "" [@@bs.val];

module Base64 = Base64Re;
module Gl = GlRe;

module Storage = StorageRe;

module CanvasElement = {
  external getContext : Dom.element => string => Gl.glT = "" [@@bs.send];
};

module Dom = DomRe;
