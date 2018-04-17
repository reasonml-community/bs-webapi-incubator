'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var TouchEventRe = require("../../../src/dom/events/TouchEventRe.js");

var $$event = new TouchEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(TouchEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.altKey;

$$event.changedTouches;

$$event.ctrlKey;

$$event.metaKey;

$$event.shiftKey;

$$event.targetTouches;

$$event.touches;

exports.$$event = $$event;
/* event Not a pure module */
