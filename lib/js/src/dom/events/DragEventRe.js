'use strict';

var EventRe$Webapi      = require("./EventRe.js");
var UiEventRe$Webapi    = require("./UiEventRe.js");
var MouseEventRe$Webapi = require("./MouseEventRe.js");

var include = EventRe$Webapi.Impl(/* module */[]);

UiEventRe$Webapi.Impl(/* module */[]);

var include$1 = MouseEventRe$Webapi.Impl(/* module */[]);

var eventPhase = include[0];

var getModifierState = include$1[0];

exports.eventPhase       = eventPhase;
exports.getModifierState = getModifierState;
/* include Not a pure module */
