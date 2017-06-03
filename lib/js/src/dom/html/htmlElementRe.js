'use strict';

var NodeRe        = require("../nodes/nodeRe.js");
var ElementRe     = require("../nodes/elementRe.js");
var DomTypesRe    = require("../domTypesRe.js");
var EventTargetRe = require("../events/eventTargetRe.js");

function Impl() {
  var ofElement = function (element) {
    var match = +(element.tagName === "html");
    if (match !== 0) {
      return /* Some */[element];
    } else {
      return /* None */0;
    }
  };
  var contentEditable = function (self) {
    return DomTypesRe.decodeContentEditable(self.contentEditable);
  };
  var setContentEditable = function (self, value) {
    self.contentEditable = DomTypesRe.encodeContentEditable(value);
    return /* () */0;
  };
  var dir = function (self) {
    return DomTypesRe.decodeDir(self.dir);
  };
  var setDir = function (self, value) {
    self.dir = DomTypesRe.encodeDir(value);
    return /* () */0;
  };
  return /* module */[
          /* ofElement */ofElement,
          /* contentEditable */contentEditable,
          /* setContentEditable */setContentEditable,
          /* dir */dir,
          /* setDir */setDir
        ];
}

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

var include$1 = ElementRe.Impl(/* module */[]);

function ofElement(element) {
  var match = +(element.tagName === "html");
  if (match !== 0) {
    return /* Some */[element];
  } else {
    return /* None */0;
  }
}

function contentEditable(self) {
  return DomTypesRe.decodeContentEditable(self.contentEditable);
}

function setContentEditable(self, value) {
  self.contentEditable = DomTypesRe.encodeContentEditable(value);
  return /* () */0;
}

function dir(self) {
  return DomTypesRe.decodeDir(self.dir);
}

function setDir(self, value) {
  self.dir = DomTypesRe.encodeDir(value);
  return /* () */0;
}

var nodeType = include[0];

var asHtmlElement = include$1[0];

var ofNode = include$1[1];

var insertAdjacentElement = include$1[2];

var insertAdjacentHTML = include$1[3];

var insertAdjacentText = include$1[4];

exports.Impl                  = Impl;
exports.nodeType              = nodeType;
exports.asHtmlElement         = asHtmlElement;
exports.ofNode                = ofNode;
exports.insertAdjacentElement = insertAdjacentElement;
exports.insertAdjacentHTML    = insertAdjacentHTML;
exports.insertAdjacentText    = insertAdjacentText;
exports.ofElement             = ofElement;
exports.contentEditable       = contentEditable;
exports.setContentEditable    = setContentEditable;
exports.dir                   = dir;
exports.setDir                = setDir;
/* include Not a pure module */
