type t = DomTypesRe.range;

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

external collapsed : t => bool = "" [@@bs.get];
external commonAncestorContainer : t => DomTypesRe.node = "" [@@bs.get];
external endContainer : t => DomTypesRe.node = "" [@@bs.get];
external endOffset : t => int = "" [@@bs.get];
external startContainer : t => DomTypesRe.node = "" [@@bs.get];
external startOffset : t => int = "" [@@bs.get];

external setStart : DomTypesRe.node_like 'a => int => unit = "" [@@bs.send.pipe: t];
external setEnd : DomTypesRe.node_like 'a => int => unit = "" [@@bs.send.pipe: t];
external setStartBefore : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setStartAfter : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setEndBefore : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external setEndAfter : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external selectNode : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external selectNodeContents : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external collapse : unit = "" [@@bs.send.pipe: t];
external collapseToStart : Js.boolean => unit = "" [@@bs.send.pipe: t];
let collapseToStart : t => unit = fun self => collapseToStart Js.true_ self;
external cloneContents : DomTypesRe.documentFragment = "" [@@bs.send.pipe: t];
external deleteContents : unit = "" [@@bs.send.pipe: t];
external extractContents : DomTypesRe.documentFragment = "" [@@bs.send.pipe: t];
external insertNode : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external surroundContents : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t];
external compareBoundaryPoints : int /* compareHow enum */ => t => int /* compareResult enum */ = "" [@@bs.send.pipe: t];
let compareBoundaryPoint : compareHow => t => t => compareResult = fun how range self => decodeCompareResult (compareBoundaryPoints (encodeCompareHow how) range self);
external cloneRange : t = "" [@@bs.send.pipe: t];
external detach : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external comparePoint : DomTypesRe.node_like 'a => int => int /* compareRsult enum */ = "" [@@bs.send.pipe: t];
let comparePoint : DomTypesRe.node_like 'a => int => t => compareResult = fun node offset self => decodeCompareResult (comparePoint node offset self);
external createContextualFragment : string => DomTypesRe.documentFragment = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getBoundingClientRect : DomTypesRe.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getClientRects : array DomTypesRe.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external intersectsNode : DomTypesRe.node_like 'a => bool = "" [@@bs.send.pipe: t];
external isPointInRange : DomTypesRe.node_like 'a => int => bool = "" [@@bs.send.pipe: t];
