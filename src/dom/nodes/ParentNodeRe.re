/* Mixin */
module Impl = (T: {type t;}) => {
  [@bs.get] external children : T.t => Dom.htmlCollection = "";
  [@bs.get] [@bs.return null_to_opt] external firstElementChild : T.t => option(Dom.element) = "";
  [@bs.get] [@bs.return null_to_opt] external lastElementChild : T.t => option(Dom.element) = "";
  [@bs.get] external childElementCount : T.t => int = "";
  [@bs.send.pipe : T.t] [@bs.return null_to_opt]
  external querySelector : string => option(Dom.element) =
    "";
  [@bs.send.pipe : T.t] external querySelectorAll : string => Dom.nodeList = "";
};
