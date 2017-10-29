'use strict';

var NodeRe$Webapi        = require("./NodeRe.js");
var EventTargetRe$Webapi = require("../events/EventTargetRe.js");

EventTargetRe$Webapi.Impl(/* module */[]);

var include = NodeRe$Webapi.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/*  Not a pure module */
