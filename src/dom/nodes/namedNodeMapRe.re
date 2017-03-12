type t = DomTypesRe.namedNodeMap;

external length : t => int = "" [@@bs.get];
external item : int => option DomTypesRe.attr = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt];
external getNamedItem : string => option DomTypesRe.attr = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt];
external getNamedItemNS : string => string => option DomTypesRe.attr = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt];
external setNamedItem : DomTypesRe.attr => unit = "" [@@bs.send.pipe: t];
external setNamedItemNS : DomTypesRe.attr => unit = "" [@@bs.send.pipe: t];
external removeNamedItem : string => DomTypesRe.attr = "" [@@bs.send.pipe: t];
external removeNamedItemNS : string => string => DomTypesRe.attr = "" [@@bs.send.pipe: t];

external toArray : t => array DomTypesRe.element = "Array.prototype.slice.call" [@@bs.val];