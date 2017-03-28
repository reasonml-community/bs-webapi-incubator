type t = Dom.htmlCollection;

external toArray : t => array Dom.element = "Array.prototype.slice.call" [@@bs.val];

external length : t => int = "" [@@bs.get];
external item : int => option Dom.element = "" [@@bs.send.pipe: t][@@bs.return null_undefined_to_opt];
external namedItem : string => option Dom.element = "" [@@bs.send.pipe: t];
