type t = Dom.range;

external make : unit => t = "Range" [@@bs.new]; /* experimental */

external collapsed : t => bool = "" [@@bs.get];
external commonAncestorContainer : t => Dom.node = "" [@@bs.get];
external endContainer : t => Dom.node = "" [@@bs.get];
external endOffset : t => int = "" [@@bs.get];
external startContainer : t => Dom.node = "" [@@bs.get];
external startOffset : t => int = "" [@@bs.get];

external setStart : Dom.node_like 'a => int => unit = "" [@@bs.send.pipe: t];
external setEnd : Dom.node_like 'a => int => unit = "" [@@bs.send.pipe: t];
external setStartBefore : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setStartAfter : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setEndBefore : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setEndAfter : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external selectNode : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external selectNodeContents : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external collapse : unit = "" [@@bs.send.pipe: t];
external collapseToStart : _ [@bs.as {json|true|json}] => unit = "collapse" [@@bs.send.pipe: t];
external cloneContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external deleteContents : unit = "" [@@bs.send.pipe: t];
external extractContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external insertNode : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external surroundContents : Dom.node_like 'a => unit = "" [@@bs.send.pipe: t];
external compareBoundaryPoints : int /* compareHow enum */ => t => int /* compareResult enum */ = "" [@@bs.send.pipe: t];
let compareBoundaryPoint : DomTypesRe.compareHow => t => t => DomTypesRe.compareResult = fun how range self => DomTypesRe.decodeCompareResult (compareBoundaryPoints (DomTypesRe.encodeCompareHow how) range self);
external cloneRange : t = "" [@@bs.send.pipe: t];
external detach : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external comparePoint : Dom.node_like 'a => int => int /* compareRsult enum */ = "" [@@bs.send.pipe: t];
let comparePoint : Dom.node_like 'a => int => t => DomTypesRe.compareResult = fun node offset self => DomTypesRe.decodeCompareResult (comparePoint node offset self);
external createContextualFragment : string => Dom.documentFragment = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getBoundingClientRect : Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getClientRects : array Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external intersectsNode : Dom.node_like 'a => bool = "" [@@bs.send.pipe: t];
external isPointInRange : Dom.node_like 'a => int => bool = "" [@@bs.send.pipe: t];
