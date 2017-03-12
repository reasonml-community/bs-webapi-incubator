type t = DomTypesRe.documentType;
include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include ChildNodeRe.Impl { type nonrec t = t };

external name : t => string = "" [@@bs.get];
external publicId : t => string = "" [@@bs.get];
external systemId : t => string = "" [@@bs.get];