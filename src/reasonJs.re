external requestAnimationFrame : (unit => unit) => unit = "" [@@bs.val];

module Base64 = Base64Re;
module Date = Js.Date;
module Json = JsonRe;
module Object = ObjectRe;

module Dom = DomRe;

module Fetch = Bs_fetch
[@@ocaml.deprecated "Use the `bs-fetch` package directly instead"];

module Float32Array = Float32ArrayRe;
module Gl = GlRe;
module Uint16Array = Uint16ArrayRe;

module Storage = StorageRe;

module CanvasElement = {
  external getContext : DomRe.element => string => Gl.glT = "" [@@bs.send];
};
