'use strict';

var Js_null = require("bs-platform/lib/js/js_null.js");
var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__Document = require("./Webapi__Dom__Document.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__GlobalEventHandlers = require("./Webapi__Dom__GlobalEventHandlers.js");

function Impl(T) {
  var designMode = function (self) {
    return Webapi__Dom__Types.decodeDesignMode(self.designMode);
  };
  var setDesignMode = function (self, value) {
    self.designMode = Webapi__Dom__Types.encodeDesignMode(value);
    return /* () */0;
  };
  var dir = function (self) {
    return Webapi__Dom__Types.decodeDir(self.dir);
  };
  var setDir = function (self, value) {
    self.dir = Webapi__Dom__Types.encodeDir(value);
    return /* () */0;
  };
  var readyState = function (self) {
    return Webapi__Dom__Types.decodeReadyState(self.readyState);
  };
  var execCommand = function (command, show, value, self) {
    return self.execCommand(command, show, Js_null.fromOption(value));
  };
  return {
          designMode: designMode,
          setDesignMode: setDesignMode,
          dir: dir,
          setDir: setDir,
          readyState: readyState,
          execCommand: execCommand
        };
}

var include = Webapi__Dom__Node.Impl({ });

Webapi__Dom__EventTarget.Impl({ });

Webapi__Dom__GlobalEventHandlers.Impl({ });

var include$1 = Webapi__Dom__Document.Impl({ });

function designMode(self) {
  return Webapi__Dom__Types.decodeDesignMode(self.designMode);
}

function setDesignMode(self, value) {
  self.designMode = Webapi__Dom__Types.encodeDesignMode(value);
  return /* () */0;
}

function dir(self) {
  return Webapi__Dom__Types.decodeDir(self.dir);
}

function setDir(self, value) {
  self.dir = Webapi__Dom__Types.encodeDir(value);
  return /* () */0;
}

function readyState(self) {
  return Webapi__Dom__Types.decodeReadyState(self.readyState);
}

function execCommand(command, show, value, self) {
  return self.execCommand(command, show, Js_null.fromOption(value));
}

var nodeType = include.nodeType;

var asHtmlDocument = include$1.asHtmlDocument;

var ofNode = include$1.ofNode;

var compatMode = include$1.compatMode;

var visibilityState = include$1.visibilityState;

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
