
/* Mixin */

module Impl(Type: DomInternalRe.Type) => {
  external assignedSlot : Type.t => option DomTypesRe.htmlSlotElement = "" [@@bs.get] [@@bs.return null_to_opt];
};