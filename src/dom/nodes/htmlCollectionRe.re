type t = DomTypesRe.htmlCollection;

external toArray : t => array DomTypesRe.element = "Array.prototype.slice.call" [@@bs.val];

external length : t => int = "" [@@bs.get];
external item : int => option DomTypesRe.element = "" [@@bs.send.pipe: t];
external namedItem : string => option DomTypesRe.element = "" [@@bs.send.pipe: t];