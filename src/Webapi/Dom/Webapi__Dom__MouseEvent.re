module Impl = (T: {type t;}) => {
  [@bs.get] external altKey : T.t => bool = "altKey";
  [@bs.get] external button : T.t => int = "button";
  [@bs.get] external buttons : T.t => int /* bitmask */ = "buttons";
  [@bs.get] external clientX : T.t => int = "clientX";
  [@bs.get] external clientY : T.t => int = "clientY";
  [@bs.get] external ctrlKey : T.t => bool = "ctrlKey";
  [@bs.get] external metaKey : T.t => bool = "metaKey";
  [@bs.get] external movementX : T.t => int = "movementX";
  [@bs.get] external movementY : T.t => int = "movementY";
  [@bs.get] external offsetX : T.t => float = "offsetX"; /* experimental, but widely supported */
  [@bs.get] external offsetY : T.t => float = "offsetY"; /* experimental, but widely supported */
  [@bs.get] external pageX : T.t => int = "pageX"; /* experimental, but widely supported */
  [@bs.get] external pageY : T.t => int = "pageY"; /* experimental, but widely supported */
  [@bs.get] [@bs.return nullable] external region : T.t => option(string) = "region";
  [@bs.get] [@bs.return nullable] external relatedTarget : T.t => option(Dom.eventTarget) = "relatedTarget";
  [@bs.get] external screenX : T.t => int = "screenX";
  [@bs.get] external screenY : T.t => int = "screenY";
  [@bs.get] external shiftKey : T.t => bool = "shiftKey";
  [@bs.get] external x : T.t => int = "x"; /* experimental */
  [@bs.get] external y : T.t => int = "y"; /* experimental */
  [@bs.send.pipe : T.t] external getModifierState : string /* modifierKey enum */ => bool = "getModifierState";
  let getModifierState: (Webapi__Dom__Types.modifierKey, T.t) => bool =
    (key, self) => getModifierState(Webapi__Dom__Types.encodeModifierKey(key), self);
};

type t = Dom.mouseEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });
include Webapi__Dom__UiEvent.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "MouseEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "MouseEvent";
