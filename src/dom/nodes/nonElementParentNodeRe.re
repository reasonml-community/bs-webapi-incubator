
/* Mixin */

module Impl(Type: DomInternalRe.Type) => {
  external getElementById : string => option DomTypesRe.element = "" [@@bs.send.pipe: Type.t] [@@bs.return null_to_opt];
};