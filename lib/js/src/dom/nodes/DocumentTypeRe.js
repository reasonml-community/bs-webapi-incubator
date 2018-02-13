'use strict';

var NodeRe = require("./NodeRe.js");
var ChildNodeRe = require("./ChildNodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

ChildNodeRe.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/* include Not a pure module */
