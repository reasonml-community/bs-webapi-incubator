'use strict';

var Js_boolean = require("bs-platform/lib/js/js_boolean.js");

function setScrollRestoration(self, value) {
  self.scrollRestoration = Js_boolean.to_js_boolean(value);
  return /* () */0;
}

exports.setScrollRestoration = setScrollRestoration;
/* No side effect */
