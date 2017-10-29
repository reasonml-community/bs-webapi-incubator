'use strict';

var DomTypesRe$Webapi    = require("../DomTypesRe.js");
var EventTargetRe$Webapi = require("../events/EventTargetRe.js");

function Impl() {
  var nodeType = function (self) {
    return DomTypesRe$Webapi.decodeNodeType(self.nodeType);
  };
  return /* module */[/* nodeType */nodeType];
}

EventTargetRe$Webapi.Impl(/* module */[]);

function nodeType(self) {
  return DomTypesRe$Webapi.decodeNodeType(self.nodeType);
}

exports.Impl     = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
