/* Mixin */
module Impl = (T: {type t;}) => {
  [@bs.send.pipe : T.t] [@bs.return null_to_opt]
  external getElementById : string => option(Dom.element) =
    "";
};
