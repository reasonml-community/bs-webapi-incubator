'use strict';

var Webapi__Dom__Event = require("./Webapi__Dom__Event.js");
var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom__UiEvent.js");

function Impl(T) {
  var getModifierState = function (key, self) {
    return self.getModifierState(Webapi__Dom__Types.encodeModifierKey(key));
  };
  return {
          getModifierState: getModifierState
        };
}

var include = Webapi__Dom__Event.Impl({ });

Webapi__Dom__UiEvent.Impl({ });

function getModifierState(key, self) {
  return self.getModifierState(Webapi__Dom__Types.encodeModifierKey(key));
}

var eventPhase = include.eventPhase;

exports.Impl = Impl;
exports.eventPhase = eventPhase;
exports.getModifierState = getModifierState;
/* include Not a pure module */
