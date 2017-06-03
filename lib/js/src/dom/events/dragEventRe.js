'use strict';

var EventRe      = require("./eventRe.js");
var UiEventRe    = require("./uiEventRe.js");
var MouseEventRe = require("./mouseEventRe.js");

var include = EventRe.Impl(/* module */[]);

UiEventRe.Impl(/* module */[]);

var include$1 = MouseEventRe.Impl(/* module */[]);

var eventPhase = include[0];

var getModifierState = include$1[0];

exports.eventPhase       = eventPhase;
exports.getModifierState = getModifierState;
/* include Not a pure module */
