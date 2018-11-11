'use strict';

var NodeRe = require("../nodes/NodeRe.js");
var Js_null = require("bs-platform/lib/js/js_null.js");
var DocumentRe = require("../nodes/DocumentRe.js");
var DomTypesRe = require("../DomTypesRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");

function Impl(T) {
  var designMode = function (self) {
    return DomTypesRe.decodeDesignMode(self.designMode);
  };
  var setDesignMode = function (self, value) {
    self.designMode = DomTypesRe.encodeDesignMode(value);
    return /* () */0;
  };
  var dir = function (self) {
    return DomTypesRe.decodeDir(self.dir);
  };
  var setDir = function (self, value) {
    self.dir = DomTypesRe.encodeDir(value);
    return /* () */0;
  };
  var readyState = function (self) {
    return DomTypesRe.decodeReadyState(self.readyState);
  };
  var execCommand = function (command, show, value, self) {
    return self.execCommand(command, show, Js_null.fromOption(value));
  };
  return /* module */[
          /* designMode */designMode,
          /* setDesignMode */setDesignMode,
          /* dir */dir,
          /* setDir */setDir,
          /* readyState */readyState,
          /* execCommand */execCommand
        ];
}

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

var include$1 = DocumentRe.Impl(/* module */[]);

function designMode(self) {
  return DomTypesRe.decodeDesignMode(self.designMode);
}

function setDesignMode(self, value) {
  self.designMode = DomTypesRe.encodeDesignMode(value);
  return /* () */0;
}

function dir(self) {
  return DomTypesRe.decodeDir(self.dir);
}

function setDir(self, value) {
  self.dir = DomTypesRe.encodeDir(value);
  return /* () */0;
}

function readyState(self) {
  return DomTypesRe.decodeReadyState(self.readyState);
}

function execCommand(command, show, value, self) {
  return self.execCommand(command, show, Js_null.fromOption(value));
}

var nodeType = include[0];

var asHtmlDocument = include$1[0];

var ofNode = include$1[1];

var compatMode = include$1[2];

var visibilityState = include$1[3];

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlDocument = asHtmlDocument;
exports.ofNode = ofNode;
exports.compatMode = compatMode;
exports.visibilityState = visibilityState;
exports.designMode = designMode;
exports.setDesignMode = setDesignMode;
exports.dir = dir;
exports.setDir = setDir;
exports.readyState = readyState;
exports.execCommand = execCommand;
/* include Not a pure module */
