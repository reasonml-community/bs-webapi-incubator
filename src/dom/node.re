type t = Dom.node;

external childNodes : t => array t  = "" [@@bs.get]; /* returns a NodeList, not an array */
external firstChild : t => Js.null t = "" [@@bs.get];
external lastChild : t => Js.null t = "" [@@bs.get];
external nextSibling : t => Js.null t = "" [@@bs.get];
external nodeName : t => string = "" [@@bs.get];
external nodeType : t => int = "" [@@bs.get]; /* returns an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeType */
external nodeValue : t => Js.null string = "" [@@bs.get];
external setNodeValue : t => Js.null string => unit = "nodeValue" [@@bs.set];
external ownerDocument : t => Dom.document = "" [@@bs.get];
external parentNode : t => Js.null t = "" [@@bs.get];
external parentElement : t => Js.null t = "" [@@bs.get];
external previousSibling : t => Js.null t = "" [@@bs.get];
external rootNode : t => t = "" [@@bs.get];
external textContent : t => string = "" [@@bs.get];
external setTextContent : t => string => unit = "textContent" [@@bs.set];

external appendChild : t => unit = "" [@@bs.send.pipe: t];
external cloneNode : t = "" [@@bs.send.pipe: t];
external cloneNodeDeep : Js.boolean => t = "cloneNode" [@@bs.send.pipe: t]; /* The only sensible argument value is `Js.Boolean.to_js_boolean true` */
external compareDocumentPosition : t => int = "" [@@bs.send.pipe: t]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
external contains : t => Js.boolean = "" [@@bs.send.pipe: t];
external getRootNode : t = "" [@@bs.send.pipe: t];
external getRootNodeComposed : Js.boolean => t = "getRootNode" [@@bs.send.pipe: t]; /* The only sensible argument value is `Js.Boolean.to_js_boolean true` */
external hasChildNodes : Js.boolean = "" [@@bs.send.pipe: t];
external insertBefore : t => Js.null t => t = "" [@@bs.send.pipe: t];
external isDefaultNamespace : string => Js.boolean = "" [@@bs.send.pipe: t];
external isEqualNode : t => Js.boolean = "" [@@bs.send.pipe: t];
external isSameNode : t => Js.boolean = "" [@@bs.send.pipe: t];
external lookupPrefix : string = "lookupPrefix" [@@bs.send.pipe: t];
external lookupNamespaceURI : Js.null string => Js.null string = "" [@@bs.send.pipe: t];
external normalize : unit = "" [@@bs.send.pipe: t];
external removeChild : t => t = "" [@@bs.send.pipe: t];
