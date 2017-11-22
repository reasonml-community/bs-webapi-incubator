type t = Dom.clipboardEvent;

include EventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "ClipboardEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "ClipboardEvent";

[@bs.get] external clipboardData : t => Dom.dataTransfer = "";
