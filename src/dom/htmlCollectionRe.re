type t = DomRe.htmlCollection;

external toArray : t => array DomRe.element = "Array.prototype.slice.call" [@@bs.val];
