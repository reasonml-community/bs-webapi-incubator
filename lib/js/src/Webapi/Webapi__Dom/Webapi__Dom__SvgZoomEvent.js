'use strict';

var Webapi__Dom__Event = require("./Webapi__Dom__Event.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom__UiEvent.js");

var include = Webapi__Dom__Event.Impl(/* module */[]);

Webapi__Dom__UiEvent.Impl(/* module */[]);

var eventPhase = include[0];

exports.eventPhase = eventPhase;
/* include Not a pure module */
