type t = Dom.customEvent;

include EventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "CustomEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "CustomEvent";
