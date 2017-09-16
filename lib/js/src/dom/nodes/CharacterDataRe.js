'use strict';

var NodeRe                     = require("./NodeRe.js");
var ChildNodeRe                = require("./ChildNodeRe.js");
var EventTargetRe              = require("../events/EventTargetRe.js");
var NonDocumentTypeChildNodeRe = require("./NonDocumentTypeChildNodeRe.js");

function Impl() {
  return /* module */[];
}

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

NonDocumentTypeChildNodeRe.Impl(/* module */[]);

ChildNodeRe.Impl(/* module */[]);

var nodeType = include[0];

exports.Impl     = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
