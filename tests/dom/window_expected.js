'use strict';

var WindowRe = require("../../src/dom/windowRe");

var el = document.createElement("strong");

var $$event = document.createEvent("my-event");

function handleClick() {
  console.log("asd");
  return /* () */0;
}

window.console;

window.crypto;

window.document;

WindowRe.frameElement(window);

window.frames;

WindowRe.fullScreen(window);

window.history;

window.innerWidth;

window.innerHeight;

WindowRe.isSecureContext(window);

window.length;

window.location;

window.location = "http://reason.ml";

window.locationbar;

window.menubar;

window.name;

window.name = "new name";

window.navigator;

WindowRe.opener(window);

window.outerWidth;

window.outerHeight;

window.pageXOffset;

window.pageYOffset;

window.parent;

window.performance;

window.personalbar;

window.screen;

window.screenX;

window.screenY;

window.scrollbars;

window.scrollX;

window.scrollY;

window.self;

window.speechSynthesis;

window.status;

window.status = "new status";

window.statusbar;

window.toolbar;

window.top;

window.window;

window.alert("hello!");

window.blur();

var idleId = window.requestIdleCallback(function () {
      return /* () */0;
    });

window.cancelIdleCallback(idleId);

window.close();

WindowRe.confirm("is ok?", window);

window.focus();

window.getComputedStyle(el);

window.getComputedStyle(el, "hover");

window.getSelection();

window.matchMedia("max-height: 400");

window.moveBy(10, -10);

window.moveTo(120, 300);

WindowRe.open_("http://...", "my window", "menubar=yes", window);

window.postMessage("my message", "*");

window.print();

window.prompt("type you password, please?");

window.prompt("type password or use this?", "password");

window.requestIdleCallback(function () {
      return /* () */0;
    }, {
      timeout: 1000
    });

window.resizeBy(10, -10);

window.resizeTo(120, 300);

window.scroll(0, 0);

window.scrollBy(10, -10);

window.scrollTo(120, 300);

window.stop();

window.onload = function () {
  console.log("load");
  return /* () */0;
};

exports.el          = el;
exports.$$event     = $$event;
exports.handleClick = handleClick;
exports.idleId      = idleId;
/* el Not a pure module */
