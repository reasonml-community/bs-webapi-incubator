'use strict';

var NodeRe = require("../nodes/NodeRe.js");
var ElementRe = require("../nodes/ElementRe.js");
var EventTargetRe = require("../events/EventTargetRe.js");
var HtmlElementRe = require("./HtmlElementRe.js");

function Impl(T) {
  var toString = function (param) {
    switch (param) {
      case 0 : 
          return "forward";
      case 1 : 
          return "backward";
      case 2 : 
          return "none";
      
    }
  };
  var SelectionDirection = /* module */[/* toString */toString];
  var setSelectionRangeWithDirection = function (selectionStart, selectionEnd, selectionDirection, element) {
    element.setSelectionRange(selectionStart, selectionEnd, toString(selectionDirection));
    return /* () */0;
  };
  var toString$1 = function (param) {
    switch (param) {
      case 0 : 
          return "select";
      case 1 : 
          return "start";
      case 2 : 
          return "end";
      case 3 : 
          return "preserve";
      
    }
  };
  var SelectionMode = /* module */[/* toString */toString$1];
  var setRangeTextWithinIntervalWithSelectionMode = function (text, selectionStart, selectionEnd, selectionMode, element) {
    element.setRangeText(text, selectionStart, selectionEnd, toString$1(selectionMode));
    return /* () */0;
  };
  return /* module */[
          /* SelectionDirection */SelectionDirection,
          /* setSelectionRangeWithDirection */setSelectionRangeWithDirection,
          /* SelectionMode */SelectionMode,
          /* setRangeTextWithinIntervalWithSelectionMode */setRangeTextWithinIntervalWithSelectionMode
        ];
}

EventTargetRe.Impl(/* module */[]);

var include = NodeRe.Impl(/* module */[]);

var include$1 = ElementRe.Impl(/* module */[]);

var include$2 = HtmlElementRe.Impl(/* module */[]);

function toString(param) {
  switch (param) {
    case 0 : 
        return "forward";
    case 1 : 
        return "backward";
    case 2 : 
        return "none";
    
  }
}

var SelectionDirection = /* module */[/* toString */toString];

function setSelectionRangeWithDirection(selectionStart, selectionEnd, selectionDirection, element) {
  element.setSelectionRange(selectionStart, selectionEnd, toString(selectionDirection));
  return /* () */0;
}

function toString$1(param) {
  switch (param) {
    case 0 : 
        return "select";
    case 1 : 
        return "start";
    case 2 : 
        return "end";
    case 3 : 
        return "preserve";
    
  }
}

var SelectionMode = /* module */[/* toString */toString$1];

function setRangeTextWithinIntervalWithSelectionMode(text, selectionStart, selectionEnd, selectionMode, element) {
  element.setRangeText(text, selectionStart, selectionEnd, toString$1(selectionMode));
  return /* () */0;
}

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
