'use strict';

var DomTypesRe = require("../DomTypesRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");

function Impl(T) {
  var nodeType = function (self) {
    return DomTypesRe.decodeNodeType(self.nodeType);
  };
  return /* module */[/* nodeType */nodeType];
}

EventTargetRe.Impl(/* module */[]);

function nodeType(self) {
  return DomTypesRe.decodeNodeType(self.nodeType);
}

exports.Impl = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
