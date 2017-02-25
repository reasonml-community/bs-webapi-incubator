type t = DomTypesRe.selection;

external anchorNode : t => DomTypesRe.node = "" [@@bs.get];
external anchorOffset : t => int = "" [@@bs.get];
external focusNode : t => DomTypesRe.node = "" [@@bs.get];
external focusOffset : t => int = "" [@@bs.get];
external isCollapsed : t => Js.boolean = "" [@@bs.get];
external rangeCount : t => int = "" [@@bs.get];

external getRangeAt : int => DomTypesRe.range = "" [@@bs.send.pipe: t];
external collapse : DomTypesRe.node_like _ => int => unit = "" [@@bs.send.pipe: t];
external extend : DomTypesRe.node_like _ => int => unit = "" [@@bs.send.pipe: t];
external collapseToStart : unit = "" [@@bs.send.pipe: t];
external collapseToEnd : unit = "" [@@bs.send.pipe: t];
external selectAllChildren : DomTypesRe.node_like _ => unit = "" [@@bs.send.pipe: t];
external addRange : DomTypesRe.range => unit = "" [@@bs.send.pipe: t];
external removeRange : DomTypesRe.range => unit = "" [@@bs.send.pipe: t];
external removeAllRanges : unit = "" [@@bs.send.pipe: t];
external deleteFromDocument : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external containsNode : DomTypesRe.node_like _ => Js.boolean => Js.boolean = "" [@@bs.send.pipe: t];
let containsNode : DomTypesRe.node_like _ => bool => t => bool = fun node partlyContained self => Js.to_bool (containsNode node (Js.Boolean.to_js_boolean partlyContained) self);
