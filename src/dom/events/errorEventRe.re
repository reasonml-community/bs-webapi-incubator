type t = DomTypesRe.errorEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "ErrorEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "ErrorEvent" [@@bs.new];

external message : t => string = "" [@@bs.get];
external filename : t => string = "" [@@bs.get];
external lineno : t => int = "" [@@bs.get];
external colno : t => int = "" [@@bs.get];
external error : t => Js.t {..} = "" [@@bs.get];