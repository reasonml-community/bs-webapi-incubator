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
  external firstChild : t_node => option DomTypesRe.node = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external innerText : t_node => string = "" [@@bs.get];
  external setInnerText : t_node => string => unit = "innerText" [@@bs.set];
  external lastChild : t_node => option DomTypesRe.node = "" [@@bs.get];
  external nextSibling : t_node => option DomTypesRe.node = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external nodeName : t_node => string = "" [@@bs.get];
  /* nodePrincipal */
  external nodeType : t_node => int /* nodeType enum */ = "" [@@bs.get];
  let nodeType : t_node => nodeType = fun self => decodeNodeType (nodeType self);
  external nodeValue : t_node => option string = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external setNodeValue : t_node => Js.null string => unit = "nodeValue" [@@bs.set];
  let setNodeValue : t_node => option string => unit = fun self value => setNodeValue self (Js.Null.from_opt value);
  /* outerText */
  external ownerDocument : t_node => DomTypesRe.document = "" [@@bs.get];
  external parentElement : t_node => option DomTypesRe.element = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external parentNode : t_node => option DomTypesRe.node = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external previousSibling : t_node => option DomTypesRe.node = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external rootNode : t_node => DomTypesRe.node = "" [@@bs.get];
  external textContent : t_node => string = "" [@@bs.get];
  external setTextContent : t_node => string => unit = "textContent" [@@bs.set];

  external appendChild : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: t_node];
  external cloneNode : DomTypesRe.node = "" [@@bs.send.pipe: t_node];
  external cloneNodeDeep : Js.boolean => DomTypesRe.node = "cloneNode" [@@bs.send.pipe: t_node];
  let cloneNodeDeep : t_node => DomTypesRe.node = fun self => cloneNodeDeep Js.true_ self;
  external compareDocumentPosition : DomTypesRe.node_like 'a => int = "" [@@bs.send.pipe: t_node]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
  external contains : DomTypesRe.node_like 'a => bool = "" [@@bs.send.pipe: t_node];
  external getRootNode : DomTypesRe.node = "" [@@bs.send.pipe: t_node];
  external getRootNodeComposed : Js.boolean => DomTypesRe.node = "getRootNode" [@@bs.send.pipe: t_node];
  let getRootNodeComposed : t_node => DomTypesRe.node = fun self => getRootNodeComposed Js.true_ self;
  external hasChildNodes : bool = "" [@@bs.send.pipe: t_node];
  external insertBefore : DomTypesRe.node_like 'a => Js.null (DomTypesRe.node_like 'b) => DomTypesRe.node_like 'a = "" [@@bs.send.pipe: t_node];
  let insertBefore : DomTypesRe.node_like 'a => option (DomTypesRe.node_like 'b) => t_node => DomTypesRe.node_like 'a = fun node reference self => insertBefore node (Js.Null.from_opt reference) self;
  external isDefaultNamespace : string => bool = "" [@@bs.send.pipe: t_node];
  external isEqualNode : DomTypesRe.node_like 'a => bool = "" [@@bs.send.pipe: t_node];
  external isSameNode : DomTypesRe.node_like 'a => bool = "" [@@bs.send.pipe: t_node];
  external lookupNamespaceURI : Js.null string => option string = "" [@@bs.send.pipe: t_node] [@@bs.return {null_to_opt: null_to_opt}];
  let lookupNamespaceURI: option string => t_node => option string = fun prefix self => lookupNamespaceURI (Js.Null.from_opt prefix) self;
  external lookupPrefix : string = "lookupPrefix" [@@bs.send.pipe: t_node];
  external normalize : unit = "" [@@bs.send.pipe: t_node];
  external removeChild : DomTypesRe.node_like 'a => DomTypesRe.node_like 'a = "" [@@bs.send.pipe: t_node];
  /* replacChild */
};

include Impl { type t = DomTypesRe.node };
