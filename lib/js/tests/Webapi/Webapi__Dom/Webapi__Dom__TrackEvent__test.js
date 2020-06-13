'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__TrackEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__TrackEvent.js");

var $$event = new TrackEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__TrackEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.track;

exports.$$event = $$event;
/* event Not a pure module */
