'use strict';

var ReasonJs      = require("../../src/reasonJs");
var EventTargetRe = require("../../src/dom/eventTargetRe");

var target = document.createElement("strong");

var $$event = new Event("my-event");

function handleClick() {
  console.log("asd");
  return /* () */0;
}

target.addEventListener("click", handleClick);

target.addEventListener("click", handleClick, {
      passive: /* true */1
    });

EventTargetRe.addEventListenerUseCapture("click", handleClick, target);

target.removeEventListener("click", handleClick);

target.removeEventListener("click", handleClick, {
      passive: /* true */1
    });

EventTargetRe.removeEventListenerUseCapture("click", handleClick, target);

target.dispatchEvent($$event);

exports.target      = target;
exports.$$event     = $$event;
exports.handleClick = handleClick;
/* target Not a pure module */
