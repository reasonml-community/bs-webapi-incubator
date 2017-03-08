'use strict';

var Curry           = require("bs-platform/lib/js/curry");
var KeyboardEventRe = require("../../src/dom/keyboardEventRe");

var $$event = new KeyboardEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(KeyboardEventRe.eventPhase, $$event);

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

KeyboardEventRe.getModifierState(/* Alt */0, $$event);

exports.$$event = $$event;
/* event Not a pure module */
