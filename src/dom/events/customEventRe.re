type t = Dom.customEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "CustomEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "CustomEvent" [@@bs.new];