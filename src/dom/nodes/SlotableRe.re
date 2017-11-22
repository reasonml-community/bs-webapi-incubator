/* Mixin */
module Impl = (T: {type t;}) => {
  [@bs.get] [@bs.return null_to_opt] external assignedSlot : T.t => option(Dom.htmlSlotElement) =
    "";
};
