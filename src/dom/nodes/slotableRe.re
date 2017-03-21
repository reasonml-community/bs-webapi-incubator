
/* Mixin */

module Impl(T: { type t; }) => {
  external assignedSlot : T.t => option DomTypesRe.htmlSlotElement = "" [@@bs.get] [@@bs.return null_to_opt];
};