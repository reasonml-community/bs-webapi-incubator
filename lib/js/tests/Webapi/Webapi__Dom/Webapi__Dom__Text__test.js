'use strict';

var Webapi = require("../../../src/Webapi.js");
var Webapi__Dom = require("../../../src/Webapi/Webapi__Dom.js");
var Webapi__Dom__Text = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Text.js");

var node = document.createTextNode("text");

var text = Webapi__Dom__Text.ofNode(node);

exports.node = node;
exports.text = text;
/* node Not a pure module */
