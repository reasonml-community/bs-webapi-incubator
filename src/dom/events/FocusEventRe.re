type t = Dom.focusEvent;

include EventRe.Impl({ type nonrec t = t; });
include UiEventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "FocusEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "FocusEvent";

[@bs.get] external relatedTarget : t => Dom.eventTarget = "";
