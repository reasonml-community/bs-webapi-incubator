
type t = Dom.pageTransitionEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "PageTransitionEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "PageTransitionEvent" [@@bs.new];

external persisted : t => bool = "" [@@bs.get];