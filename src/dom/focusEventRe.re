type t = DomTypesRe.focusEvent;

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };

external make : string => t = "FocusEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "FocusEvent" [@@bs.new];

external relatedTarget : t => DomTypesRe.eventTarget = "" [@@bs.get];