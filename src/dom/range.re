type t = Dom.range;

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
external collapse : unit = "" [@@bs.send.pipe: t];
external collapseToStart : Js.boolean =>unit = "" [@@bs.send.pipe: t];
let collapseToStart : t => unit = fun self => collapseToStart (Js.Boolean.to_js_boolean true) self;
external cloneContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external deleteContents : unit = "" [@@bs.send.pipe: t];
external extractContents : Dom.documentFragment = "" [@@bs.send.pipe: t];
external insertNode : Dom.node => unit = "" [@@bs.send.pipe: t];
external surroundContents : Dom.node => unit = "" [@@bs.send.pipe: t];
external compareBoundaryPoints : int /* compareHow enum */ => t => int /* compareResult enum */ = "" [@@bs.send.pipe: t];
let compareBoundaryPoint : compareHow => t => t => compareResult = fun how range self => decodeCompareResult (compareBoundaryPoints (encodeCompareHow how) range self);
external cloneRange : t = "" [@@bs.send.pipe: t];
external detach : unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
external comparePoint : Dom.node => int => int /* compareRsult enum */ = "" [@@bs.send.pipe: t];
let comparePoint : Dom.node => int => t => compareResult = fun node offset self => decodeCompareResult (comparePoint node offset self);
external createContextualFragment : string => Dom.documentFragment = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getBoundingClientRect : Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external getClientRects : array Dom.domRect = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external intersectsNode : Dom.node => Js.boolean = "" [@@bs.send.pipe: t];
let intersectsNode : Dom.node => t => bool = fun node self => Js.to_bool (intersectsNode node self);
external isPointInRange : Dom.node => int => Js.boolean = "" [@@bs.send.pipe: t];
let isPointInRange : Dom.node => int => t => bool = fun node offset self => Js.to_bool (isPointInRange node offset self);
