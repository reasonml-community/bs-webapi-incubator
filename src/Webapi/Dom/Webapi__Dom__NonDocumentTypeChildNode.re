/* Mixin */
module Impl = (T: {type t;}) => {
  [@bs.get] [@bs.return nullable] external previousElementSibling : T.t => option(Dom.element) = "previousElementSibling";
  [@bs.get] [@bs.return nullable] external nextElementSibling : T.t => option(Dom.element) = "nextElementSibling";
};
