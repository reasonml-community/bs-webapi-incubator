'use strict';

var NodeRe                     = require("./nodeRe.js");
var SlotableRe                 = require("./slotableRe.js");
var ChildNodeRe                = require("./childNodeRe.js");
var EventTargetRe              = require("../events/eventTargetRe.js");
var CharacterDataRe            = require("./characterDataRe.js");
var NonDocumentTypeChildNodeRe = require("./nonDocumentTypeChildNodeRe.js");

function Impl() {
  return /* module */[];
}

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

CharacterDataRe.Impl(/* module */[]);

NonDocumentTypeChildNodeRe.Impl(/* module */[]);

ChildNodeRe.Impl(/* module */[]);

SlotableRe.Impl(/* module */[]);

var nodeType = include[0];

exports.Impl     = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
