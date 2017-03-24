type t = Dom.namedNodeMap;

external length : t => int = "" [@@bs.get];
external item : int => option Dom.attr = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt];
external getNamedItem : string => option Dom.attr = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt];
external getNamedItemNS : string => string => option Dom.attr = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt];
external setNamedItem : Dom.attr => unit = "" [@@bs.send.pipe: t];
external setNamedItemNS : Dom.attr => unit = "" [@@bs.send.pipe: t];
external removeNamedItem : string => Dom.attr = "" [@@bs.send.pipe: t];
external removeNamedItemNS : string => string => Dom.attr = "" [@@bs.send.pipe: t];

external toArray : t => array Dom.element = "Array.prototype.slice.call" [@@bs.val];