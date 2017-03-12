'use strict';

var Curry        = require("bs-platform/lib/js/curry");
var ErrorEventRe = require("../../../src/dom/events/errorEventRe");

var $$event = new ErrorEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(ErrorEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.message;

$$event.filename;

$$event.lineno;

$$event.colno;

$$event.error;

exports.$$event = $$event;
/* event Not a pure module */
