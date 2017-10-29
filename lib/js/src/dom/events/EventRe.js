'use strict';

var DomTypesRe$Webapi = require("../DomTypesRe.js");

function Impl() {
  var eventPhase = function (self) {
    return DomTypesRe$Webapi.decodeEventPhase(self.eventPhase);
  };
  return /* module */[/* eventPhase */eventPhase];
}

function eventPhase(self) {
  return DomTypesRe$Webapi.decodeEventPhase(self.eventPhase);
}

exports.Impl       = Impl;
exports.eventPhase = eventPhase;
/* No side effect */
