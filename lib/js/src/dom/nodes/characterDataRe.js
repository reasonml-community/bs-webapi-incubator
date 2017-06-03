'use strict';

var NodeRe                     = require("./nodeRe.js");
var ChildNodeRe                = require("./childNodeRe.js");
var EventTargetRe              = require("../events/eventTargetRe.js");
var NonDocumentTypeChildNodeRe = require("./nonDocumentTypeChildNodeRe.js");

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
