type t = Dom.wheelEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });
include Webapi__Dom__UiEvent.Impl({ type nonrec t = t; });
include Webapi__Dom__MouseEvent.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "WheelEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "WheelEvent";

[@bs.get] external deltaX : t => float = "deltaX";
[@bs.get] external deltaY : t => float = "deltaY";
[@bs.get] external deltaZ : t => float = "deltaZ";
[@bs.get] external deltaMode : t => int = "deltaMode";
let deltaMode: t => Webapi__Dom__Types.deltaMode = (self) =>
  Webapi__Dom__Types.decodeDeltaMode(deltaMode(self));
