
/* Mixin */

module Impl(T: { type t; }) => {

  external children : T.t => DomTypesRe.htmlCollection = "" [@@bs.get];
  external firstElementChild : T.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external lastElementChild : T.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external childElementCount : T.t => int = "" [@@bs.get];

  external querySelector : string => option DomTypesRe.element = "" [@@bs.send.pipe: T.t] [@@bs.return null_to_opt];
  external querySelectorAll : string => DomTypesRe.nodeList = "" [@@bs.send.pipe: T.t];
};