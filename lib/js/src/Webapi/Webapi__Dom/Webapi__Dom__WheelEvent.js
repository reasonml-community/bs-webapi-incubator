'use strict';

var Webapi__Dom__Event = require("./Webapi__Dom__Event.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom__UiEvent.js");
var Webapi__Dom__MouseEvent = require("./Webapi__Dom__MouseEvent.js");

var include = Webapi__Dom__Event.Impl({ });

Webapi__Dom__UiEvent.Impl({ });

var include$1 = Webapi__Dom__MouseEvent.Impl({ });

function deltaMode(self) {
  return Webapi__Dom__Types.decodeDeltaMode(self.deltaMode);
}

var eventPhase = include.eventPhase;

var getModifierState = include$1.getModifierState;

exports.eventPhase = eventPhase;
exports.getModifierState = getModifierState;
exports.deltaMode = deltaMode;
/* include Not a pure module */
