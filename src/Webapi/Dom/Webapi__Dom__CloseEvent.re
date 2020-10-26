type t = Dom.closeEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "CloseEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "CloseEvent";

[@bs.get] external wasClean : t => bool = "wasClean";
[@bs.get] external code : t => int = "code";
[@bs.get] external reason : t => string = "reason";
