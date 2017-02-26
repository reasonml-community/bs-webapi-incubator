'use strict';

var DomRe    = require("../../src/dom/domRe");
var NodeRe   = require("../../src/dom/nodeRe");
var ReasonJs = require("../../src/reasonJs");

var node = document.createElement("strong").rootNode;

var node2 = document.createElement("small").rootNode;

node.childNodes;

NodeRe.firstChild(node);

NodeRe.lastChild(node);

NodeRe.nextSibling(node);

node.nodeName;

NodeRe.nodeType(node);

NodeRe.nodeValue(node);

NodeRe.setNodeValue(node, /* None */0);

node.ownerDocument;

NodeRe.parentNode(node);

NodeRe.parentElement(node);

NodeRe.previousSibling(node);

node.rootNode;

node.textContent;

node.textContent = "foo";

node.appendChild(node2);

node.cloneNode();

NodeRe.cloneNodeDeep(node);

node.compareDocumentPosition(node2);

NodeRe.contains(node2, node);

node.getRootNode();

NodeRe.getRootNodeComposed(node);

NodeRe.hasChildNodes(node);

NodeRe.insertBefore(node2, /* None */0, node);

NodeRe.isDefaultNamespace("http://...", node);

NodeRe.isEqualNode(node2, node);

NodeRe.isSameNode(node2, node);

node.lookupPrefix();

node.normalize();

node.removeChild(node2);

exports.node  = node;
exports.node2 = node2;
/* node Not a pure module */
