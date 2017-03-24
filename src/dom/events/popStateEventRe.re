type t = Dom.popStateEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "PopStateEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "PopStateEvent" [@@bs.new];

external state : t => Js.t {..} = "" [@@bs.get];