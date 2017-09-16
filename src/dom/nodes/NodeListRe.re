type t = Dom.nodeList;

external toArray : t => array Dom.node = "Array.prototype.slice.call" [@@bs.val];

external length : t => int = "" [@@bs.get];
external item : int => option Dom.node = "" [@@bs.send.pipe: t];
