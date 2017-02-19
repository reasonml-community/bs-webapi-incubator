module Impl (Type: DomInternalRe.Type) => {
  type t_node = Type.t;

  type nodeType =
  | Element
  | Attribute /* deprecated */
  | Text
  | CDATASection /* deprecated */
  | EntityReference /* deprecated */
  | Entity /* deprecated */
  | ProcessingInstruction
  | Comment
  | Document
  | DocumentType
  | DocumentFragment
  | Notation /* deprecated */
  | Unknown;
  let decodeNodeType = fun /* internal */
  |  1 => Element
  |  2 => Attribute
  |  3 => Text
  |  4 => CDATASection
  |  5 => EntityReference
  |  6 => Entity
  |  7 => ProcessingInstruction
  |  8 => Comment
  |  9 => Document
  | 10 => DocumentType
  | 11 => DocumentFragment
  | 12 => Notation
  |  _ => Unknown;

  external asNode : t_node => DomRe.node = "%identity";

  /* baseURI */
  external childNodes : t_node => DomRe.nodeList  = "" [@@bs.get];
  external firstChild : t_node => Js.null DomRe.node = "" [@@bs.get];
  let firstChild : t_node => option DomRe.node = fun self => Js.Null.to_opt (firstChild self);
  external innerText : t_node => string = "" [@@bs.get];
  external setInnerText : t_node => string => unit = "innerText" [@@bs.set];
  external lastChild : t_node => Js.null DomRe.node = "" [@@bs.get];
  let lastChild : t_node => option DomRe.node = fun self => Js.Null.to_opt (lastChild self);
  external nextSibling : t_node => Js.null DomRe.node = "" [@@bs.get];
  let nextSibling : t_node => option DomRe.node = fun self => Js.Null.to_opt (nextSibling self);
  external nodeName : t_node => string = "" [@@bs.get];
  /* nodePrincipal */
  external nodeType : t_node => int /* nodeType enum */ = "" [@@bs.get];
  let nodeType : t_node => nodeType = fun self => decodeNodeType (nodeType self);
  external nodeValue : t_node => Js.null string = "" [@@bs.get];
  let nodeValue : t_node => option string = fun self => Js.Null.to_opt (nodeValue self);
  external setNodeValue : t_node => Js.null string => unit = "nodeValue" [@@bs.set];
  let setNodeValue : t_node => option string => unit = fun self value => setNodeValue self (Js.Null.from_opt value);
  /* outerText */
  external ownerDocument : t_node => DomRe.document = "" [@@bs.get];
  external parentElement : t_node => Js.null DomRe.element = "" [@@bs.get];
  let parentElement : t_node => option DomRe.element = fun self => Js.Null.to_opt (parentElement self);
  external parentNode : t_node => Js.null DomRe.node = "" [@@bs.get];
  let parentNode : t_node => option DomRe.node = fun self => Js.Null.to_opt (parentNode self);
  external previousSibling : t_node => Js.null DomRe.node = "" [@@bs.get];
  let previousSibling : t_node => option DomRe.node = fun self => Js.Null.to_opt (previousSibling self);
  external rootNode : t_node => DomRe.node = "" [@@bs.get];
  external textContent : t_node => string = "" [@@bs.get];
  external setTextContent : t_node => string => unit = "textContent" [@@bs.set];

  external appendChild : DomRe.node => unit = "" [@@bs.send.pipe: t_node];
  external cloneNode : DomRe.node = "" [@@bs.send.pipe: t_node];
  external cloneNodeDeep : Js.boolean => DomRe.node = "cloneNode" [@@bs.send.pipe: t_node];
  let cloneNodeDeep : t_node => DomRe.node = fun self => cloneNodeDeep (Js.Boolean.to_js_boolean true) self;
  external compareDocumentPosition : DomRe.node => int = "" [@@bs.send.pipe: t_node]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
  external contains : DomRe.node => Js.boolean = "" [@@bs.send.pipe: t_node];
  let contains : DomRe.node => t_node => bool = fun node self => Js.to_bool (contains node self);
  external getRootNode : DomRe.node = "" [@@bs.send.pipe: t_node];
  external getRootNodeComposed : Js.boolean => DomRe.node = "getRootNode" [@@bs.send.pipe: t_node];
  let getRootNodeComposed : t_node => DomRe.node = fun self => getRootNodeComposed (Js.Boolean.to_js_boolean true) self;
  external hasChildNodes : Js.boolean = "" [@@bs.send.pipe: t_node];
  let hasChildNodes : t_node => bool = fun self => Js.to_bool (hasChildNodes self);
  external insertBefore : DomRe.node => Js.null DomRe.node => DomRe.node = "" [@@bs.send.pipe: t_node];
  let insertBefore : DomRe.node => option DomRe.node => t_node => DomRe.node = fun node reference self => insertBefore node (Js.Null.from_opt reference) self;
  external isDefaultNamespace : string => Js.boolean = "" [@@bs.send.pipe: t_node];
  let isDefaultNamespace : string => t_node => bool = fun ns self => Js.to_bool (isDefaultNamespace ns self);
  external isEqualNode : DomRe.node => Js.boolean = "" [@@bs.send.pipe: t_node];
  let isEqualNode: DomRe.node => t_node => bool = fun node self => Js.to_bool (isEqualNode node self);
  external isSameNode : DomRe.node => Js.boolean = "" [@@bs.send.pipe: t_node];
  let isSameNode: DomRe.node => t_node => bool = fun node self => Js.to_bool (isSameNode node self);
  external lookupNamespaceURI : Js.null string => Js.null string = "" [@@bs.send.pipe: t_node];
  let lookupNamespaceURI: option string => t_node => option string = fun prefix self => Js.Null.to_opt (lookupNamespaceURI (Js.Null.from_opt prefix) self);
  external lookupPrefix : string = "lookupPrefix" [@@bs.send.pipe: t_node];
  external normalize : unit = "" [@@bs.send.pipe: t_node];
  external removeChild : DomRe.node => DomRe.node = "" [@@bs.send.pipe: t_node];
  /* replacChild */
};

include Impl { type t = DomRe.node };
