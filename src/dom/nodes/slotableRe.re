
/* Mixin */

module Impl(T: { type t; }) => {
  external assignedSlot : T.t => option Dom.htmlSlotElement = "" [@@bs.get] [@@bs.return null_to_opt];
};