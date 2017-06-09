type t = Dom.htmlCollection;

external toArray : t => array Dom.element = "call" [@@bs.val] [@@bs.scope ("Array", "prototype", "slice")];

external length : t => int = "" [@@bs.get];
external item : int => option Dom.element = "" [@@bs.send.pipe: t][@@bs.return null_undefined_to_opt];
external namedItem : string => option Dom.element = "" [@@bs.send.pipe: t];
