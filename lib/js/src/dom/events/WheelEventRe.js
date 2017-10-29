'use strict';

var EventRe$Webapi    = require("./EventRe.js");
var UiEventRe$Webapi  = require("./UiEventRe.js");
var DomTypesRe$Webapi = require("../DomTypesRe.js");

var include = EventRe$Webapi.Impl(/* module */[]);

UiEventRe$Webapi.Impl(/* module */[]);

function deltaMode(self) {
  return DomTypesRe$Webapi.decodeDeltaMode(self.deltaMode);
}

var eventPhase = include[0];

exports.eventPhase = eventPhase;
exports.deltaMode  = deltaMode;
/* include Not a pure module */
