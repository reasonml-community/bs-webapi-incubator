type t = DomRe.range;

type compareHow =
| StartToStart
| StartToEnd
| EndToEnd
| EndToStart;
let encodeCompareHow = fun /* internal */
| StartToStart  => 0
| StartToEnd    => 1
| EndToEnd      => 2
| EndToStart    => 3;

type compareResult =
| Before
| Equal
| After
| Unknown;
let decodeCompareResult = fun /* internal */
| -1 => Before
|  0 => Equal
|  1 => After
|  _ => Unknown;

external make : unit => t = "Range" [@@bs.new]; /* experimental */

external collapsed : t => Js.boolean = "" [@@bs.get];
let collapsed : t => bool = fun self => Js.to_bool (collapsed self);
external commonAncestorContainer : t => DomRe.node = "" [@@bs.get];
external endContainer : t => DomRe.node = "" [@@bs.get];
external endOffset : t => int = "" [@@bs.get];
external startContainer : t => DomRe.node = "" [@@bs.get];
external startOffset : t => int = "" [@@bs.get];

external setStart : DomRe.node_like 'a => int => unit = "" [@@bs.send.pipe: t];
external setEnd : DomRe.node_like 'a => int => unit = "" [@@bs.send.pipe: t];
external setStartBefore : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setStartAfter : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setEndBefore : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setEndAfter : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external selectNode : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external selectNodeContents : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external collapse : unit = "" [@@bs.send.pipe: t];
external collapseToStart : Js.boolean =>unit = "" [@@bs.send.pipe: t];
let collapseToStart : t => unit = fun self => collapseToStart (Js.Boolean.to_js_boolean true) self;
external cloneContents : DomRe.documentFragment = "" [@@bs.send.pipe: t];
external deleteContents : unit = "" [@@bs.send.pipe: t];
external extractContents : DomRe.documentFragment = "" [@@bs.send.pipe: t];
external insertNode : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external surroundContents : DomRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external compareBoundaryPoints : int /* compareHow enum */ => t => int /* compareResult enum */ = "" [@@bs.send.pipe: t];
let compareBoundaryPoint : compareHow => t => t => compareResult = fun how range self => decodeCompareResult (compareBoundaryPoints (encodeCompareHow how) range self);
external cloneRange : t = "" [@@bs.send.pipe: t];
external detach : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external comparePoint : DomRe.node_like 'a => int => int /* compareRsult enum */ = "" [@@bs.send.pipe: t];
let comparePoint : DomRe.node_like 'a => int => t => compareResult = fun node offset self => decodeCompareResult (comparePoint node offset self);
external createContextualFragment : string => DomRe.documentFragment = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getBoundingClientRect : DomRe.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getClientRects : array DomRe.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external intersectsNode : DomRe.node_like 'a => Js.boolean = "" [@@bs.send.pipe: t];
let intersectsNode : DomRe.node_like 'a => t => bool = fun node self => Js.to_bool (intersectsNode node self);
external isPointInRange : DomRe.node_like 'a => int => Js.boolean = "" [@@bs.send.pipe: t];
let isPointInRange : DomRe.node_like 'a => int => t => bool = fun node offset self => Js.to_bool (isPointInRange node offset self);
