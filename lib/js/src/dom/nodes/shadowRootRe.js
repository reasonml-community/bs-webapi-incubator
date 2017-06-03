'use strict';

var NodeRe                 = require("./nodeRe.js");
var DomTypesRe             = require("../domTypesRe.js");
var ParentNodeRe           = require("./parentNodeRe.js");
var EventTargetRe          = require("../events/eventTargetRe.js");
var DocumentOrShadowRootRe = require("./documentOrShadowRootRe.js");
var NonElementParentNodeRe = require("./nonElementParentNodeRe.js");

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

NonElementParentNodeRe.Impl(/* module */[]);

DocumentOrShadowRootRe.Impl(/* module */[]);

ParentNodeRe.Impl(/* module */[]);

function shadowRootMode(self) {
  return DomTypesRe.decodeShadowRootMode(self.shadowRootMode);
}

var nodeType = include[0];

exports.nodeType       = nodeType;
exports.shadowRootMode = shadowRootMode;
/*  Not a pure module */
