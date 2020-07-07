'use strict';

var Caml_array = require("bs-platform/lib/js/caml_array.js");

var el = document.createElement("strong");

function handler(entries) {
  var entry = Caml_array.caml_array_get(entries, 0);
  entry.contentRect;
  entry.target;
  
}

var observer = new ResizeObserver(handler);

observer.observe(el);

observer.unobserve(el);

observer.disconnect();

exports.el = el;
exports.handler = handler;
exports.observer = observer;
/* el Not a pure module */
