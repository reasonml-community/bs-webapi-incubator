'use strict';

var Webapi__Dom__Event = require("./Webapi__Dom__Event.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom__UiEvent.js");
var Webapi__Dom__MouseEvent = require("./Webapi__Dom__MouseEvent.js");

var include = Webapi__Dom__Event.Impl(/* module */[]);

Webapi__Dom__UiEvent.Impl(/* module */[]);

var include$1 = Webapi__Dom__MouseEvent.Impl(/* module */[]);

function pointerType(self) {
  return Webapi__Dom__Types.decodePointerType(self.pointerType);
}

var eventPhase = include[0];

var getModifierState = include$1[0];

exports.eventPhase = eventPhase;
exports.getModifierState = getModifierState;
exports.pointerType = pointerType;
/* include Not a pure module */
