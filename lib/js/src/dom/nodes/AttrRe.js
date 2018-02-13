'use strict';

var NodeRe = require("./NodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/* include Not a pure module */
