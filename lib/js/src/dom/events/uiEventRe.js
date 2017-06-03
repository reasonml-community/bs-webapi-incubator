'use strict';

var EventRe = require("./eventRe.js");

function Impl() {
  return /* module */[];
}

var include = EventRe.Impl(/* module */[]);

var eventPhase = include[0];

exports.Impl       = Impl;
exports.eventPhase = eventPhase;
/* include Not a pure module */
