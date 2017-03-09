'use strict';

var Curry        = require("bs-platform/lib/js/curry");
var WheelEventRe = require("../../../src/dom/event/wheelEventRe");

var $$event = new WheelEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(WheelEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.deltaX;

$$event.deltaY;

$$event.deltaZ;

WheelEventRe.deltaMode($$event);

exports.$$event = $$event;
/* event Not a pure module */
