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
  var dir = function (self) {
    return Webapi__Dom__Types.decodeDir(self.dir);
  };
  var setDir = function (self, value) {
    self.dir = Webapi__Dom__Types.encodeDir(value);
    return /* () */0;
  };
  var compatMode = function (self) {
    return Webapi__Dom__Types.decodeCompatMode(self.compatMode);
  };
  var visibilityState = function (self) {
    return Webapi__Dom__Types.decodeVisibilityState(self.visibilityState);
  };
  return {
          asHtmlDocument: asHtmlDocument$1,
          ofNode: ofNode,
          dir: dir,
          setDir: setDir,
          compatMode: compatMode,
          visibilityState: visibilityState
        };
}

var include = Webapi__Dom__Node.Impl({ });

Webapi__Dom__EventTarget.Impl({ });

Webapi__Dom__NonElementParentNode.Impl({ });

Webapi__Dom__DocumentOrShadowRoot.Impl({ });

Webapi__Dom__ParentNode.Impl({ });

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

function dir(self) {
  return Webapi__Dom__Types.decodeDir(self.dir);
}

function setDir(self, value) {
  self.dir = Webapi__Dom__Types.encodeDir(value);
  return /* () */0;
}

function compatMode(self) {
  return Webapi__Dom__Types.decodeCompatMode(self.compatMode);
}

function visibilityState(self) {
  return Webapi__Dom__Types.decodeVisibilityState(self.visibilityState);
}

var nodeType = include.nodeType;

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlDocument = asHtmlDocument$1;
exports.ofNode = ofNode;
exports.dir = dir;
exports.setDir = setDir;
exports.compatMode = compatMode;
exports.visibilityState = visibilityState;
/* include Not a pure module */
