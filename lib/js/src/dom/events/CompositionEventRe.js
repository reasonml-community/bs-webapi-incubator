'use strict';

var EventRe$Webapi   = require("./EventRe.js");
var UiEventRe$Webapi = require("./UiEventRe.js");

var include = EventRe$Webapi.Impl(/* module */[]);

UiEventRe$Webapi.Impl(/* module */[]);

var eventPhase = include[0];

exports.eventPhase = eventPhase;
/* include Not a pure module */
