'use strict';

var EventRe    = require("./eventRe.js");
var UiEventRe  = require("./uiEventRe.js");
var DomTypesRe = require("../domTypesRe.js");

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

function getModifierState(key, self) {
  return +self.getModifierState(DomTypesRe.encodeModifierKey(key));
}

var eventPhase = include[0];

exports.eventPhase       = eventPhase;
exports.getModifierState = getModifierState;
/* include Not a pure module */
