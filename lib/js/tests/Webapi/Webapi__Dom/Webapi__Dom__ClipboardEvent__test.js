'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__ClipboardEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__ClipboardEvent.js");

var $$event = new ClipboardEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__ClipboardEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.clipboardData;

exports.$$event = $$event;
/* event Not a pure module */
