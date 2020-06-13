'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__TransitionEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__TransitionEvent.js");

var $$event = new TransitionEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__TransitionEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.propertyName;

$$event.elapsedTime;

$$event.pseudoElement;

exports.$$event = $$event;
/* event Not a pure module */
