type t = DomRe.selection;

external anchorNode : t => DomRe.node = "" [@@bs.get];
external anchorOffset : t => int = "" [@@bs.get];
external focusNode : t => DomRe.node = "" [@@bs.get];
external focusOffset : t => int = "" [@@bs.get];
external isCollapsed : t => Js.boolean = "" [@@bs.get];
external rangeCount : t => int = "" [@@bs.get];

external getRangeAt : int => DomRe.range = "" [@@bs.send.pipe: t];
external collapse : DomRe.node => int => unit = "" [@@bs.send.pipe: t];
external extend : DomRe.node => int => unit = "" [@@bs.send.pipe: t];
external collapseToStart : unit = "" [@@bs.send.pipe: t];
external collapseToEnd : unit = "" [@@bs.send.pipe: t];
external selectAllChildren : DomRe.node => unit = "" [@@bs.send.pipe: t];
external addRange : DomRe.range => unit = "" [@@bs.send.pipe: t];
external removeRange : DomRe.range => unit = "" [@@bs.send.pipe: t];
external removeAllRanges : unit = "" [@@bs.send.pipe: t];
external deleteFromDocument : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external containsNode : DomRe.node => Js.boolean => Js.boolean = "" [@@bs.send.pipe: t];
let containsNode : DomRe.node => bool => t => bool = fun node partlyContained self => Js.to_bool (containsNode node (Js.Boolean.to_js_boolean partlyContained) self);
