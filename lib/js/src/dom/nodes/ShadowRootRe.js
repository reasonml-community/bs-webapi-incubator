'use strict';

var NodeRe = require("./NodeRe.js");
var DomTypesRe = require("../DomTypesRe.js");
var ParentNodeRe = require("./ParentNodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var DocumentOrShadowRootRe = require("./DocumentOrShadowRootRe.js");
var NonElementParentNodeRe = require("./NonElementParentNodeRe.js");

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

NonElementParentNodeRe.Impl(/* module */[]);

DocumentOrShadowRootRe.Impl(/* module */[]);

ParentNodeRe.Impl(/* module */[]);

function shadowRootMode(self) {
  return DomTypesRe.decodeShadowRootMode(self.shadowRootMode);
}

var nodeType = include[0];

exports.nodeType = nodeType;
exports.shadowRootMode = shadowRootMode;
/* include Not a pure module */
