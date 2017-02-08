type t = Dom.range;

external make : unit => t = "Range" [@@bs.new]; /* experimental */

external collapsed : t => Js.boolean = "" [@@bs.get];
external commonAncestorContainer : t => Dom.element = "" [@@bs.get]; /* returns Node */
external endContainer : t => Dom.element = "" [@@bs.get]; /* returns Node */
external endOffset : t => int = "" [@@bs.get];
external startContainer : t => Dom.element = "" [@@bs.get]; /* returns Node */
external startOffset : t => int = "" [@@bs.get];

external setStart : Dom.element => int => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external setEnd : Dom.element => int => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external setStartBefore : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external setStartAfter : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external setEndBefore : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external setEndAfter : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external selectNode : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external selectNodeContents : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external collapse : Js.boolean => unit = "" [@@bs.send.pipe: t];
external cloneContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external deleteContents : unit = "" [@@bs.send.pipe: t];
external extractContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external insertNode : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept node */
external surroundContents : Dom.element => unit = "" [@@bs.send.pipe: t]; /* should accept Node */
external compareBoundaryPoints : int /* enum */ => t => int /* enum */ = "" [@@bs.send.pipe: t];
external cloneRange : t = "" [@@bs.send.pipe: t];
external detach : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external comparePoint : Dom.element => int => int /* enum */ = "" [@@bs.send.pipe: t]; /* should accept Node */
external createContextualFragment : string => Dom.documentFragment = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getBoundingClientRect : Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getClientRects : array Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external intersectsNode : Dom.element => Js.boolean = "" [@@bs.send.pipe: t]; /* experimental, should accept Node */
external isPointInRange : Dom.element => int => Js.boolean = "" [@@bs.send.pipe: t]; /* experimental, should accept Node */
