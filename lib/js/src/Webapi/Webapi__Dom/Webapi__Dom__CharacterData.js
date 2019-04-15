'use strict';

var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__ChildNode = require("./Webapi__Dom__ChildNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__NonDocumentTypeChildNode = require("./Webapi__Dom__NonDocumentTypeChildNode.js");

function Impl(T) {
  return /* module */[];
}

var include = Webapi__Dom__Node.Impl(/* module */[]);

Webapi__Dom__EventTarget.Impl(/* module */[]);

Webapi__Dom__NonDocumentTypeChildNode.Impl(/* module */[]);

Webapi__Dom__ChildNode.Impl(/* module */[]);

var nodeType = include[0];

exports.Impl = Impl;
exports.nodeType = nodeType;
/* include Not a pure module */
