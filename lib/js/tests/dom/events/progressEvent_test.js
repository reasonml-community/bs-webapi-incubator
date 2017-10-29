'use strict';

var Curry                  = require("bs-platform/lib/js/curry.js");
var ProgressEventRe$Webapi = require("../../../src/dom/events/ProgressEventRe.js");

var $$event = new ProgressEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(ProgressEventRe$Webapi.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

+$$event.lengthComputable;

$$event.loaded;

$$event.total;

exports.$$event = $$event;
/* event Not a pure module */
