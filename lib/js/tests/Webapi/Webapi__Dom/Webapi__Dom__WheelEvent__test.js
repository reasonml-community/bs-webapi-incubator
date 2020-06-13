'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__WheelEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__WheelEvent.js");

var $$event = new WheelEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__WheelEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.clientX;

$$event.deltaX;

$$event.deltaY;

$$event.deltaZ;

Webapi__Dom__WheelEvent.deltaMode($$event);

exports.$$event = $$event;
/* event Not a pure module */
