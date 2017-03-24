type t = Dom.closeEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "CloseEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "CloseEvent" [@@bs.new];

external wasClean : t => bool = "" [@@bs.get];
external code : t => int = "" [@@bs.get];
external reason : t => string = "" [@@bs.get];