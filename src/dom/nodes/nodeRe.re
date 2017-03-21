module Impl (T: { type t; }) => {
  /* baseURI */
  external childNodes : T.t => DomTypesRe.nodeList  = "" [@@bs.get];
  external firstChild : T.t => option DomTypesRe.node = "" [@@bs.get] [@@bs.return null_to_opt];
  external innerText : T.t => string = "" [@@bs.get];
  external setInnerText : T.t => string => unit = "innerText" [@@bs.set];
  external lastChild : T.t => option DomTypesRe.node = "" [@@bs.get];
  external nextSibling : T.t => option DomTypesRe.node = "" [@@bs.get] [@@bs.return null_to_opt];
  external nodeName : T.t => string = "" [@@bs.get];
  /* nodePrincipal */
  external nodeType : T.t => int /* nodeType enum */ = "" [@@bs.get];
  let nodeType : T.t => DomTypesRe.nodeType = fun self => DomTypesRe.decodeNodeType (nodeType self);
  external nodeValue : T.t => option string = "" [@@bs.get] [@@bs.return null_to_opt];
  external setNodeValue : T.t => Js.null string => unit = "nodeValue" [@@bs.set];
  /* let setNodeValue : T.t => option string => unit = fun self value => setNodeValue self (Js.Null.from_opt value); */ /* temporarily removed to reduce codegen size */
  /* outerText */
  external ownerDocument : T.t => DomTypesRe.document = "" [@@bs.get];
  external parentElement : T.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external parentNode : T.t => option DomTypesRe.node = "" [@@bs.get] [@@bs.return null_to_opt];
  external previousSibling : T.t => option DomTypesRe.node = "" [@@bs.get] [@@bs.return null_to_opt];
  external rootNode : T.t => DomTypesRe.node = "" [@@bs.get];
  external textContent : T.t => string = "" [@@bs.get];
  external setTextContent : T.t => string => unit = "textContent" [@@bs.set];

  external appendChild : DomTypesRe.node_like 'a => unit = "" [@@bs.send.pipe: T.t];
  external cloneNode : DomTypesRe.node = "" [@@bs.send.pipe: T.t];
  external cloneNodeDeep : Js.boolean => DomTypesRe.node = "cloneNode" [@@bs.send.pipe: T.t];
  /* let cloneNodeDeep : T.t => DomTypesRe.node = fun self => cloneNodeDeep Js.true_ self; */ /* temporarily removed to reduce codegen size */
  external compareDocumentPosition : DomTypesRe.node_like 'a => int = "" [@@bs.send.pipe: T.t]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
  external contains : DomTypesRe.node_like 'a => bool = "" [@@bs.send.pipe: T.t];
  external getRootNode : DomTypesRe.node = "" [@@bs.send.pipe: T.t];
  external getRootNodeComposed : Js.boolean => DomTypesRe.node = "getRootNode" [@@bs.send.pipe: T.t];
  /* let getRootNodeComposed : T.t => DomTypesRe.node = fun self => getRootNodeComposed Js.true_ self; */ /* temporarily removed to reduce codegen size */
  external hasChildNodes : bool = "" [@@bs.send.pipe: T.t];
  external insertBefore : DomTypesRe.node_like 'a => Js.null (DomTypesRe.node_like 'b) => DomTypesRe.node_like 'a = "" [@@bs.send.pipe: T.t];
  let insertBefore : DomTypesRe.node_like 'a => option (DomTypesRe.node_like 'b) => T.t => DomTypesRe.node_like 'a = fun node reference self => insertBefore node (Js.Null.from_opt reference) self;
  external isDefaultNamespace : string => bool = "" [@@bs.send.pipe: T.t];
  external isEqualNode : DomTypesRe.node_like 'a => bool = "" [@@bs.send.pipe: T.t];
  external isSameNode : DomTypesRe.node_like 'a => bool = "" [@@bs.send.pipe: T.t];
  external lookupNamespaceURI : Js.null string => option string = "" [@@bs.send.pipe: T.t] [@@bs.return null_to_opt];
  /* let lookupNamespaceURI: option string => T.t => option string = fun prefix self => lookupNamespaceURI (Js.Null.from_opt prefix) self; */ /* temporarily removed to reduce codegen size */
  external lookupPrefix : string = "lookupPrefix" [@@bs.send.pipe: T.t];
  external normalize : unit = "" [@@bs.send.pipe: T.t];
  external removeChild : DomTypesRe.node_like 'a => DomTypesRe.node_like 'a = "" [@@bs.send.pipe: T.t];
  /* replacChild */
};

type t = DomTypesRe.node;
include EventTargetRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };
