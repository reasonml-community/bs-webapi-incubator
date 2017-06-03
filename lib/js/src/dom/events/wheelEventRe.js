'use strict';

var EventRe    = require("./eventRe.js");
var UiEventRe  = require("./uiEventRe.js");
var DomTypesRe = require("../domTypesRe.js");

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

function deltaMode(self) {
  return DomTypesRe.decodeDeltaMode(self.deltaMode);
}

var eventPhase = include[0];

exports.eventPhase = eventPhase;
exports.deltaMode  = deltaMode;
/* include Not a pure module */
