module Impl = (T: {type t;}) => {
  external asNode: T.t => Dom.node = "%identity";

  /* baseURI */
  [@bs.get] external childNodes: T.t => Dom.nodeList = "childNodes";
  [@bs.get] [@bs.return nullable]
  external firstChild: T.t => option(Dom.node) = "firstChild";
  [@bs.get] external innerText: T.t => string = "innerText";
  [@bs.set] external setInnerText: (T.t, string) => unit = "innerText";
  [@bs.get] [@bs.return nullable]
  external lastChild: T.t => option(Dom.node) = "lastChild";
  [@bs.get] [@bs.return nullable]
  external nextSibling: T.t => option(Dom.node) = "nextSibling";
  [@bs.get] external nodeName: T.t => string = "nodeName"; /* nodePrincipal */
  [@bs.get] external nodeType: T.t => int /* nodeType enum */ = "nodeType";
  let nodeType: T.t => Webapi__Dom__Types.nodeType =
    self => Webapi__Dom__Types.decodeNodeType(nodeType(self));
  [@bs.get] [@bs.return nullable]
  external nodeValue: T.t => option(string) = "nodeValue";
  [@bs.set]
  external setNodeValue: (T.t, Js.null(string)) => unit = "nodeValue" /* let setNodeValue : T.t => option string => unit = fun self value => setNodeValue self (Js.Null.fromOption value); */; /* temporarily removed to reduce codegen size */
  /* Not supported yet
     external setNodeValue : T.t => string => unit = "nodeValue" [@@bs.set];
     external clearNodeValue : T.t => _ [@bs.as {json|null|json}] => unit = "nodeValue" [@@bs.set];
     */
  /* outerText */
  [@bs.get] external ownerDocument: T.t => Dom.document = "ownerDocument";
  [@bs.get] [@bs.return nullable]
  external parentElement: T.t => option(Dom.element) = "parentElement";
  [@bs.get] [@bs.return nullable]
  external parentNode: T.t => option(Dom.node) = "parentNode";
  [@bs.get] [@bs.return nullable]
  external previousSibling: T.t => option(Dom.node) = "previousSibling";
  [@bs.get] external rootNode: T.t => Dom.node = "rootNode";
  [@bs.get] external textContent: T.t => string = "textContent";
  [@bs.set] external setTextContent: (T.t, string) => unit = "textContent";

  [@bs.send.pipe: T.t]
  external appendChild: Dom.node_like('a) => unit = "appendChild";
  [@bs.send.pipe: T.t] external cloneNode: T.t = "cloneNode";
  [@bs.send.pipe: T.t]
  external cloneNodeDeep: ([@bs.as {json|true|json}] _) => T.t = "cloneNode";
  [@bs.send.pipe: T.t]
  external compareDocumentPosition: Dom.node_like('a) => int =
    "compareDocumentPosition"; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
  [@bs.send.pipe: T.t]
  external contains: Dom.node_like('a) => bool = "contains";
  [@bs.send.pipe: T.t] external getRootNode: Dom.node = "getRootNode";
  [@bs.send.pipe: T.t]
  external getRootNodeComposed:
    ([@bs.as {json|{ "composed": true }|json}] _) => Dom.node =
    "getRootNode";
  [@bs.send.pipe: T.t] external hasChildNodes: bool = "hasChildNodes";
  [@bs.send.pipe: T.t]
  external insertBefore:
    (Dom.node_like('a), Dom.node_like('b)) => Dom.node_like('a) =
    "insertBefore";
  /* (temporarily?) removed to reduce codegen size. This variant is just for convenience, `appendChild` can be used in place of passing `null` to `insertBefore`
     external insertBefore : Dom.node_like 'a => Js.null (Dom.node_like 'b) => Dom.node_like 'a = "" [@@bs.send.pipe: T.t];
     let insertBefore : Dom.node_like 'a => option (Dom.node_like 'b) => T.t => Dom.node_like 'a = fun node reference self => insertBefore node (Js.Null.fromOption reference) self;
     */
  [@bs.send.pipe: T.t]
  external isDefaultNamespace: string => bool = "isDefaultNamespace";
  [@bs.send.pipe: T.t]
  external isEqualNode: Dom.node_like('a) => bool = "isEqualNode";
  [@bs.send.pipe: T.t]
  external isSameNode: Dom.node_like('a) => bool = "isSameNode";
  [@bs.send.pipe: T.t] [@bs.return nullable]
  external lookupNamespaceURI: string => option(string) =
    "lookupNamespaceURI";
  [@bs.send.pipe: T.t] [@bs.return nullable]
  external lookupDefaultNamespaceURI:
    ([@bs.as {json|null|json}] _) => option(string) =
    "lookupNamespaceURI";
  [@bs.send.pipe: T.t] external lookupPrefix: string = "lookupPrefix";
  [@bs.send.pipe: T.t] external normalize: unit = "normalize";
  [@bs.send.pipe: T.t]
  external removeChild: Dom.node_like('a) => Dom.node_like('a) =
    "removeChild";

  /** @since 0.19.0 */
  [@bs.send.pipe: T.t]
  external replaceChild:
    (Dom.node_like('a), Dom.node_like('b)) => Dom.node_like('b) =
    "replaceChild";
};

type t = Dom.node;

include Webapi__Dom__EventTarget.Impl({
  type nonrec t = t;
});
include Impl({
  type nonrec t = t;
});
