'use strict';

var Caml_option = require("bs-platform/lib/js/caml_option.js");

function get(key, map) {
  return Caml_option.nullable_to_opt(map[key]);
}

function set(key, value, map) {
  map[key] = value;
  return /* () */0;
}

function unsafeDeleteKey (key,map){delete map[key];};

exports.get = get;
exports.set = set;
exports.unsafeDeleteKey = unsafeDeleteKey;
/* No side effect */
