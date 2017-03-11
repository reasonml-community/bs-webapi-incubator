'use strict';

var Curry           = require("bs-platform/lib/js/curry");
var ProgressEventRe = require("../../../src/dom/event/progressEventRe");

var $$event = new ProgressEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(ProgressEventRe.eventPhase, $$event);

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
