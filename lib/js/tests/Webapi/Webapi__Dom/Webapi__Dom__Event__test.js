'use strict';

var Webapi__Dom__Event = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Event.js");

var $$event = new Event("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Webapi__Dom__Event.eventPhase($$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

exports.$$event = $$event;
/* event Not a pure module */
