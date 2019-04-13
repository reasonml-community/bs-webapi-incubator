'use strict';

var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");

function Impl(T) {
  var nodeType = function (self) {
    return Webapi__Dom__Types.decodeNodeType(self.nodeType);
  };
  return /* module */[/* nodeType */nodeType];
}

Webapi__Dom__EventTarget.Impl(/* module */[]);

function nodeType(self) {
  return Webapi__Dom__Types.decodeNodeType(self.nodeType);
}

exports.Impl = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
