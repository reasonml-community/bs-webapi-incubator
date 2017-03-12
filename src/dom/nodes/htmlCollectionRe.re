type t = DomTypesRe.htmlCollection;

external toArray : t => array DomTypesRe.element = "Array.prototype.slice.call" [@@bs.val];
