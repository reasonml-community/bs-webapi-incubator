
/* Mixin */

module Impl(Type: DomInternalRe.Type) => {
  external remove : unit = "" [@@bs.send.pipe: Type.t];
};