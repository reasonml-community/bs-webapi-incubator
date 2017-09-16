
/* Mixin */

module Impl(T: { type t; }) => {

  external children : T.t => Dom.htmlCollection = "" [@@bs.get];
  external firstElementChild : T.t => option Dom.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external lastElementChild : T.t => option Dom.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external childElementCount : T.t => int = "" [@@bs.get];

  external querySelector : string => option Dom.element = "" [@@bs.send.pipe: T.t] [@@bs.return null_to_opt];
  external querySelectorAll : string => Dom.nodeList = "" [@@bs.send.pipe: T.t];
};
