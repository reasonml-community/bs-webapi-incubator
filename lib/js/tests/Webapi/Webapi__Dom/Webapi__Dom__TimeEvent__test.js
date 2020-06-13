'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__TimeEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__TimeEvent.js");

var $$event = new TimeEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__TimeEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

exports.$$event = $$event;
/* event Not a pure module */
