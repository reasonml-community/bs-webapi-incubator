'use strict';

var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");

var include = Webapi__Dom__Node.Impl(/* module */[]);

Webapi__Dom__EventTarget.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/* include Not a pure module */
