'use strict';

var Curry                   = require("bs-platform/lib/js/curry.js");
var ClipboardEventRe$Webapi = require("../../../src/dom/events/ClipboardEventRe.js");

var $$event = new ClipboardEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(ClipboardEventRe$Webapi.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.clipboardData;

exports.$$event = $$event;
/* event Not a pure module */
