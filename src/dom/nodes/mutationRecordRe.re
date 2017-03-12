type t = DomTypesRe.mutationRecord;

external type_ : t => string = "type" [@@bs.get];
external target : t => DomTypesRe.node = "" [@@bs.get];
external addedNodes : t => DomTypesRe.nodeList = "" [@@bs.get];
external removedNodes : t => DomTypesRe.nodeList = "" [@@bs.get];
external previousSibling : t => option DomTypesRe.node = "" [@@bs.get];
external pnextSibling : t => option DomTypesRe.node = "" [@@bs.get];
external attributeName : t => string = "" [@@bs.get];
external attributeNamespace : t => string = "" [@@bs.get];
external oldValue : t => string = "" [@@bs.get];