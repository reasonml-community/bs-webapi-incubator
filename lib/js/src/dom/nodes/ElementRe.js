'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var NodeRe = require("./NodeRe.js");
var DomTypesRe = require("../DomTypesRe.js");
var SlotableRe = require("./SlotableRe.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var ChildNodeRe = require("./ChildNodeRe.js");
var ParentNodeRe = require("./ParentNodeRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var NonDocumentTypeChildNodeRe = require("./NonDocumentTypeChildNodeRe.js");

function ofNode(node) {
  var match = NodeRe.nodeType(node) === /* Element */0;
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
    self.insertAdjacentElement(DomTypesRe.encodeInsertPosition(position), element);
    return /* () */0;
  };
  var insertAdjacentHTML = function (position, text, self) {
    self.insertAdjacentHTML(DomTypesRe.encodeInsertPosition(position), text);
    return /* () */0;
  };
  var insertAdjacentText = function (position, text, self) {
    self.insertAdjacentText(DomTypesRe.encodeInsertPosition(position), text);
    return /* () */0;
  };
  return /* module */[
          /* asHtmlElement */asHtmlElement$1,
          /* ofNode */ofNode,
          /* insertAdjacentElement */insertAdjacentElement,
          /* insertAdjacentHTML */insertAdjacentHTML,
          /* insertAdjacentText */insertAdjacentText
        ];
}

var include = NodeRe.Impl(/* module */[]);

EventTargetRe.Impl(/* module */[]);

ParentNodeRe.Impl(/* module */[]);

NonDocumentTypeChildNodeRe.Impl(/* module */[]);

ChildNodeRe.Impl(/* module */[]);

SlotableRe.Impl(/* module */[]);

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
  self.insertAdjacentElement(DomTypesRe.encodeInsertPosition(position), element);
  return /* () */0;
}

function insertAdjacentHTML(position, text, self) {
  self.insertAdjacentHTML(DomTypesRe.encodeInsertPosition(position), text);
  return /* () */0;
}

function insertAdjacentText(position, text, self) {
  self.insertAdjacentText(DomTypesRe.encodeInsertPosition(position), text);
  return /* () */0;
}

var nodeType = include[0];

exports.Impl = Impl;
exports.nodeType = nodeType;
exports.asHtmlElement = asHtmlElement$1;
exports.ofNode = ofNode;
exports.insertAdjacentElement = insertAdjacentElement;
exports.insertAdjacentHTML = insertAdjacentHTML;
exports.insertAdjacentText = insertAdjacentText;
/* include Not a pure module */
