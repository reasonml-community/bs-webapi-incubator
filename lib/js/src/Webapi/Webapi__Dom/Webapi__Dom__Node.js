'use strict';

var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");

function Impl(T) {
  var nodeType = function (self) {
    return Webapi__Dom__Types.decodeNodeType(self.nodeType);
  };
  return {
          nodeType: nodeType
        };
}

Webapi__Dom__EventTarget.Impl({ });

function nodeType(self) {
  return Webapi__Dom__Types.decodeNodeType(self.nodeType);
}

exports.Impl = Impl;
exports.nodeType = nodeType;
/*  Not a pure module */
