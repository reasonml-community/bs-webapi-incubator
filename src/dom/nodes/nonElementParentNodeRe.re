
/* Mixin */

module Impl(T: { type t; }) => {
  external getElementById : string => option DomTypesRe.element = "" [@@bs.send.pipe: T.t] [@@bs.return null_to_opt];
};