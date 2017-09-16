'use strict';

var EventRe = require("./EventRe.js");

var include = EventRe.Impl(/* module */[]);

var eventPhase = include[0];

exports.eventPhase = eventPhase;
/* include Not a pure module */
