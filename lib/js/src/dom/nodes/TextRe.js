'use strict';

var NodeRe$Webapi                     = require("./NodeRe.js");
var SlotableRe$Webapi                 = require("./SlotableRe.js");
var ChildNodeRe$Webapi                = require("./ChildNodeRe.js");
var EventTargetRe$Webapi              = require("../events/EventTargetRe.js");
var CharacterDataRe$Webapi            = require("./CharacterDataRe.js");
var NonDocumentTypeChildNodeRe$Webapi = require("./NonDocumentTypeChildNodeRe.js");

function Impl() {
  return /* module */[];
}

EventTargetRe$Webapi.Impl(/* module */[]);

var include = NodeRe$Webapi.Impl(/* module */[]);

CharacterDataRe$Webapi.Impl(/* module */[]);

NonDocumentTypeChildNodeRe$Webapi.Impl(/* module */[]);

ChildNodeRe$Webapi.Impl(/* module */[]);

SlotableRe$Webapi.Impl(/* module */[]);

var nodeType = include[0];

exports.Impl     = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
