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

var include = Webapi__Dom__Node.Impl({ });

Webapi__Dom__EventTarget.Impl({ });

var include$1 = Webapi__Dom__Element.Impl({ });

var include$2 = Webapi__Dom__HtmlElement.Impl({ });

var nodeType = include.nodeType;

var asHtmlElement = include$1.asHtmlElement;

var ofNode = include$1.ofNode;

var insertAdjacentElement = include$1.insertAdjacentElement;

var insertAdjacentHTML = include$1.insertAdjacentHTML;

var insertAdjacentText = include$1.insertAdjacentText;

var ofElement = include$2.ofElement;

var contentEditable = include$2.contentEditable;

var setContentEditable = include$2.setContentEditable;

var dir = include$2.dir;

var setDir = include$2.setDir;

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
