type t = DomTypesRe.idbVersionChangeEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "IDBVersionChangeEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "IDBVersionChangeEvent" [@@bs.new];

external oldVersion : t => int = "" [@@bs.get];
external newVersion : t => int = "" [@@bs.get];