type t = Dom.keyboardEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });
include Webapi__Dom__UiEvent.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "KeyboardEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "KeyboardEvent";

[@bs.get] external altKey : t => bool = "newVersion";
[@bs.get] external code : t => string = "code";
[@bs.get] external ctrlKey : t => bool = "ctrlKey";
[@bs.get] external isComposing : t => bool = "isComposing";
[@bs.get] external key : t => string = "key";
[@bs.get] external locale : t => string = "locale";
[@bs.get] external location : t => int = "location";
[@bs.get] external metaKey : t => bool = "metaKey";
[@bs.get] external repeat : t => bool = "repeat";
[@bs.get] external shiftKey : t => bool = "shiftKey";

[@bs.send.pipe : t] external getModifierState : string /* modifierKey enum */ => bool = "getModifierState";
let getModifierState: (Webapi__Dom__Types.modifierKey, t) => bool =
  (key, self) => getModifierState(Webapi__Dom__Types.encodeModifierKey(key), self);
