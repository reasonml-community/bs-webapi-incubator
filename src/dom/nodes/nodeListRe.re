type t = DomTypesRe.nodeList;

external toArray : t => array DomTypesRe.node = "Array.prototype.slice.call" [@@bs.val];
