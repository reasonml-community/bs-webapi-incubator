type t = Dom.pointerEvent;
type pointerId = Dom.eventPointerId;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });
include Webapi__Dom__UiEvent.Impl({ type nonrec t = t; });
include Webapi__Dom__MouseEvent.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "PointerEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "PointerEvent";

[@bs.get] external pointerId : t => pointerId = "pointerId";
[@bs.get] external width : t => int = "width";
[@bs.get] external height : t => int = "height";
[@bs.get] external pressure : t => float = "pressure";
[@bs.get] external tiltX : t => int = "tiltX";
[@bs.get] external tiltY : t => int = "tiltY";
[@bs.get] external pointerType : t => string /* pointerType enum */ = "pointerType";
let pointerType: t => Webapi__Dom__Types.pointerType =
  (self) => Webapi__Dom__Types.decodePointerType(pointerType(self));
[@bs.get] external isPrimary : t => bool = "isPrimary";
