'use strict';

var EventRe = require("./EventRe.js");
var UiEventRe = require("./UiEventRe.js");
var DomTypesRe = require("../DomTypesRe.js");

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

function deltaMode(self) {
  return DomTypesRe.decodeDeltaMode(self.deltaMode);
}

var eventPhase = include[0];

exports.eventPhase = eventPhase;
exports.deltaMode = deltaMode;
/* include Not a pure module */
