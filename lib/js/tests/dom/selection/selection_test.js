'use strict';

var DocumentRe = require("../../../src/dom/nodes/DocumentRe.js");
var TestHelpers = require("../../testHelpers.js");

var node = document.createElement("strong");

var sel = TestHelpers.unsafelyUnwrapOption(DocumentRe.asHtmlDocument(document)).getSelection();

var range = new Range();

sel.anchorNode;

sel.anchorOffset;

sel.focusNode;

sel.focusOffset;

+sel.isCollapsed;

sel.rangeCount;

sel.getRangeAt(0);

sel.collapse(node, 0);

sel.extend(node, 0);

sel.collapseToStart();

sel.collapseToEnd();

sel.selectAllChildren(node);

sel.addRange(range);

sel.removeRange(range);

sel.removeAllRanges();

sel.deleteFromDocument();

sel.toString();

+sel.containsNode(node, false);

+sel.containsNode(node, true);

exports.node = node;
exports.sel = sel;
exports.range = range;
/* node Not a pure module */
