'use strict';

var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__ParentNode = require("./Webapi__Dom__ParentNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__NonElementParentNode = require("./Webapi__Dom__NonElementParentNode.js");

var include = Webapi__Dom__Node.Impl(/* module */[]);

Webapi__Dom__EventTarget.Impl(/* module */[]);

Webapi__Dom__NonElementParentNode.Impl(/* module */[]);

Webapi__Dom__ParentNode.Impl(/* module */[]);

var nodeType = include[0];

exports.nodeType = nodeType;
/* include Not a pure module */
