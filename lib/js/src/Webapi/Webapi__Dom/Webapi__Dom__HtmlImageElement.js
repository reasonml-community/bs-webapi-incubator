'use strict';

var Js_null = require("bs-platform/lib/js/js_null.js");
var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__Element = require("./Webapi__Dom__Element.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__HtmlElement = require("./Webapi__Dom__HtmlElement.js");

function setCrossOrigin(self, value) {
  self.crossOrigin = Js_null.fromOption(value);
  return /* () */0;
}

var include = Webapi__Dom__Node.Impl(/* module */[]);

Webapi__Dom__EventTarget.Impl(/* module */[]);

var include$1 = Webapi__Dom__Element.Impl(/* module */[]);

var include$2 = Webapi__Dom__HtmlElement.Impl(/* module */[]);

var nodeType = include[0];

var asHtmlElement = include$1[0];

var ofNode = include$1[1];

var insertAdjacentElement = include$1[2];

var insertAdjacentHTML = include$1[3];

var insertAdjacentText = include$1[4];

var ofElement = include$2[0];

var contentEditable = include$2[1];

var setContentEditable = include$2[2];

var dir = include$2[3];

var setDir = include$2[4];

exports.setCrossOrigin = setCrossOrigin;
exports.nodeType = nodeType;
exports.asHtmlElement = asHtmlElement;
exports.ofNode = ofNode;
exports.insertAdjacentElement = insertAdjacentElement;
exports.insertAdjacentHTML = insertAdjacentHTML;
exports.insertAdjacentText = insertAdjacentText;
exports.ofElement = ofElement;
exports.contentEditable = contentEditable;
exports.setContentEditable = setContentEditable;
exports.dir = dir;
exports.setDir = setDir;
/* include Not a pure module */
