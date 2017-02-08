type t = Dom.range;

external make : unit => t = "Range" [@@bs.new]; /* experimental */

external collapsed : t => Js.boolean = "" [@@bs.get];
external commonAncestorContainer : t => Dom.element = "" [@@bs.get]; /* returns Node */
external endContainer : t => Dom.element = "" [@@bs.get]; /* returns Node */
external endOffset : t => int = "" [@@bs.get];
external startContainer : t => Dom.element = "" [@@bs.get]; /* returns Node */
external startOffset : t => int = "" [@@bs.get];

external setStart : t => Dom.element => int => unit = "" [@@bs.send]; /* should accept Node */
external setEnd : t => Dom.element => int => unit = "" [@@bs.send]; /* should accept Node */
external setStartBefore : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external setStartAfter : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external setEndBefore : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external setEndAfter : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external selectNode : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external selectNodeContents : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external collapse : t => Js.boolean => unit = "" [@@bs.send];
external cloneContents : t => Dom.documentFragment = "" [@@bs.send];
external deleteContents : t => unit = "" [@@bs.send];
external extractContents : t => Dom.documentFragment = "" [@@bs.send];
external insertNode : t => Dom.element => unit = "" [@@bs.send]; /* should accept node */
external surroundContents : t => Dom.element => unit = "" [@@bs.send]; /* should accept Node */
external compareBoundaryPoints : t => int /* enum */ => t => int /* enum */ = "" [@@bs.send];
external cloneRange : t => t = "" [@@bs.send];
external detach : t => unit = "" [@@bs.send];
external toString : t => string = "" [@@bs.send];
external comparePoint : t => Dom.element => int => int /* enum */ = "" [@@bs.send]; /* should accept Node */
external createContextualFragment : t => string => Dom.documentFragment = "" [@@bs.send]; /* experimental, but widely supported */
external getBoundingClientRect : t => Dom.domRect = "" [@@bs.send]; /* experimental, but widely supported */
external getClientRects : t => array Dom.domRect = "" [@@bs.send]; /* experimental, but widely supported */
external intersectsNode : t => Dom.element => Js.boolean = "" [@@bs.send]; /* experimental, should accept Node */
external isPointInRange : t => Dom.element => int => Js.boolean = "" [@@bs.send]; /* experimental, should accept Node */
