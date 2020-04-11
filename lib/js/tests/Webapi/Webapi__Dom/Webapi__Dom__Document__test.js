'use strict';

var Webapi = require("../../../src/Webapi.js");
var Webapi__Dom = require("../../../src/Webapi/Webapi__Dom.js");
var Webapi__Dom__Types = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Types.js");
var Webapi__Dom__Document = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Document.js");
var Webapi__Dom__NodeFilter = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__NodeFilter.js");

var el = document.createElement("strong");

document.characterSet;

Webapi__Dom__Document.compatMode(document);

document.doctype;

document.documentElement;

document.documentURI;

document.hidden;

document.implementation;

document.lastStyleSheetSet;

document.pointerLockElement;

document.preferredStyleSheetSet;

document.scrollingElement;

document.selectedStyleSheetSet;

document.selectedStyleSheetSet = "muh-stylesheet";

document.styleSheets;

document.styleSheetSets;

Webapi__Dom__Document.visibilityState(document);

document.adoptNode(el);

document.createAttribute("data-foo");

document.createAttributeNS("http://...", "foo");

document.createComment("witty comment");

document.createDocumentFragment();

document.createElement("div");

document.createElement("div", ({}));

document.createElementNS("http://...", "foo");

document.createElementNS("http://...", "div", ({}));

document.createEvent("MyCustomEvent");

document.createNodeIterator(el);

document.createNodeIterator(el, Webapi__Dom__Types.WhatToShow._All);

document.createNodeIterator(el, Webapi__Dom__Types.WhatToShow.many(/* :: */[
          Webapi__Dom__Types.WhatToShow._Element,
          /* :: */[
            Webapi__Dom__Types.WhatToShow._Attribute,
            /* [] */0
          ]
        ]), Webapi__Dom__NodeFilter.make((function (param) {
            return 0;
          })));

document.createRange();

document.createTextNode("Very reasonable!");

document.createTreeWalker(el);

document.createTreeWalker(el, Webapi__Dom__Types.WhatToShow._All);

document.createTreeWalker(el, Webapi__Dom__Types.WhatToShow.many(/* :: */[
          Webapi__Dom__Types.WhatToShow._Element,
          /* :: */[
            Webapi__Dom__Types.WhatToShow._Attribute,
            /* [] */0
          ]
        ]), Webapi__Dom__NodeFilter.make((function (param) {
            return 0;
          })));

document.elementFromPoint(0, 0);

document.elementsFromPoint(0, 0);

document.enableStyleSheetsForSet("my-stylesheet-set");

document.exitPointerLock();

document.getAnimations();

document.getElementsByClassName("lstlisting");

document.getElementsByTagName("code");

document.getElementsByTagNameNS("http://...", "foo");

document.importNode(el);

document.importNode(el, true);

document.getElementById("root");

document.querySelector(".lstlisting");

document.querySelectorAll(".lstlisting");

exports.el = el;
/* el Not a pure module */
