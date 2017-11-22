type t = Dom.inputEvent;

include EventRe.Impl({ type nonrec t = t; });
include UiEventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "InputEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "InputEvent";

[@bs.get] external data : t => string = "";
[@bs.get] external isComposing : t => bool = "";
