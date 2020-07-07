'use strict';


var target = document.createElement("strong");

var $$event = new Event("my-event");

function handleClick(param) {
  console.log("asd");
  
}

target.addEventListener("click", handleClick);

target.addEventListener("click", handleClick, {
      passive: true,
      once: true,
      capture: false
    });

target.addEventListener("click", handleClick, true);

target.removeEventListener("click", handleClick);

target.removeEventListener("click", handleClick, {
      passive: true,
      capture: false
    });

target.removeEventListener("click", handleClick, true);

target.dispatchEvent($$event);

var customEvent = new CustomEvent("custom-event", {
      detail: {
        test: "test"
      }
    });

target.dispatchEvent(customEvent);

exports.target = target;
exports.$$event = $$event;
exports.handleClick = handleClick;
exports.customEvent = customEvent;
/* target Not a pure module */
