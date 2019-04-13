'use strict';

var Webapi__Dom__Event = require("./Webapi__Dom__Event.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom__UiEvent.js");

var include = Webapi__Dom__Event.Impl(/* module */[]);

Webapi__Dom__UiEvent.Impl(/* module */[]);

function getModifierState(key, self) {
  return self.getModifierState(Webapi__Dom__Types.encodeModifierKey(key));
}

var eventPhase = include[0];

exports.eventPhase = eventPhase;
exports.getModifierState = getModifierState;
/* include Not a pure module */
