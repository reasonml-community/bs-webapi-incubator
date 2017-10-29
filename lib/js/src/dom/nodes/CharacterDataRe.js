'use strict';

var NodeRe$Webapi                     = require("./NodeRe.js");
var ChildNodeRe$Webapi                = require("./ChildNodeRe.js");
var EventTargetRe$Webapi              = require("../events/EventTargetRe.js");
var NonDocumentTypeChildNodeRe$Webapi = require("./NonDocumentTypeChildNodeRe.js");

function Impl() {
  return /* module */[];
}

EventTargetRe$Webapi.Impl(/* module */[]);

var include = NodeRe$Webapi.Impl(/* module */[]);

NonDocumentTypeChildNodeRe$Webapi.Impl(/* module */[]);

ChildNodeRe$Webapi.Impl(/* module */[]);

var nodeType = include[0];

exports.Impl     = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
