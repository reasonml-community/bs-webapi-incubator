'use strict';

var EventRe$Webapi = require("./EventRe.js");

function Impl() {
  return /* module */[];
}

var include = EventRe$Webapi.Impl(/* module */[]);

var eventPhase = include[0];

exports.Impl       = Impl;
exports.eventPhase = eventPhase;
/* include Not a pure module */
