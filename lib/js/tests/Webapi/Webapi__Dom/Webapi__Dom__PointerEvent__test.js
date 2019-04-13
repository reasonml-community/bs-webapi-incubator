'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__PointerEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__PointerEvent.js");

var $$event = new PointerEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__PointerEvent.eventPhase, $$event);

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

$$event.button;

$$event.buttons;

$$event.clientX;

$$event.clientY;

$$event.ctrlKey;

$$event.metaKey;

$$event.movementX;

$$event.movementY;

$$event.offsetX;

$$event.offsetY;

$$event.pageX;

$$event.pageY;

$$event.region;

$$event.relatedTarget;

$$event.screenX;

$$event.screenY;

$$event.shiftKey;

$$event.x;

$$event.y;

Curry._2(Webapi__Dom__PointerEvent.getModifierState, /* Alt */0, $$event);

$$event.pointerId;

$$event.width;

$$event.height;

$$event.pressure;

$$event.tiltX;

$$event.tiltY;

Webapi__Dom__PointerEvent.pointerType($$event);

$$event.isPrimary;

exports.$$event = $$event;
/* event Not a pure module */
