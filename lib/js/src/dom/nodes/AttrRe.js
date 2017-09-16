'use strict';

var NodeRe        = require("./NodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/*  Not a pure module */
