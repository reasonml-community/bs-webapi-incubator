'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var CompositionEventRe = require("../../../src/dom/events/CompositionEventRe.js");

var $$event = new CompositionEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(CompositionEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.data;

exports.$$event = $$event;
/* event Not a pure module */
