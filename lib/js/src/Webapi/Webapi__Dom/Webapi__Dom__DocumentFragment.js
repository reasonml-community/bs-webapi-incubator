'use strict';

var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__ParentNode = require("./Webapi__Dom__ParentNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__NonElementParentNode = require("./Webapi__Dom__NonElementParentNode.js");

var include = Webapi__Dom__Node.Impl({ });

Webapi__Dom__EventTarget.Impl({ });

Webapi__Dom__NonElementParentNode.Impl({ });

Webapi__Dom__ParentNode.Impl({ });

var nodeType = include.nodeType;

exports.nodeType = nodeType;
/* include Not a pure module */
