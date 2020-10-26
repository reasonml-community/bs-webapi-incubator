type t = Dom.range;

[@bs.new] external make: unit => t = "Range"; /* experimental */

[@bs.get] external collapsed: t => bool = "collapsed";
[@bs.get]
external commonAncestorContainer: t => Dom.node = "commonAncestorContainer";
[@bs.get] external endContainer: t => Dom.node = "endContainer";
[@bs.get] external endOffset: t => int = "endOffset";
[@bs.get] external startContainer: t => Dom.node = "startContainer";
[@bs.get] external startOffset: t => int = "startOffset";

[@bs.send.pipe: t]
external setStart: (Dom.node_like('a), int) => unit = "setStart";
[@bs.send.pipe: t]
external setEnd: (Dom.node_like('a), int) => unit = "setEnd";
[@bs.send.pipe: t]
external setStartBefore: Dom.node_like('a) => unit = "setStartBefore";
[@bs.send.pipe: t]
external setStartAfter: Dom.node_like('a) => unit = "setStartAfter";
[@bs.send.pipe: t]
external setEndBefore: Dom.node_like('a) => unit = "setEndBefore";
[@bs.send.pipe : t] external setEndAfter : Dom.node_like('a) => unit = "setEndAfter";
[@bs.send.pipe: t]
external selectNode: Dom.node_like('a) => unit = "selectNode";
[@bs.send.pipe: t]
external selectNodeContents: Dom.node_like('a) => unit = "selectNodeContents";
[@bs.send.pipe: t] external collapse: unit = "collapse";
[@bs.send.pipe: t]
external collapseToStart: ([@bs.as {json|true|json}] _) => unit = "collapse";
[@bs.send.pipe: t] external cloneContents: Dom.documentFragment="cloneContents";
[@bs.send.pipe: t] external deleteContents: unit= "deleteContents";
[@bs.send.pipe: t] external extractContents: Dom.documentFragment="extractContents";
[@bs.send.pipe: t] external insertNode: Dom.node_like('a) => unit="insertNode";
[@bs.send.pipe: t] external surroundContents: Dom.node_like('a) => unit="surroundContents";
[@bs.send.pipe: t]
external compareBoundaryPoints: (int /* compareHow enum */, t) => int =
  "compareBoundaryPoints"; /* compareResult enum */
let compareBoundaryPoint:
  (Webapi__Dom__Types.compareHow, t, t) => Webapi__Dom__Types.compareResult =
  (how, range, self) =>
    Webapi__Dom__Types.decodeCompareResult(
      compareBoundaryPoints(
        Webapi__Dom__Types.encodeCompareHow(how),
        range,
        self,
      ),
    );
[@bs.send.pipe: t] external cloneRange: t = "cloneRange";
[@bs.send.pipe: t] external detach: unit = "detach";
[@bs.send.pipe: t] external toString: string = "toString";
[@bs.send.pipe: t]
external comparePoint: (Dom.node_like('a), int) => int = "comparePoint"; /* compareRsult enum */
let comparePoint:
  (Dom.node_like('a), int, t) => Webapi__Dom__Types.compareResult =
  (node, offset, self) =>
    Webapi__Dom__Types.decodeCompareResult(comparePoint(node, offset, self));
[@bs.send.pipe : t] external createContextualFragment : string => Dom.documentFragment = "createContextualFragment"; /* experimental, but widely supported */
[@bs.send.pipe: t]
external getBoundingClientRect: Dom.domRect = "getBoundingClientRect"; /* experimental, but widely supported */
[@bs.send.pipe: t]
external getClientRects: array(Dom.domRect) = "getClientRects"; /* experimental, but widely supported */
[@bs.send.pipe: t]
external intersectsNode: Dom.node_like('a) => bool = "intersectsNode";
[@bs.send.pipe: t]
external isPointInRange: (Dom.node_like('a), int) => bool = "isPointInRange";
