type t = DomTypesRe.nodeList;

external toArray : t => array DomTypesRe.node = "Array.prototype.slice.call" [@@bs.val];

external length : t => int = "" [@@bs.get];
external item : int => option DomTypesRe.node = "" [@@bs.send.pipe: t];