'use strict';

var Curry               = require("bs-platform/lib/js/curry.js");
var FocusEventRe$Webapi = require("../../../src/dom/events/FocusEventRe.js");

var $$event = new FocusEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(FocusEventRe$Webapi.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.relatedTarget;

exports.$$event = $$event;
/* event Not a pure module */
