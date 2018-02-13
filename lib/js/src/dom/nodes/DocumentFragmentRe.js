'use strict';

var NodeRe = require("./NodeRe.js");
var ParentNodeRe = require("./ParentNodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var NonElementParentNodeRe = require("./NonElementParentNodeRe.js");

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

NonElementParentNodeRe.Impl(/* module */[]);

ParentNodeRe.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/* include Not a pure module */
