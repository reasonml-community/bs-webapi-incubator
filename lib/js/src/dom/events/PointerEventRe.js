'use strict';

var EventRe$Webapi      = require("./EventRe.js");
var UiEventRe$Webapi    = require("./UiEventRe.js");
var DomTypesRe$Webapi   = require("../DomTypesRe.js");
var MouseEventRe$Webapi = require("./MouseEventRe.js");

var include = EventRe$Webapi.Impl(/* module */[]);

UiEventRe$Webapi.Impl(/* module */[]);

var include$1 = MouseEventRe$Webapi.Impl(/* module */[]);

function pointerType(self) {
  return DomTypesRe$Webapi.decodePointerType(self.pointerType);
}

var eventPhase = include[0];

var getModifierState = include$1[0];

exports.eventPhase       = eventPhase;
exports.getModifierState = getModifierState;
exports.pointerType      = pointerType;
/* include Not a pure module */
