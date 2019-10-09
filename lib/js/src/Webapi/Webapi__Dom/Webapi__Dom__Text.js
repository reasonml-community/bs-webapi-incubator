'use strict';

var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__Slotable = require("./Webapi__Dom__Slotable.js");
var Webapi__Dom__ChildNode = require("./Webapi__Dom__ChildNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__CharacterData = require("./Webapi__Dom__CharacterData.js");
var Webapi__Dom__NonDocumentTypeChildNode = require("./Webapi__Dom__NonDocumentTypeChildNode.js");

function ofNode(node) {
  var match = Webapi__Dom__Node.nodeType(node) === /* Text */2;
  if (match) {
    return Caml_option.some(node);
  }
  
}

function Impl(T) {
  return /* module */[/* ofNode */ofNode];
}

var include = Webapi__Dom__Node.Impl(/* module */[]);

Webapi__Dom__EventTarget.Impl(/* module */[]);

Webapi__Dom__CharacterData.Impl(/* module */[]);

Webapi__Dom__NonDocumentTypeChildNode.Impl(/* module */[]);

Webapi__Dom__ChildNode.Impl(/* module */[]);

Webapi__Dom__Slotable.Impl(/* module */[]);

var nodeType = include[0];

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.ofNode = ofNode;
/* include Not a pure module */
