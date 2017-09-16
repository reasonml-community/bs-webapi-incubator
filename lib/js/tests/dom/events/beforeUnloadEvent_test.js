'use strict';

var Curry               = require("bs-platform/lib/js/curry.js");
var BeforeUnloadEventRe = require("../../../src/dom/events/BeforeUnloadEventRe.js");

var $$event = new BeforeUnloadEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(BeforeUnloadEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.returnValue;

exports.$$event = $$event;
/* event Not a pure module */
