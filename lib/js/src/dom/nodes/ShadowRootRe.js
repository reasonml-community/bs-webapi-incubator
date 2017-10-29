'use strict';

var NodeRe$Webapi                 = require("./NodeRe.js");
var DomTypesRe$Webapi             = require("../DomTypesRe.js");
var ParentNodeRe$Webapi           = require("./ParentNodeRe.js");
var EventTargetRe$Webapi          = require("../events/EventTargetRe.js");
var DocumentOrShadowRootRe$Webapi = require("./DocumentOrShadowRootRe.js");
var NonElementParentNodeRe$Webapi = require("./NonElementParentNodeRe.js");

EventTargetRe$Webapi.Impl(/* module */[]);

var include = NodeRe$Webapi.Impl(/* module */[]);

NonElementParentNodeRe$Webapi.Impl(/* module */[]);

DocumentOrShadowRootRe$Webapi.Impl(/* module */[]);

ParentNodeRe$Webapi.Impl(/* module */[]);

function shadowRootMode(self) {
  return DomTypesRe$Webapi.decodeShadowRootMode(self.shadowRootMode);
}

var nodeType = include[0];

exports.nodeType       = nodeType;
exports.shadowRootMode = shadowRootMode;
/*  Not a pure module */
