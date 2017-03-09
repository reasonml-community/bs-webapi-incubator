type t = DomTypesRe.transitionEvent;

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };

external make : string => t = "TransitionEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "TransitionEvent" [@@bs.new];

external propertyName : t => string = "" [@@bs.get];
external elapsedTime : t => float = "" [@@bs.get];
external pseudoElement : t => string /* enum-ish */ = "" [@@bs.get];
