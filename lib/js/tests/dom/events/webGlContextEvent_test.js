'use strict';

var Curry               = require("bs-platform/lib/js/curry.js");
var WebGlContextEventRe = require("../../../src/dom/events/webGlContextEventRe.js");

var $$event = new WebGLContextEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(WebGlContextEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.statusMessage;

exports.$$event = $$event;
/* event Not a pure module */
