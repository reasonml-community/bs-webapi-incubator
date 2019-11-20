'use strict';

var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__ChildNode = require("./Webapi__Dom__ChildNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__NonDocumentTypeChildNode = require("./Webapi__Dom__NonDocumentTypeChildNode.js");

function Impl(T) {
  return { };
}

var include = Webapi__Dom__Node.Impl({ });

Webapi__Dom__EventTarget.Impl({ });

Webapi__Dom__NonDocumentTypeChildNode.Impl({ });

Webapi__Dom__ChildNode.Impl({ });

var nodeType = include.nodeType;

exports.Impl = Impl;
exports.nodeType = nodeType;
/* include Not a pure module */
