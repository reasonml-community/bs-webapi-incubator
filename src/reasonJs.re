external requestAnimationFrame : (unit => unit) => unit = "" [@@bs.val];

module Base64 = Base64Re;
module Date = Js.Date;
module Json = JsonRe;
module Object = ObjectRe;

module Dom = DomRe;

module Fetch = FetchRe;

module Float32Array = Float32ArrayRe;
module Gl = GlRe;
module Uint16Array = Uint16ArrayRe;

module Storage = StorageRe;

module CanvasElement = {
  external getContext : DomRe.element => string => Gl.glT = "" [@@bs.send];
};
