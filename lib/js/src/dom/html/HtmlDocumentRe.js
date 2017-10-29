'use strict';

var Js_null              = require("bs-platform/lib/js/js_null.js");
var Js_boolean           = require("bs-platform/lib/js/js_boolean.js");
var NodeRe$Webapi        = require("../nodes/NodeRe.js");
var DocumentRe$Webapi    = require("../nodes/DocumentRe.js");
var DomTypesRe$Webapi    = require("../DomTypesRe.js");
var EventTargetRe$Webapi = require("../events/EventTargetRe.js");

function Impl() {
  var designMode = function (self) {
    return DomTypesRe$Webapi.decodeDesignMode(self.designMode);
  };
  var setDesignMode = function (self, value) {
    self.designMode = DomTypesRe$Webapi.encodeDesignMode(value);
    return /* () */0;
  };
  var dir = function (self) {
    return DomTypesRe$Webapi.decodeDir(self.dir);
  };
  var setDir = function (self, value) {
    self.dir = DomTypesRe$Webapi.encodeDir(value);
    return /* () */0;
  };
  var readyState = function (self) {
    return DomTypesRe$Webapi.decodeReadyState(self.readyState);
  };
  var execCommand = function (command, show, value, self) {
    return +self.execCommand(command, Js_boolean.to_js_boolean(show), Js_null.from_opt(value));
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

var include = NodeRe$Webapi.Impl(/* module */[]);

EventTargetRe$Webapi.Impl(/* module */[]);

var include$1 = DocumentRe$Webapi.Impl(/* module */[]);

function designMode(self) {
  return DomTypesRe$Webapi.decodeDesignMode(self.designMode);
}

function setDesignMode(self, value) {
  self.designMode = DomTypesRe$Webapi.encodeDesignMode(value);
  return /* () */0;
}

function dir(self) {
  return DomTypesRe$Webapi.decodeDir(self.dir);
}

function setDir(self, value) {
  self.dir = DomTypesRe$Webapi.encodeDir(value);
  return /* () */0;
}

function readyState(self) {
  return DomTypesRe$Webapi.decodeReadyState(self.readyState);
}

function execCommand(command, show, value, self) {
  return +self.execCommand(command, Js_boolean.to_js_boolean(show), Js_null.from_opt(value));
}

var nodeType = include[0];

var asHtmlDocument = include$1[0];

var ofNode = include$1[1];

var compatMode = include$1[2];

var visibilityState = include$1[3];

exports.Impl            = Impl;
exports.nodeType        = nodeType;
exports.asHtmlDocument  = asHtmlDocument;
exports.ofNode          = ofNode;
exports.compatMode      = compatMode;
exports.visibilityState = visibilityState;
exports.designMode      = designMode;
exports.setDesignMode   = setDesignMode;
exports.dir             = dir;
exports.setDir          = setDir;
exports.readyState      = readyState;
exports.execCommand     = execCommand;
/* include Not a pure module */
