'use strict';

var Webapi__Dom__Event = require("./Webapi__Dom__Event.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom__UiEvent.js");

var include = Webapi__Dom__Event.Impl({ });

Webapi__Dom__UiEvent.Impl({ });

var eventPhase = include.eventPhase;

exports.eventPhase = eventPhase;
/* include Not a pure module */
