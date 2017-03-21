'use strict';

var NodeRe = require("../../../src/dom/nodes/nodeRe");

var node = document.createElement("strong").rootNode;

var node2 = document.createElement("small").rootNode;

node.childNodes;

node.firstChild;

node.lastChild;

node.nextSibling;

node.nodeName;

NodeRe.nodeType(node);

node.nodeValue;

node.nodeValue = null;

node.ownerDocument;

node.parentNode;

node.parentElement;

node.previousSibling;

node.rootNode;

node.textContent;

node.textContent = "foo";

node.appendChild(node2);

node.cloneNode();

node.cloneNode(true);

node.compareDocumentPosition(node2);

+node.contains(node2);

node.getRootNode();

node.getRootNode(true);

+node.hasChildNodes();

NodeRe.insertBefore(node2, /* None */0, node);

+node.isDefaultNamespace("http://...");

+node.isEqualNode(node2);

+node.isSameNode(node2);

node.lookupPrefix();

node.normalize();

node.removeChild(node2);

exports.node  = node;
exports.node2 = node2;
/* node Not a pure module */
