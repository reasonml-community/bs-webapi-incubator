'use strict';

var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__Element = require("./Webapi__Dom__Element.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__HtmlElement = require("./Webapi__Dom__HtmlElement.js");

function Impl(T) {
  var toString = function (param) {
    switch (param) {
      case /* Forward */0 :
          return "forward";
      case /* Backward */1 :
          return "backward";
      case /* None */2 :
          return "none";
      
    }
  };
  var SelectionDirection = {
    toString: toString
  };
  var setSelectionRangeWithDirection = function (selectionStart, selectionEnd, selectionDirection, element) {
    element.setSelectionRange(selectionStart, selectionEnd, toString(selectionDirection));
    return /* () */0;
  };
  var toString$1 = function (param) {
    switch (param) {
      case /* Select */0 :
          return "select";
      case /* Start */1 :
          return "start";
      case /* End */2 :
          return "end";
      case /* Preserve */3 :
          return "preserve";
      
    }
  };
  var SelectionMode = {
    toString: toString$1
  };
  var setRangeTextWithinIntervalWithSelectionMode = function (text, selectionStart, selectionEnd, selectionMode, element) {
    element.setRangeText(text, selectionStart, selectionEnd, toString$1(selectionMode));
    return /* () */0;
  };
  return {
          SelectionDirection: SelectionDirection,
          setSelectionRangeWithDirection: setSelectionRangeWithDirection,
          SelectionMode: SelectionMode,
          setRangeTextWithinIntervalWithSelectionMode: setRangeTextWithinIntervalWithSelectionMode
        };
}

Webapi__Dom__EventTarget.Impl({ });

var include = Webapi__Dom__Node.Impl({ });

var include$1 = Webapi__Dom__Element.Impl({ });

var include$2 = Webapi__Dom__HtmlElement.Impl({ });

function toString(param) {
  switch (param) {
    case /* Forward */0 :
        return "forward";
    case /* Backward */1 :
        return "backward";
    case /* None */2 :
        return "none";
    
  }
}

var SelectionDirection = {
  toString: toString
};

function setSelectionRangeWithDirection(selectionStart, selectionEnd, selectionDirection, element) {
  element.setSelectionRange(selectionStart, selectionEnd, toString(selectionDirection));
  return /* () */0;
}

function toString$1(param) {
  switch (param) {
    case /* Select */0 :
        return "select";
    case /* Start */1 :
        return "start";
    case /* End */2 :
        return "end";
    case /* Preserve */3 :
        return "preserve";
    
  }
}

var SelectionMode = {
  toString: toString$1
};

function setRangeTextWithinIntervalWithSelectionMode(text, selectionStart, selectionEnd, selectionMode, element) {
  element.setRangeText(text, selectionStart, selectionEnd, toString$1(selectionMode));
  return /* () */0;
}

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

exports.Impl = Impl;
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
exports.SelectionDirection = SelectionDirection;
exports.setSelectionRangeWithDirection = setSelectionRangeWithDirection;
exports.SelectionMode = SelectionMode;
exports.setRangeTextWithinIntervalWithSelectionMode = setRangeTextWithinIntervalWithSelectionMode;
/*  Not a pure module */
