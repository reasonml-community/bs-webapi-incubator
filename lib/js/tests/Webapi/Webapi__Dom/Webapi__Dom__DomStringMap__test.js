'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Webapi = require("../../../src/Webapi.js");
var Webapi__Dom = require("../../../src/Webapi/Webapi__Dom.js");
var Webapi__Dom__DomStringMap = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__DomStringMap.js");

var dataset = document.createElement("div").dataset;

Webapi__Dom__DomStringMap.set("fooKey", "barValue", dataset);

Webapi__Dom__DomStringMap.get("fooKey", dataset);

Curry._2(Webapi__Dom__DomStringMap.unsafeDeleteKey, "fooKey", dataset);

exports.dataset = dataset;
/* dataset Not a pure module */
