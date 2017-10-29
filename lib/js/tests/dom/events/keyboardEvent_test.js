'use strict';

var Curry                  = require("bs-platform/lib/js/curry.js");
var KeyboardEventRe$Webapi = require("../../../src/dom/events/KeyboardEventRe.js");

var $$event = new KeyboardEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(KeyboardEventRe$Webapi.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

+$$event.altKey;

$$event.code;

+$$event.ctrlKey;

+$$event.isComposing;

$$event.key;

$$event.locale;

$$event.location;

+$$event.metaKey;

+$$event.repeat;

+$$event.shiftKey;

KeyboardEventRe$Webapi.getModifierState(/* Alt */0, $$event);

exports.$$event = $$event;
/* event Not a pure module */
