type t = DomTypesRe.animationEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "AnimationEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "AnimationEvent" [@@bs.new];

external animationName : t => string = "" [@@bs.get];
external elapsedTime : t => float = "" [@@bs.get];
external pseudoElement : t => string /* enum-ish */ = "" [@@bs.get];