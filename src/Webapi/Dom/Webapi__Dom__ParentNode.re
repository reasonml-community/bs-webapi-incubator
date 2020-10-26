/* Mixin */
module Impl = (T: {type t;}) => {
  [@bs.get] external children : T.t => Dom.htmlCollection = "children";
  [@bs.get] [@bs.return nullable] external firstElementChild : T.t => option(Dom.element) = "firstElementChild";
  [@bs.get] [@bs.return nullable] external lastElementChild : T.t => option(Dom.element) = "lastElementChild";
  [@bs.get] external childElementCount : T.t => int = "childElementCount";
  [@bs.send.pipe : T.t] [@bs.return nullable] external querySelector : string => option(Dom.element) = "querySelector";
  [@bs.send.pipe : T.t] external querySelectorAll : string => Dom.nodeList = "querySelectorAll";
};
