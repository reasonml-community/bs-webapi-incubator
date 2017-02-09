type t = Dom.node;

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
| Notation; /* deprecated */

/* internal */
let nodeTypeToInt = fun
| Element => 1
| Attribute => 2
| Text => 3
| CDATASection => 4
| EntityReference => 5
| Entity => 6
| ProcessingInstruction => 7
| Comment => 8
| Document => 9
| DocumentType => 10
| DocumentFragment => 11
| Notation => 12;

external childNodes : t => array t  = "" [@@bs.get]; /* returns a NodeList, not an array */
external firstChild : t => Js.null t = "" [@@bs.get];
let firstChild : t => option t = fun self => Js.Null.to_opt (firstChild self);
external lastChild : t => Js.null t = "" [@@bs.get];
let lastChild : t => option t = fun self => Js.Null.to_opt (lastChild self);
external nextSibling : t => Js.null t = "" [@@bs.get];
let nextSibling : t => option t = fun self => Js.Null.to_opt (nextSibling self);
external nodeName : t => string = "" [@@bs.get];
external nodeType : t => nodeType = "" [@@bs.get];
external nodeValue : t => Js.null string = "" [@@bs.get];
let nodeValue : t => option string = fun self => Js.Null.to_opt (nodeValue self);
external setNodeValue : t => Js.null string => unit = "nodeValue" [@@bs.set];
let setNodeValue : t => option string => unit = fun self value => setNodeValue self (Js.Null.from_opt value);
external ownerDocument : t => Dom.document = "" [@@bs.get];
external parentNode : t => Js.null t = "" [@@bs.get];
let parentNode : t => option t = fun self => Js.Null.to_opt (parentNode self);
external parentElement : t => Js.null Dom.element = "" [@@bs.get];
let parentElement : t => option Dom.element = fun self => Js.Null.to_opt (parentElement self);
external previousSibling : t => Js.null t = "" [@@bs.get];
let previousSibling : t => option t = fun self => Js.Null.to_opt (previousSibling self);
external rootNode : t => t = "" [@@bs.get];
external textContent : t => string = "" [@@bs.get];
external setTextContent : t => string => unit = "textContent" [@@bs.set];

external appendChild : t => unit = "" [@@bs.send.pipe: t];
external cloneNode : t = "" [@@bs.send.pipe: t];
external cloneNodeDeep : Js.boolean => t = "cloneNode" [@@bs.send.pipe: t];
let cloneNodeDeep : t => t = fun self => cloneNodeDeep (Js.Boolean.to_js_boolean true) self;
external compareDocumentPosition : t => int = "" [@@bs.send.pipe: t]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
external contains : t => Js.boolean = "" [@@bs.send.pipe: t];
let contains : t => t => bool = fun node self => Js.to_bool (contains node self);
external getRootNode : t = "" [@@bs.send.pipe: t];
external getRootNodeComposed : Js.boolean => t = "getRootNode" [@@bs.send.pipe: t];
let getRootNodeComposed : t => t = fun self => getRootNodeComposed (Js.Boolean.to_js_boolean true) self;
external hasChildNodes : Js.boolean = "" [@@bs.send.pipe: t];
let hasChildNodes : t => bool = fun self => Js.to_bool (hasChildNodes self);
external insertBefore : t => Js.null t => t = "" [@@bs.send.pipe: t];
let insertBefore : t => option t => t => t = fun node reference self => insertBefore node (Js.Null.from_opt reference) self;
external isDefaultNamespace : string => Js.boolean = "" [@@bs.send.pipe: t];
let isDefaultNamespace : string => t => bool = fun ns self => Js.to_bool (isDefaultNamespace ns self);
external isEqualNode : t => Js.boolean = "" [@@bs.send.pipe: t];
let isEqualNode: t => t => bool = fun node self => Js.to_bool (isEqualNode node self);
external isSameNode : t => Js.boolean = "" [@@bs.send.pipe: t];
let isSameNode: t => t => bool = fun node self => Js.to_bool (isSameNode node self);
external lookupPrefix : string = "lookupPrefix" [@@bs.send.pipe: t];
external lookupNamespaceURI : Js.null string => Js.null string = "" [@@bs.send.pipe: t];
let lookupNamespaceURI: option string => t => option string = fun prefix self => Js.Null.to_opt (lookupNamespaceURI (Js.Null.from_opt prefix) self);
external normalize : unit = "" [@@bs.send.pipe: t];
external removeChild : t => t = "" [@@bs.send.pipe: t];
