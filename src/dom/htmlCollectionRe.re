type t = DomRe.nodeList;

external toArray : t => array DomRe.element = "Array.prototype.slice.call" [@@bs.val];
