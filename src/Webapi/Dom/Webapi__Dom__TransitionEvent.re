type t = Dom.transitionEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "TransitionEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "TransitionEvent";

[@bs.get] external propertyName : t => string = "propertyName";
[@bs.get] external elapsedTime : t => float = "elapsedTime";
[@bs.get] external pseudoElement : t => string /* enum-ish */ = "pseudoElement";
