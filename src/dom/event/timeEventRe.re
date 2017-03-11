type t = DomTypesRe.timeEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "TimeEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "TimeEvent" [@@bs.new];

external detail : t => int = "" [@@bs.get];
external view : t => DomTypesRe.window = "" [@@bs.get]; /* technically returns a `WindowProxy` */