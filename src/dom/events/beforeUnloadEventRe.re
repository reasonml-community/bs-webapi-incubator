type t = Dom.beforeUnloadEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "BeforeUnloadEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "BeforeUnloadEvent" [@@bs.new];

external returnValue : t => string = "" [@@bs.get];