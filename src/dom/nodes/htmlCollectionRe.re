type t = Dom.htmlCollection;

external toArray : t => array Dom.element = "Array.prototype.slice.call" [@@bs.val];

external length : t => int = "" [@@bs.get];
external item : int => option Dom.element = "" [@@bs.send.pipe: t];
external namedItem : string => option Dom.element = "" [@@bs.send.pipe: t];