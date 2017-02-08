type t = Dom.node;

external childNodes : t => array t  = "" [@@bs.get]; /* returns a NodeList, not an array */
external firstChild : t => Js.null t = "" [@@bs.get];
external lastChild : t => Js.null t = "" [@@bs.get];
external nextSibling : t => Js.null t = "" [@@bs.get];
external nodeName : t => string = "" [@@bs.get];
external nodeType : t => int = "" [@@bs.get]; /* returns an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeType */
external nodeValue : t => Js.null string = "" [@@bs.get];
external setNodeValue : t => Js.null string => Js.null string = "nodeValue" [@@bs.set];
external ownerDocument : t => Dom.document = "" [@@bs.get];
external parentNode : t => Js.null t = "" [@@bs.get];
external parentElement : t => Js.null t = "" [@@bs.get];
external previousSibling : t => Js.null t = "" [@@bs.get];
external rootNode : t => t = "" [@@bs.get];
external textContent : t => string = "" [@@bs.get];
external setTextContent : t => string => string = "textContent" [@@bs.set];

external appendChild : t => t => unit = "" [@@bs.send];
external cloneNode : t => t = "" [@@bs.send];
external cloneNodeDeep : t => Js.boolean => t = "cloneNode" [@@bs.send]; /* The only sensible argument value is `Js.Boolean.to_js_boolean true` */
external compareDocumentPosition : t => t => int = "" [@@bs.send]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
external contains : t => t => Js.boolean = "" [@@bs.send];
external getRootNode : t => t = "" [@@bs.send];
external getRootNodeComposed : t => Js.boolean => t = "getRootNode" [@@bs.send]; /* The only sensible argument value is `Js.Boolean.to_js_boolean true` */
external hasChildNodes : t => Js.boolean = "" [@@bs.send];
external insertBefore : t => t => Js.null t => t = "" [@@bs.send];
external isDefaultNamespace : t => string => Js.boolean = "" [@@bs.send];
external isEqualNode : t => t => Js.boolean = "" [@@bs.send];
external isSameNode : t => t => Js.boolean = "" [@@bs.send];
external lookupPrefix : t => string = "lookupPrefix" [@@bs.send];
external lookupNamespaceURI : t => Js.null string => Js.null string = "" [@@bs.send];
external normalize : t => unit = "" [@@bs.send];
external removeChild : t => t => t = "" [@@bs.send];
