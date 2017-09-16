'use strict';

var NodeRe                     = require("./NodeRe.js");
var SlotableRe                 = require("./SlotableRe.js");
var ChildNodeRe                = require("./ChildNodeRe.js");
var EventTargetRe              = require("../events/EventTargetRe.js");
var CharacterDataRe            = require("./CharacterDataRe.js");
var NonDocumentTypeChildNodeRe = require("./NonDocumentTypeChildNodeRe.js");

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
