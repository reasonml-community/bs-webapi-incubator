'use strict';

var EventRe = require("./EventRe.js");
var UiEventRe = require("./UiEventRe.js");
var DomTypesRe = require("../DomTypesRe.js");

function Impl(T) {
  var getModifierState = function (key, self) {
    return self.getModifierState(DomTypesRe.encodeModifierKey(key));
  };
  return /* module */[/* getModifierState */getModifierState];
}

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

function getModifierState(key, self) {
  return self.getModifierState(DomTypesRe.encodeModifierKey(key));
}

var eventPhase = include[0];

exports.Impl = Impl;
exports.eventPhase = eventPhase;
exports.getModifierState = getModifierState;
/* include Not a pure module */
