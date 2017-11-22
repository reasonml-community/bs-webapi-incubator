type t = Dom.pointerEvent;
type pointerId = Dom.eventPointerId;

include EventRe.Impl({ type nonrec t = t; });
include UiEventRe.Impl({ type nonrec t = t; });
include MouseEventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "PointerEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "PointerEvent";

[@bs.get] external pointerId : t => pointerId = "";
[@bs.get] external width : t => int = "";
[@bs.get] external height : t => int = "";
[@bs.get] external pressure : t => float = "";
[@bs.get] external tiltX : t => int = "";
[@bs.get] external tiltY : t => int = "";
[@bs.get] external pointerType : t => string /* pointerType enum */ = "";
let pointerType: t => DomTypesRe.pointerType =
  (self) => DomTypesRe.decodePointerType(pointerType(self));
[@bs.get] external isPrimary : t => bool = "";
