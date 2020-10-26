type t = Dom.selection;

[@bs.get] [@bs.return nullable] external anchorNode: t => option(Dom.node) ="anchorNode";
[@bs.get] external anchorOffset: t => int ="anchorOffset";
[@bs.get] [@bs.return nullable] external focusNode: t => option(Dom.node) ="focusNode";
[@bs.get] external focusOffset: t => int ="focusOffset";
[@bs.get] external isCollapsed: t => bool ="isCollapsed";
[@bs.get] external rangeCount: t => int ="rangeCount";

[@bs.send.pipe: t] external getRangeAt: int => Dom.range ="getRangeAt";
[@bs.send.pipe: t] external collapse: (Dom.node_like(_), int) => unit ="collapse";
[@bs.send.pipe: t] external extend: (Dom.node_like(_), int) => unit ="extend";
[@bs.send.pipe: t] external collapseToStart: unit ="collapseToStart";
[@bs.send.pipe: t] external collapseToEnd: unit ="collapseToEnd";
[@bs.send.pipe: t] external selectAllChildren: Dom.node_like(_) => unit ="selectAllChildren";
[@bs.send.pipe: t]
external setBaseAndExtent:
  (Dom.node_like(_), int, Dom.node_like(_), int) => unit ="setBaseAndExtent";
[@bs.send.pipe: t] external addRange: Dom.range => unit ="addRange";
[@bs.send.pipe: t] external removeRange: Dom.range => unit ="removeRange";
[@bs.send.pipe: t] external removeAllRanges: unit ="removeAllRanges";
[@bs.send.pipe: t] external deleteFromDocument: unit ="deleteFromDocument";
[@bs.send.pipe: t] external toString: string = "toString";
[@bs.send.pipe: t]
external containsNode:
  (Dom.node_like(_), [@bs.as {json|false|json}] _) => bool ="containsNode";
[@bs.send.pipe: t]
external containsNodePartly:
  (Dom.node_like(_), [@bs.as {json|true|json}] _) => bool =
  "containsNode";
