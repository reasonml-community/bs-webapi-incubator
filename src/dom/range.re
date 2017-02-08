type t = Dom.range;

external make : unit => t = "Range" [@@bs.new]; /* experimental */

external collapsed : t => Js.boolean = "" [@@bs.get];
external commonAncestorContainer : t => Dom.node = "" [@@bs.get];
external endContainer : t => Dom.node = "" [@@bs.get];
external endOffset : t => int = "" [@@bs.get];
external startContainer : t => Dom.node = "" [@@bs.get];
external startOffset : t => int = "" [@@bs.get];

external setStart : Dom.node => int => unit = "" [@@bs.send.pipe: t];
external setEnd : Dom.node => int => unit = "" [@@bs.send.pipe: t];
external setStartBefore : Dom.node => unit = "" [@@bs.send.pipe: t];
external setStartAfter : Dom.node => unit = "" [@@bs.send.pipe: t];
external setEndBefore : Dom.node => unit = "" [@@bs.send.pipe: t];
external setEndAfter : Dom.node => unit = "" [@@bs.send.pipe: t];
external selectNode : Dom.node => unit = "" [@@bs.send.pipe: t];
external selectNodeContents : Dom.node => unit = "" [@@bs.send.pipe: t];
external collapse : Js.boolean => unit = "" [@@bs.send.pipe: t];
external cloneContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external deleteContents : unit = "" [@@bs.send.pipe: t];
external extractContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external insertNode : Dom.node => unit = "" [@@bs.send.pipe: t];
external surroundContents : Dom.node => unit = "" [@@bs.send.pipe: t];
external compareBoundaryPoints : int /* enum */ => t => int /* enum */ = "" [@@bs.send.pipe: t];
external cloneRange : t = "" [@@bs.send.pipe: t];
external detach : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external comparePoint : Dom.node => int => int /* enum */ = "" [@@bs.send.pipe: t];
external createContextualFragment : string => Dom.documentFragment = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getBoundingClientRect : Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getClientRects : array Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external intersectsNode : Dom.node => Js.boolean = "" [@@bs.send.pipe: t];
external isPointInRange : Dom.node => int => Js.boolean = "" [@@bs.send.pipe: t];
