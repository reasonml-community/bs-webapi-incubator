'use strict';

var RangeRe = require("../../src/dom/rangeRe");

var node = document.createElement("strong");

var range = new Range();

RangeRe.collapsed(range);

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

RangeRe.collapseToStart(range);

range.cloneContents();

range.deleteContents();

range.extractContents();

range.insertNode(node);

range.surroundContents(node);

range.compareBoundaryPoints(0, range);

range.cloneRange();

range.detach();

range.toString();

RangeRe.comparePoint(node, 0, range);

range.createContextualFragment("<strong>stuff</strong>");

range.getBoundingClientRect();

range.getClientRects();

RangeRe.intersectsNode(node, range);

RangeRe.isPointInRange(node, 0, range);

exports.node  = node;
exports.range = range;
/* node Not a pure module */
