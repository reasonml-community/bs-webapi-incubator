'use strict';


var target = document.createElement("strong");

var $$event = new Event("my-event");

function handleClick() {
  console.log("asd");
  return /* () */0;
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

+target.dispatchEvent($$event);

exports.target = target;
exports.$$event = $$event;
exports.handleClick = handleClick;
/* target Not a pure module */
