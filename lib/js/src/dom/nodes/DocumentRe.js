'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var NodeRe = require("./NodeRe.js");
var DomTypesRe = require("../DomTypesRe.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var ParentNodeRe = require("./ParentNodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var DocumentOrShadowRootRe = require("./DocumentOrShadowRootRe.js");
var NonElementParentNodeRe = require("./NonElementParentNodeRe.js");

function Impl(T) {
  var asHtmlDocument = (
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  );
  var asHtmlDocument$1 = function (self) {
    return Caml_option.null_to_opt(Curry._1(asHtmlDocument, self));
  };
  var ofNode = function (node) {
    var match = NodeRe.nodeType(node) === /* Document */8;
    if (match) {
      return Caml_option.some(node);
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

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

NonElementParentNodeRe.Impl(/* module */[]);

DocumentOrShadowRootRe.Impl(/* module */[]);

ParentNodeRe.Impl(/* module */[]);

var asHtmlDocument = (
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  );

function asHtmlDocument$1(self) {
  return Caml_option.null_to_opt(Curry._1(asHtmlDocument, self));
}

function ofNode(node) {
  var match = NodeRe.nodeType(node) === /* Document */8;
  if (match) {
    return Caml_option.some(node);
  }
  
}

function compatMode(self) {
  return DomTypesRe.decodeCompatMode(self.compatMode);
}

function visibilityState(self) {
  return DomTypesRe.decodeVisibilityState(self.visibilityState);
}

var nodeType = include[0];

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlDocument = asHtmlDocument$1;
exports.ofNode = ofNode;
exports.compatMode = compatMode;
exports.visibilityState = visibilityState;
/* include Not a pure module */
