'use strict';

var Webapi__Dom__Range = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Range.js");

var node = document.createElement("strong");

var range = new Range();

range.collapsed;

range.commonAncestorContainer;

range.endContainer;

range.endOffset;

range.startContainer;

range.startOffset;

range.setStart(node, 0);

range.setEnd(node, 0);

range.setStartBefore(node);

range.setStartAfter(node);

range.setEndBefore(node);

range.setEndAfter(node);

range.selectNode(node);

range.selectNodeContents(node);

range.collapse();

range.collapse(true);

range.cloneContents();

range.deleteContents();

range.extractContents();

range.insertNode(node);

range.surroundContents(node);

range.compareBoundaryPoints(0, range);

range.cloneRange();

range.detach();

range.toString();

Webapi__Dom__Range.comparePoint(node, 0, range);

range.createContextualFragment("<strong>stuff</strong>");

range.getBoundingClientRect();

range.getClientRects();

range.intersectsNode(node);

range.isPointInRange(node, 0);

exports.node = node;
exports.range = range;
/* node Not a pure module */
