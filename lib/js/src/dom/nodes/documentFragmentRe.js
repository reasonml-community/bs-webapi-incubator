'use strict';

var NodeRe                 = require("./nodeRe.js");
var ParentNodeRe           = require("./parentNodeRe.js");
var EventTargetRe          = require("../events/eventTargetRe.js");
var NonElementParentNodeRe = require("./nonElementParentNodeRe.js");

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

NonElementParentNodeRe.Impl(/* module */[]);

ParentNodeRe.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/*  Not a pure module */
