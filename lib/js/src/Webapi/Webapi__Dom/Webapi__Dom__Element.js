'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__Slotable = require("./Webapi__Dom__Slotable.js");
var Webapi__Dom__ChildNode = require("./Webapi__Dom__ChildNode.js");
var Webapi__Dom__ParentNode = require("./Webapi__Dom__ParentNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__GlobalEventHandlers = require("./Webapi__Dom__GlobalEventHandlers.js");
var Webapi__Dom__NonDocumentTypeChildNode = require("./Webapi__Dom__NonDocumentTypeChildNode.js");

function ofNode(node) {
  var match = Webapi__Dom__Node.nodeType(node) === /* Element */0;
  if (match) {
    return Caml_option.some(node);
  }
  
}

function Impl(T) {
  var asHtmlElement = (
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  );
  var asHtmlElement$1 = function (self) {
    return Caml_option.null_to_opt(Curry._1(asHtmlElement, self));
  };
  var insertAdjacentElement = function (position, element, self) {
    self.insertAdjacentElement(Webapi__Dom__Types.encodeInsertPosition(position), element);
    return /* () */0;
  };
  var insertAdjacentHTML = function (position, text, self) {
    self.insertAdjacentHTML(Webapi__Dom__Types.encodeInsertPosition(position), text);
    return /* () */0;
  };
  var insertAdjacentText = function (position, text, self) {
    self.insertAdjacentText(Webapi__Dom__Types.encodeInsertPosition(position), text);
    return /* () */0;
  };
  return {
          asHtmlElement: asHtmlElement$1,
          ofNode: ofNode,
          insertAdjacentElement: insertAdjacentElement,
          insertAdjacentHTML: insertAdjacentHTML,
          insertAdjacentText: insertAdjacentText
        };
}

var include = Webapi__Dom__Node.Impl({ });

Webapi__Dom__EventTarget.Impl({ });

Webapi__Dom__GlobalEventHandlers.Impl({ });

Webapi__Dom__ParentNode.Impl({ });

Webapi__Dom__NonDocumentTypeChildNode.Impl({ });

Webapi__Dom__ChildNode.Impl({ });

Webapi__Dom__Slotable.Impl({ });

var asHtmlElement = (
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  );

function asHtmlElement$1(self) {
  return Caml_option.null_to_opt(Curry._1(asHtmlElement, self));
}

function insertAdjacentElement(position, element, self) {
  self.insertAdjacentElement(Webapi__Dom__Types.encodeInsertPosition(position), element);
  return /* () */0;
}

function insertAdjacentHTML(position, text, self) {
  self.insertAdjacentHTML(Webapi__Dom__Types.encodeInsertPosition(position), text);
  return /* () */0;
}

function insertAdjacentText(position, text, self) {
  self.insertAdjacentText(Webapi__Dom__Types.encodeInsertPosition(position), text);
  return /* () */0;
}

var nodeType = include.nodeType;

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlElement = asHtmlElement$1;
exports.ofNode = ofNode;
exports.insertAdjacentElement = insertAdjacentElement;
exports.insertAdjacentHTML = insertAdjacentHTML;
exports.insertAdjacentText = insertAdjacentText;
/* include Not a pure module */
