'use strict';

var DomTypesRe = require("../domTypesRe.js");

function Impl() {
  var eventPhase = function (self) {
    return DomTypesRe.decodeEventPhase(self.eventPhase);
  };
  return /* module */[/* eventPhase */eventPhase];
}

function eventPhase(self) {
  return DomTypesRe.decodeEventPhase(self.eventPhase);
}

exports.Impl       = Impl;
exports.eventPhase = eventPhase;
/* No side effect */
