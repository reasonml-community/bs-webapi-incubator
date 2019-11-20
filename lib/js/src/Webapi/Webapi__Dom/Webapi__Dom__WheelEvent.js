'use strict';

var Webapi__Dom__Event = require("./Webapi__Dom__Event.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom__UiEvent.js");

var include = Webapi__Dom__Event.Impl({ });

Webapi__Dom__UiEvent.Impl({ });

function deltaMode(self) {
  return Webapi__Dom__Types.decodeDeltaMode(self.deltaMode);
}

var eventPhase = include.eventPhase;

exports.eventPhase = eventPhase;
exports.deltaMode = deltaMode;
/* include Not a pure module */
