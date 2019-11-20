'use strict';

var Webapi__Dom__Node = require("./Webapi__Dom__Node.js");
var Webapi__Dom__Slotable = require("./Webapi__Dom__Slotable.js");
var Webapi__Dom__ChildNode = require("./Webapi__Dom__ChildNode.js");
var Webapi__Dom__EventTarget = require("./Webapi__Dom__EventTarget.js");
var Webapi__Dom__CharacterData = require("./Webapi__Dom__CharacterData.js");
var Webapi__Dom__NonDocumentTypeChildNode = require("./Webapi__Dom__NonDocumentTypeChildNode.js");

var include = Webapi__Dom__Node.Impl({ });

Webapi__Dom__EventTarget.Impl({ });

Webapi__Dom__CharacterData.Impl({ });

Webapi__Dom__NonDocumentTypeChildNode.Impl({ });

Webapi__Dom__ChildNode.Impl({ });

Webapi__Dom__Slotable.Impl({ });

var nodeType = include.nodeType;

exports.nodeType = nodeType;
/* include Not a pure module */
