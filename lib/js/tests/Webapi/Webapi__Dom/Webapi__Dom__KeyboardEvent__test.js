'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__KeyboardEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__KeyboardEvent.js");

var $$event = new KeyboardEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__KeyboardEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.altKey;

$$event.code;

$$event.ctrlKey;

$$event.isComposing;

$$event.key;

$$event.locale;

$$event.location;

$$event.metaKey;

$$event.repeat;

$$event.shiftKey;

Webapi__Dom__KeyboardEvent.getModifierState(/* Alt */0, $$event);

exports.$$event = $$event;
/* event Not a pure module */
