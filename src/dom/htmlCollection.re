type t = Dom.nodeList;

external toArray : t => array Dom.element = "Array.prototype.slice.call" [@@bs.val];
