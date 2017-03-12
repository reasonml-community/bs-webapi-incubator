
/* Mixin */

module Impl(Type: DomInternalRe.Type) => {
  external previousElementSibling : Type.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external nextElementSibling : Type.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
};