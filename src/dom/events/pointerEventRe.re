type t = Dom.pointerEvent;
type pointerId = Dom.eventPointerId;

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };
include MouseEventRe.Impl { type nonrec t = t };

external make : string => t = "PointerEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "PointerEvent" [@@bs.new];

external pointerId : t => pointerId = "" [@@bs.get];
external width : t => int = "" [@@bs.get];
external height : t => int = "" [@@bs.get];
external pressure : t => float = "" [@@bs.get];
external tiltX : t => int = "" [@@bs.get];
external tiltY : t => int = "" [@@bs.get];
external pointerType : t => string /* pointerType enum */ = "" [@@bs.get];
let pointerType : t => DomTypesRe.pointerType = fun self => DomTypesRe.decodePointerType (pointerType self);
external isPrimary : t => bool = "" [@@bs.get];
