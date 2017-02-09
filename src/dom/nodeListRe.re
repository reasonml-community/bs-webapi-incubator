type t = DomRe.nodeList;

external toArray : t => array DomRe.node = "Array.prototype.slice.call" [@@bs.val];
