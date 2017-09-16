type t = Dom.dragEvent;

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };
include MouseEventRe.Impl { type nonrec t = t };

external make : string => t = "DragEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "DragEvent" [@@bs.new];

external dataTransfer : t => Dom.dataTransfer = "" [@@bs.get];