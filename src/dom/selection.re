type t = Dom.selection;

external anchorNode : t => Dom.element = "" [@@bs.get]; /* returns node */
external anchorOffset : t => int = "" [@@bs.get];
external focusNode : t => Dom.element = "" [@@bs.get]; /* returns Node */
external focusOffset : t => int = "" [@@bs.get];
external isCollapsed : t => Js.boolean = "" [@@bs.get];
external rangeCount : t => int = "" [@@bs.get];

external getRangeAt : int => Dom.range = "" [@@bs.send.pipe: t];
external collapse : Dom.element => int => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external extend : Dom.element => int => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external collapseToStart : unit = "" [@@bs.send.pipe: t];
external collapseToEnd : unit = "" [@@bs.send.pipe: t];
external selectAllChildren : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external addRange : Dom.range => unit = "" [@@bs.send.pipe: t];
external removeRange : Dom.range => unit = "" [@@bs.send.pipe: t];
external removeAllRanges : unit = "" [@@bs.send.pipe: t];
external deleteFromDocument : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external containsNode : Dom.element => Js.boolean => Js.boolean = "" [@@bs.send.pipe: t]; /* should accept Node */
