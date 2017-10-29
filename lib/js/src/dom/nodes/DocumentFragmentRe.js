'use strict';

var NodeRe$Webapi                 = require("./NodeRe.js");
var ParentNodeRe$Webapi           = require("./ParentNodeRe.js");
var EventTargetRe$Webapi          = require("../events/EventTargetRe.js");
var NonElementParentNodeRe$Webapi = require("./NonElementParentNodeRe.js");

EventTargetRe$Webapi.Impl(/* module */[]);

var include = NodeRe$Webapi.Impl(/* module */[]);

NonElementParentNodeRe$Webapi.Impl(/* module */[]);

ParentNodeRe$Webapi.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/*  Not a pure module */
