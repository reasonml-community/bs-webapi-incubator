open ReasonJs;

let node = document |> Document.createElement "strong" |> Element.rootNode;
let node2 = document |> Document.createElement "small" |> Element.rootNode;

let _ = Node.childNodes node;
let _ = Node.firstChild node;
let _ = Node.lastChild node;
let _ = Node.nextSibling node;
let _ = Node.nodeName node;
let _ = Node.nodeType node;
let _ = Node.nodeValue node;
let _ = Node.setNodeValue node None;
let _ = Node.ownerDocument node;
let _ = Node.parentNode node;
let _ = Node.parentElement node;
let _ = Node.previousSibling node;
let _ = Node.rootNode node;
let _ = Node.textContent node;
let _ = Node.setTextContent node "foo";

let _ = Node.appendChild node2 node;
let _ = Node.cloneNode node;
let _ = Node.cloneNodeDeep node;
let _ = Node.compareDocumentPosition node2 node;
let _ = Node.contains node2 node;
let _ = Node.getRootNode node;
let _ = Node.getRootNodeComposed node;
let _ = Node.hasChildNodes node;
let _ = Node.insertBefore node2 None node;
let _ = Node.isDefaultNamespace "http://..." node;
let _ = Node.isEqualNode node2 node;
let _ = Node.isSameNode node2 node;
let _ = Node.lookupPrefix node;
let _ = Node.lookupNamespaceURI None;
let _ = Node.normalize node;
let _ = Node.removeChild node2 node;
