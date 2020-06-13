'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__ErrorEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__ErrorEvent.js");

var $$event = new ErrorEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__ErrorEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.message;

$$event.filename;

$$event.lineno;

$$event.colno;

$$event.error;

exports.$$event = $$event;
/* event Not a pure module */
