'use strict';

var Webapi__Dom__Types = require("./Webapi__Dom__Types.js");

function Impl(T) {
  var eventPhase = function (self) {
    return Webapi__Dom__Types.decodeEventPhase(self.eventPhase);
  };
  return {
          eventPhase: eventPhase
        };
}

function eventPhase(self) {
  return Webapi__Dom__Types.decodeEventPhase(self.eventPhase);
}

exports.Impl = Impl;
exports.eventPhase = eventPhase;
/* No side effect */
