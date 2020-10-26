type t = Dom.timeEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "TimeEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "TimeEvent";

[@bs.get] external detail : t => int = "detail";
[@bs.get] external view : t => Dom.window = "view"; /* technically returns a `WindowProxy` */
