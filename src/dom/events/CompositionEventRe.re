type t = Dom.compositionEvent;

include EventRe.Impl({ type nonrec t = t; });
include UiEventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "CompositionEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "CompositionEvent";

[@bs.get] external data : t => string = "";
