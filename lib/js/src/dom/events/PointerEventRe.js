'use strict';

var EventRe = require("./EventRe.js");
var UiEventRe = require("./UiEventRe.js");
var DomTypesRe = require("../DomTypesRe.js");
var MouseEventRe = require("./MouseEventRe.js");

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

var include$1 = MouseEventRe.Impl(/* module */[]);

function pointerType(self) {
  return DomTypesRe.decodePointerType(self.pointerType);
}

var eventPhase = include[0];

var getModifierState = include$1[0];

exports.eventPhase = eventPhase;
exports.getModifierState = getModifierState;
exports.pointerType = pointerType;
/* include Not a pure module */
