'use strict';

var EventRe      = require("./eventRe.js");
var UiEventRe    = require("./uiEventRe.js");
var DomTypesRe   = require("../domTypesRe.js");
var MouseEventRe = require("./mouseEventRe.js");

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

var include$1 = MouseEventRe.Impl(/* module */[]);

function pointerType(self) {
  return DomTypesRe.decodePointerType(self.pointerType);
}

var eventPhase = include[0];

var getModifierState = include$1[0];

exports.eventPhase       = eventPhase;
exports.getModifierState = getModifierState;
exports.pointerType      = pointerType;
/* include Not a pure module */
