'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__InputEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__InputEvent.js");

var $$event = new InputEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__InputEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.data;

$$event.isComposing;

exports.$$event = $$event;
/* event Not a pure module */
