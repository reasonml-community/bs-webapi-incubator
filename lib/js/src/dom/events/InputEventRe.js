'use strict';

var EventRe = require("./EventRe.js");
var UiEventRe = require("./UiEventRe.js");

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

var eventPhase = include[0];

exports.eventPhase = eventPhase;
/* include Not a pure module */
