'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var RelatedEventRe = require("../../../src/dom/events/RelatedEventRe.js");

var $$event = new RelatedEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(RelatedEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.relatedTarget;

exports.$$event = $$event;
/* event Not a pure module */
