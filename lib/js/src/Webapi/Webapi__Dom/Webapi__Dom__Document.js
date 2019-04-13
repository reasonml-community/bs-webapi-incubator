'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__ParentNode = require("./Webapi__Dom__ParentNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__DocumentOrShadowRoot = require("./Webapi__Dom__DocumentOrShadowRoot.js");
var Webapi__Dom__NonElementParentNode = require("./Webapi__Dom__NonElementParentNode.js");

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
    var match = Webapi__Dom__Node.nodeType(node) === /* Document */8;
    if (match) {
      return Caml_option.some(node);
    }
    
  };
  var compatMode = function (self) {
    return Webapi__Dom__Types.decodeCompatMode(self.compatMode);
  };
  var visibilityState = function (self) {
    return Webapi__Dom__Types.decodeVisibilityState(self.visibilityState);
  };
  return /* module */[
          /* asHtmlDocument */asHtmlDocument$1,
          /* ofNode */ofNode,
          /* compatMode */compatMode,
          /* visibilityState */visibilityState
        ];
}

var include = Webapi__Dom__Node.Impl(/* module */[]);

Webapi__Dom__EventTarget.Impl(/* module */[]);

Webapi__Dom__NonElementParentNode.Impl(/* module */[]);

Webapi__Dom__DocumentOrShadowRoot.Impl(/* module */[]);

Webapi__Dom__ParentNode.Impl(/* module */[]);

var asHtmlDocument = (
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  );

function asHtmlDocument$1(self) {
  return Caml_option.null_to_opt(Curry._1(asHtmlDocument, self));
}

function ofNode(node) {
  var match = Webapi__Dom__Node.nodeType(node) === /* Document */8;
  if (match) {
    return Caml_option.some(node);
  }
  
}

function compatMode(self) {
  return Webapi__Dom__Types.decodeCompatMode(self.compatMode);
}

function visibilityState(self) {
  return Webapi__Dom__Types.decodeVisibilityState(self.visibilityState);
}

var nodeType = include[0];

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlDocument = asHtmlDocument$1;
exports.ofNode = ofNode;
exports.compatMode = compatMode;
exports.visibilityState = visibilityState;
/* include Not a pure module */
