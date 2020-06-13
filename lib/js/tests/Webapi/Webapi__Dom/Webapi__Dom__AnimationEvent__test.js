'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__AnimationEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__AnimationEvent.js");

var $$event = new AnimationEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__AnimationEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.animationName;

$$event.elapsedTime;

$$event.pseudoElement;

exports.$$event = $$event;
/* event Not a pure module */
