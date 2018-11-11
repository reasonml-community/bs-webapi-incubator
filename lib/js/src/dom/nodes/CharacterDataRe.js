'use strict';

var NodeRe = require("./NodeRe.js");
var ChildNodeRe = require("./ChildNodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var NonDocumentTypeChildNodeRe = require("./NonDocumentTypeChildNodeRe.js");

function Impl(T) {
  return /* module */[];
}

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

NonDocumentTypeChildNodeRe.Impl(/* module */[]);

ChildNodeRe.Impl(/* module */[]);

var nodeType = include[0];

exports.Impl = Impl;
exports.nodeType = nodeType;
/* include Not a pure module */
