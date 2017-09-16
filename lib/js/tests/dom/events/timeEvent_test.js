'use strict';

var Curry       = require("bs-platform/lib/js/curry.js");
var TimeEventRe = require("../../../src/dom/events/TimeEventRe.js");

var $$event = new TimeEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(TimeEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

exports.$$event = $$event;
/* event Not a pure module */
