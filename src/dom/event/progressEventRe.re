type t = DomTypesRe.progressEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "ProgressEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "ProgressEvent" [@@bs.new];

external lengthComputable : t => bool = "" [@@bs.get];
external loaded : t => int = "" [@@bs.get];
external total : t => int = "" [@@bs.get];