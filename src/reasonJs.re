
external requestAnimationFrame : (float => unit) => unit = "" [@@bs.val]
[@@ocaml.deprecated "Use Bs_webapi.requestAnimationFrame instead"];

module Base64 = Base64Re
[@@ocaml.deprecated "Use Bs_webapi.Base64 instead"];
module Gl = GlRe
[@@ocaml.deprecated "Use Bs_webapi.Gl instead"];
module Canvas2d = Canvas2dRe
[@@ocaml.deprecated "Use Bs_webapi.Canvas2d instead"];

module Storage = StorageRe
[@@ocaml.deprecated "Use Bs_webapi.Storage instead"];

module CanvasElement = {
  external getContextWebGl : Dom.element => (_ [@bs.as "webgl"]) => Gl.glT = "getContext" [@@bs.send];
  external getContext2d : Dom.element => (_ [@bs.as "2d"]) => Canvas2d.t = "getContext" [@@bs.send];
}
[@@ocaml.deprecated "Use Bs_webapi.CanvasElement instead"];

module Dom = DomRe
[@@ocaml.deprecated "Use Bs_webapi.Dom instead"];
