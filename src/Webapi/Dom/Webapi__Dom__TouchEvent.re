type touchList; /* TODO, Touch Events */

module Impl = (T: {type t;}) => {
  [@bs.get] external altKey : T.t => bool = "altKey";
  [@bs.get] external changedTouches : T.t => touchList = "changedTouches";
  [@bs.get] external ctrlKey : T.t => bool = "ctrlKey";
  [@bs.get] external metaKey : T.t => bool = "metaKey";
  [@bs.get] external shiftKey : T.t => bool = "shiftKey";
  [@bs.get] external targetTouches : T.t => touchList = "targetTouches";
  [@bs.get] external touches : T.t => touchList = "touches";
};

type t = Dom.touchEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });
include Webapi__Dom__UiEvent.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "TouchEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "TouchEvent";
