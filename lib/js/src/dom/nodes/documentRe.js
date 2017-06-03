'use strict';

var Curry                  = require("bs-platform/lib/js/curry.js");
var NodeRe                 = require("./nodeRe.js");
var DomTypesRe             = require("../domTypesRe.js");
var Js_primitive           = require("bs-platform/lib/js/js_primitive.js");
var ParentNodeRe           = require("./parentNodeRe.js");
var EventTargetRe          = require("../events/eventTargetRe.js");
var DocumentOrShadowRootRe = require("./documentOrShadowRootRe.js");
var NonElementParentNodeRe = require("./nonElementParentNodeRe.js");

function Impl() {
  var asHtmlDocument = (
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  );
  var asHtmlDocument$1 = function (self) {
    return Js_primitive.null_to_opt(Curry._1(asHtmlDocument, self));
  };
  var ofNode = function (node) {
    var match = +(NodeRe.nodeType(node) === /* Document */8);
    if (match !== 0) {
      return /* Some */[node];
    } else {
      return /* None */0;
    }
  };
  var compatMode = function (self) {
    return DomTypesRe.decodeCompatMode(self.compatMode);
  };
  var visibilityState = function (self) {
    return DomTypesRe.decodeVisibilityState(self.visibilityState);
  };
  return /* module */[
          /* asHtmlDocument */asHtmlDocument$1,
          /* ofNode */ofNode,
          /* compatMode */compatMode,
          /* visibilityState */visibilityState
        ];
}

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

NonElementParentNodeRe.Impl(/* module */[]);

DocumentOrShadowRootRe.Impl(/* module */[]);

ParentNodeRe.Impl(/* module */[]);

var asHtmlDocument = (
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  );

function asHtmlDocument$1(self) {
  return Js_primitive.null_to_opt(Curry._1(asHtmlDocument, self));
}

function ofNode(node) {
  var match = +(NodeRe.nodeType(node) === /* Document */8);
  if (match !== 0) {
    return /* Some */[node];
  } else {
    return /* None */0;
  }
}

function compatMode(self) {
  return DomTypesRe.decodeCompatMode(self.compatMode);
}

function visibilityState(self) {
  return DomTypesRe.decodeVisibilityState(self.visibilityState);
}

var nodeType = include[0];

exports.Impl            = Impl;
exports.nodeType        = nodeType;
exports.asHtmlDocument  = asHtmlDocument$1;
exports.ofNode          = ofNode;
exports.compatMode      = compatMode;
exports.visibilityState = visibilityState;
/*  Not a pure module */
