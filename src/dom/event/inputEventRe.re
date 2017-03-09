type t = DomTypesRe.inputEvent;

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };

external make : string => t = "InputEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "InputEvent" [@@bs.new];

external data : t => string = "" [@@bs.get];
external isComposing : t => bool = "" [@@bs.get];