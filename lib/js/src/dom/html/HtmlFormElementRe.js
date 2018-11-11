'use strict';

var NodeRe = require("../nodes/NodeRe.js");
var ElementRe = require("../nodes/ElementRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var HtmlElementRe = require("./HtmlElementRe.js");

function Impl(T) {
  return /* module */[];
}

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

var include$1 = ElementRe.Impl(/* module */[]);

var include$2 = HtmlElementRe.Impl(/* module */[]);

var nodeType = include[0];

var asHtmlElement = include$1[0];

var ofNode = include$1[1];

var insertAdjacentElement = include$1[2];

var insertAdjacentHTML = include$1[3];

var insertAdjacentText = include$1[4];

var ofElement = include$2[0];

var contentEditable = include$2[1];

var setContentEditable = include$2[2];

var dir = include$2[3];

var setDir = include$2[4];

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlElement = asHtmlElement;
exports.ofNode = ofNode;
exports.insertAdjacentElement = insertAdjacentElement;
exports.insertAdjacentHTML = insertAdjacentHTML;
exports.insertAdjacentText = insertAdjacentText;
exports.ofElement = ofElement;
exports.contentEditable = contentEditable;
exports.setContentEditable = setContentEditable;
exports.dir = dir;
exports.setDir = setDir;
/*  Not a pure module */
