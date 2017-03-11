'use strict';

var Curry        = require("bs-platform/lib/js/curry");
var CloseEventRe = require("../../../src/dom/event/closeEventRe");

var $$event = new CloseEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(CloseEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

+$$event.wasClean;

$$event.code;

$$event.reason;

exports.$$event = $$event;
/* event Not a pure module */
