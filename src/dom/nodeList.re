type t = Dom.nodeList;

external toArray : t => array Dom.node = "Array.prototype.slice.call" [@@bs.val];
