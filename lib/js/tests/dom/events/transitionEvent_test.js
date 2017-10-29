'use strict';

var Curry                    = require("bs-platform/lib/js/curry.js");
var TransitionEventRe$Webapi = require("../../../src/dom/events/TransitionEventRe.js");

var $$event = new TransitionEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(TransitionEventRe$Webapi.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.propertyName;

$$event.elapsedTime;

$$event.pseudoElement;

exports.$$event = $$event;
/* event Not a pure module */
