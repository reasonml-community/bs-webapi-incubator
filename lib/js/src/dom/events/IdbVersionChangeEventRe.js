'use strict';

var EventRe$Webapi = require("./EventRe.js");

var include = EventRe$Webapi.Impl(/* module */[]);

var eventPhase = include[0];

exports.eventPhase = eventPhase;
/* include Not a pure module */
