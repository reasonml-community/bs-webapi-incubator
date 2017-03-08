type t = DomTypesRe.clipboardEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "ClipboardEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "ClipboardEvent" [@@bs.new];

external clipboardData : t => DomTypesRe.dataTransfer = "" [@@bs.get];