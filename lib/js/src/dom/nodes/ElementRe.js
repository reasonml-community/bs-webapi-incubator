'use strict';

var Curry                             = require("bs-platform/lib/js/curry.js");
var Js_primitive                      = require("bs-platform/lib/js/js_primitive.js");
var NodeRe$Webapi                     = require("./NodeRe.js");
var DomTypesRe$Webapi                 = require("../DomTypesRe.js");
var SlotableRe$Webapi                 = require("./SlotableRe.js");
var ChildNodeRe$Webapi                = require("./ChildNodeRe.js");
var ParentNodeRe$Webapi               = require("./ParentNodeRe.js");
var EventTargetRe$Webapi              = require("../events/EventTargetRe.js");
var NonDocumentTypeChildNodeRe$Webapi = require("./NonDocumentTypeChildNodeRe.js");

function ofNode(node) {
  var match = +(NodeRe$Webapi.nodeType(node) === /* Element */0);
  if (match !== 0) {
    return /* Some */[node];
  } else {
    return /* None */0;
  }
}

function Impl() {
  var asHtmlElement = (
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  );
  var asHtmlElement$1 = function (self) {
    return Js_primitive.null_to_opt(Curry._1(asHtmlElement, self));
  };
  var insertAdjacentElement = function (position, element, self) {
    self.insertAdjacentElement(DomTypesRe$Webapi.encodeInsertPosition(position), element);
    return /* () */0;
  };
  var insertAdjacentHTML = function (position, text, self) {
    self.insertAdjacentHTML(DomTypesRe$Webapi.encodeInsertPosition(position), text);
    return /* () */0;
  };
  var insertAdjacentText = function (position, text, self) {
    self.insertAdjacentText(DomTypesRe$Webapi.encodeInsertPosition(position), text);
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

EventTargetRe$Webapi.Impl(/* module */[]);

var include = NodeRe$Webapi.Impl(/* module */[]);

ParentNodeRe$Webapi.Impl(/* module */[]);

NonDocumentTypeChildNodeRe$Webapi.Impl(/* module */[]);

ChildNodeRe$Webapi.Impl(/* module */[]);

SlotableRe$Webapi.Impl(/* module */[]);

var asHtmlElement = (
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  );

function asHtmlElement$1(self) {
  return Js_primitive.null_to_opt(Curry._1(asHtmlElement, self));
}

function insertAdjacentElement(position, element, self) {
  self.insertAdjacentElement(DomTypesRe$Webapi.encodeInsertPosition(position), element);
  return /* () */0;
}

function insertAdjacentHTML(position, text, self) {
  self.insertAdjacentHTML(DomTypesRe$Webapi.encodeInsertPosition(position), text);
  return /* () */0;
}

function insertAdjacentText(position, text, self) {
  self.insertAdjacentText(DomTypesRe$Webapi.encodeInsertPosition(position), text);
  return /* () */0;
}

var nodeType = include[0];

exports.Impl                  = Impl;
exports.nodeType              = nodeType;
exports.asHtmlElement         = asHtmlElement$1;
exports.ofNode                = ofNode;
exports.insertAdjacentElement = insertAdjacentElement;
exports.insertAdjacentHTML    = insertAdjacentHTML;
exports.insertAdjacentText    = insertAdjacentText;
/*  Not a pure module */
