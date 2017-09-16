'use strict';

var Curry          = require("bs-platform/lib/js/curry.js");
var SvgZoomEventRe = require("../../../src/dom/events/SvgZoomEventRe.js");

var $$event = new SVGZoomEvent("my-event");

+$$event.bubbles;

+$$event.cancelable;

+$$event.composed;

$$event.currentTarget;

+$$event.defaultPrevented;

Curry._1(SvgZoomEventRe.eventPhase, $$event);

$$event.target;

$$event.timeStamp;

$$event.type;

+$$event.isTrusted;

$$event.preventDefault();

$$event.stopImmediatePropagation();

$$event.stopPropagation();

$$event.detail;

$$event.view;

$$event.zoomRectScreen;

$$event.previousScale;

$$event.previousTranslate;

$$event.newScale;

$$event.newTranslate;

exports.$$event = $$event;
/* event Not a pure module */
