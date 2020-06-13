'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi__Dom__StorageEvent = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__StorageEvent.js");

var $$event = new StorageEvent("my-event");

$$event.bubbles;

$$event.cancelable;

$$event.composed;

$$event.currentTarget;

$$event.defaultPrevented;

Curry._1(Webapi__Dom__StorageEvent.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.key;

$$event.newValue;

$$event.oldValue;

$$event.storageArea;

$$event.url;

exports.$$event = $$event;
/* event Not a pure module */
