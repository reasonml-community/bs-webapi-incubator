
/* Mixin */

module Impl(Type: DomInternalRe.Type) => {

  external children : Type.t => DomTypesRe.htmlCollection = "" [@@bs.get];
  external firstElementChild : Type.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external lastElementChild : Type.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external childElementCount : Type.t => int = "" [@@bs.get];

  external querySelector : string => option DomTypesRe.element = "" [@@bs.send.pipe: Type.t] [@@bs.return null_to_opt];
  external querySelectorAll : string => DomTypesRe.nodeList = "" [@@bs.send.pipe: Type.t];
};