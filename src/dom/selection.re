type t = Dom.selection;

external anchorNode : t => Dom.element = "" [@@bs.get]; /* returns node */
external anchorOffset : t => int = "" [@@bs.get];
external focusNode : t => Dom.element = "" [@@bs.get]; /* returns Node */
external focusOffset : t => int = "" [@@bs.get];
external isCollapsed : t => Js.boolean = "" [@@bs.get];
external rangeCount : t => int = "" [@@bs.get];

external getRangeAt : t => int => Dom.range = "" [@@bs.send];
external collapse : t => Dom.element => int => unit = "" [@@bs.send]; /* should accept Node */
external extend : t => Dom.element => int => unit = "" [@@bs.send]; /* should accept Node */
external collapseToStart : t => unit = "" [@@bs.send];
external collapseToEnd : t => unit = "" [@@bs.send];
external selectAllChildren : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external addRange : t => Dom.range => unit = "" [@@bs.send];
external removeRange : t => Dom.range => unit = "" [@@bs.send];
external removeAllRanges : t => unit = "" [@@bs.send];
external deleteFromDocument : t => unit = "" [@@bs.send];
external toString : t => string = "" [@@bs.send];
external containsNode : t => Dom.element => Js.boolean => Js.boolean = "" [@@bs.send]; /* should accept Node */
