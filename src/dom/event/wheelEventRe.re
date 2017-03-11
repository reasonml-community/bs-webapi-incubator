type t = DomTypesRe.wheelEvent;
type deltaMode =
| Pixel
| Line
| Page;
let decodeDeltaMode = fun /* internal */
| 0 => Pixel
| 1 => Line
| 2 => Page
| _ => raise (Invalid_argument "invalid deltaMode");

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };

external make : string => t = "WheelEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "WheelEvent" [@@bs.new];

external deltaX : t => float = "" [@@bs.get];
external deltaY : t => float = "" [@@bs.get];
external deltaZ : t => float = "" [@@bs.get];
external deltaMode : t => int = "" [@@bs.get];
let deltaMode : t => deltaMode= fun self => decodeDeltaMode (deltaMode self);