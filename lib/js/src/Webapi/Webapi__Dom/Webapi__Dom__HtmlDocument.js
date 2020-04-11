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
  var execCommand = function (command, show, value, self) {
    return self.execCommand(command, show, Js_null.fromOption(value));
  };
  return {
          designMode: designMode,
          setDesignMode: setDesignMode,
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

function execCommand(command, show, value, self) {
  return self.execCommand(command, show, Js_null.fromOption(value));
}

var nodeType = include.nodeType;

var asHtmlDocument = include$1.asHtmlDocument;

var ofNode = include$1.ofNode;

var dir = include$1.dir;

var setDir = include$1.setDir;

var compatMode = include$1.compatMode;

var visibilityState = include$1.visibilityState;

var readyState = include$1.readyState;

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlDocument = asHtmlDocument;
exports.ofNode = ofNode;
exports.dir = dir;
exports.setDir = setDir;
exports.compatMode = compatMode;
exports.visibilityState = visibilityState;
exports.readyState = readyState;
exports.designMode = designMode;
exports.setDesignMode = setDesignMode;
exports.execCommand = execCommand;
/* include Not a pure module */
