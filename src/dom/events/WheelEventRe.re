type t = Dom.wheelEvent;

include EventRe.Impl({ type nonrec t = t; });
include UiEventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "WheelEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "WheelEvent";

[@bs.get] external deltaX : t => float = "";
[@bs.get] external deltaY : t => float = "";
[@bs.get] external deltaZ : t => float = "";
[@bs.get] external deltaMode : t => int = "";
let deltaMode: t => DomTypesRe.deltaMode = (self) =>
  DomTypesRe.decodeDeltaMode(deltaMode(self));
