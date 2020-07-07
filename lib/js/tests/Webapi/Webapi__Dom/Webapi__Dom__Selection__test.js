'use strict';

var TestHelpers = require("../../testHelpers.js");
var Webapi__Dom__Document = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Document.js");

var node = document.createElement("strong");

var sel = TestHelpers.unsafelyUnwrapOption(Webapi__Dom__Document.asHtmlDocument(document)).getSelection();

var range = new Range();

sel.anchorNode;

sel.anchorOffset;

sel.focusNode;

sel.focusOffset;

sel.isCollapsed;

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

sel.setBaseAndExtent(node, 0, node, 0);

sel.toString();

sel.containsNode(node, false);

sel.containsNode(node, true);

exports.node = node;
exports.sel = sel;
exports.range = range;
/* node Not a pure module */
