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

  /* Shouldn't be needed anymore
  external asNode : t_node => DomTypesRe.node = "%identity";
  */

  /* baseURI */
  external childNodes : t_node => DomTypesRe.nodeList  = "" [@@bs.get];
  external firstChild : t_node => Js.null DomTypesRe.node = "" [@@bs.get];
  let firstChild : t_node => option DomTypesRe.node = fun self => Js.Null.to_opt (firstChild self);
  external innerText : t_node => string = "" [@@bs.get];
  external setInnerText : t_node => string => unit = "innerText" [@@bs.set];
  external lastChild : t_node => Js.null DomTypesRe.node = "" [@@bs.get];
  let lastChild : t_node => option DomTypesRe.node = fun self => Js.Null.to_opt (lastChild self);
  external nextSibling : t_node => Js.null DomTypesRe.node = "" [@@bs.get];
  let nextSibling : t_node => option DomTypesRe.node = fun self => Js.Null.to_opt (nextSibling self);
  external nodeName : t_node => string = "" [@@bs.get];
  /* nodePrincipal */
  external nodeType : t_node => int /* nodeType enum */ = "" [@@bs.get];
  let nodeType : t_node => nodeType = fun self => decodeNodeType (nodeType self);
  external nodeValue : t_node => Js.null string = "" [@@bs.get];
  let nodeValue : t_node => option string = fun self => Js.Null.to_opt (nodeValue self);
  external setNodeValue : t_node => Js.null string => unit = "nodeValue" [@@bs.set];
  let setNodeValue : t_node => option string => unit = fun self value => setNodeValue self (Js.Null.from_opt value);
  /* outerText */
  external ownerDocument : t_node => DomTypesRe.document = "" [@@bs.get];
  external parentElement : t_node => Js.null DomTypesRe.element = "" [@@bs.get];
  let parentElement : t_node => option DomTypesRe.element = fun self => Js.Null.to_opt (parentElement self);
  external parentNode : t_node => Js.null DomTypesRe.node = "" [@@bs.get];
  let parentNode : t_node => option DomTypesRe.node = fun self => Js.Null.to_opt (parentNode self);
  external previousSibling : t_node => Js.null DomTypesRe.node = "" [@@bs.get];
  let previousSibling : t_node => option DomTypesRe.node = fun self => Js.Null.to_opt (previousSibling self);
  external rootNode : t_node => DomTypesRe.node = "" [@@bs.get];
  external textContent : t_node => string = "" [@@bs.get];
  external setTextContent : t_node => string => unit = "textContent" [@@bs.set];

  external appendChild : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t_node];
  external cloneNode : DomTypesRe.node = "" [@@bs.send.pipe: t_node];
  external cloneNodeDeep : Js.boolean => DomTypesRe.node = "cloneNode" [@@bs.send.pipe: t_node];
  let cloneNodeDeep : t_node => DomTypesRe.node = fun self => cloneNodeDeep (Js.Boolean.to_js_boolean true) self;
  external compareDocumentPosition : DomTypesRe.node_like 'a => int = "" [@@bs.send.pipe: t_node]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
  external contains : DomTypesRe.node_like 'a => Js.boolean = "" [@@bs.send.pipe: t_node];
  let contains : DomTypesRe.node_like 'a => t_node => bool = fun node self => Js.to_bool (contains node self);
  external getRootNode : DomTypesRe.node = "" [@@bs.send.pipe: t_node];
  external getRootNodeComposed : Js.boolean => DomTypesRe.node = "getRootNode" [@@bs.send.pipe: t_node];
  let getRootNodeComposed : t_node => DomTypesRe.node = fun self => getRootNodeComposed (Js.Boolean.to_js_boolean true) self;
  external hasChildNodes : Js.boolean = "" [@@bs.send.pipe: t_node];
  let hasChildNodes : t_node => bool = fun self => Js.to_bool (hasChildNodes self);
  external insertBefore : DomTypesRe.node_like 'a => Js.null (DomTypesRe.node_like 'b) => DomTypesRe.node_like 'a = "" [@@bs.send.pipe: t_node];
  let insertBefore : DomTypesRe.node_like 'a => option (DomTypesRe.node_like 'b) => t_node => DomTypesRe.node_like 'a = fun node reference self => insertBefore node (Js.Null.from_opt reference) self;
  external isDefaultNamespace : string => Js.boolean = "" [@@bs.send.pipe: t_node];
  let isDefaultNamespace : string => t_node => bool = fun ns self => Js.to_bool (isDefaultNamespace ns self);
  external isEqualNode : DomTypesRe.node_like 'a => Js.boolean = "" [@@bs.send.pipe: t_node];
  let isEqualNode: DomTypesRe.node_like 'a => t_node => bool = fun node self => Js.to_bool (isEqualNode node self);
  external isSameNode : DomTypesRe.node_like 'a => Js.boolean = "" [@@bs.send.pipe: t_node];
  let isSameNode: DomTypesRe.node_like 'a => t_node => bool = fun node self => Js.to_bool (isSameNode node self);
  external lookupNamespaceURI : Js.null string => Js.null string = "" [@@bs.send.pipe: t_node];
  let lookupNamespaceURI: option string => t_node => option string = fun prefix self => Js.Null.to_opt (lookupNamespaceURI (Js.Null.from_opt prefix) self);
  external lookupPrefix : string = "lookupPrefix" [@@bs.send.pipe: t_node];
  external normalize : unit = "" [@@bs.send.pipe: t_node];
  external removeChild : DomTypesRe.node_like 'a => DomTypesRe.node_like 'a = "" [@@bs.send.pipe: t_node];
  /* replacChild */
};

include Impl { type t = DomTypesRe.node };
