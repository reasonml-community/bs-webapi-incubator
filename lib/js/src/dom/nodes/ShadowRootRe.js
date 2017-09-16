'use strict';

var NodeRe                 = require("./NodeRe.js");
var DomTypesRe             = require("../DomTypesRe.js");
var ParentNodeRe           = require("./ParentNodeRe.js");
var EventTargetRe          = require("../events/EventTargetRe.js");
var DocumentOrShadowRootRe = require("./DocumentOrShadowRootRe.js");
var NonElementParentNodeRe = require("./NonElementParentNodeRe.js");

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
