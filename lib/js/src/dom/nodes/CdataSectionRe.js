'use strict';

var NodeRe = require("./NodeRe.js");
var SlotableRe = require("./SlotableRe.js");
var ChildNodeRe = require("./ChildNodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var CharacterDataRe = require("./CharacterDataRe.js");
var NonDocumentTypeChildNodeRe = require("./NonDocumentTypeChildNodeRe.js");

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

CharacterDataRe.Impl(/* module */[]);

NonDocumentTypeChildNodeRe.Impl(/* module */[]);

ChildNodeRe.Impl(/* module */[]);

SlotableRe.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/* include Not a pure module */
