
/* Mixin */

module Impl(T: { type t; }) => {
  external remove : unit = "" [@@bs.send.pipe: T.t];
};