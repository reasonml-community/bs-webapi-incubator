type t = Dom.relatedEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "RelatedEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "RelatedEvent" [@@bs.new];

external relatedTarget : t => option Dom.eventTarget = "" [@@bs.get] [@@bs.return null_to_opt];