type t = DomTypesRe.wheelEvent;
include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };

external make : string => t = "WheelEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "WheelEvent" [@@bs.new];

external deltaX : t => float = "" [@@bs.get];
external deltaY : t => float = "" [@@bs.get];
external deltaZ : t => float = "" [@@bs.get];
external deltaMode : t => int = "" [@@bs.get];
let deltaMode : t => DomTypesRe.deltaMode = fun self => DomTypesRe.decodeDeltaMode (deltaMode self);