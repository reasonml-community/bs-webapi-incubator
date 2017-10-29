'use strict';

var Curry               = require("bs-platform/lib/js/curry.js");
var DomRe$Webapi        = require("../../../src/dom/DomRe.js");
var DocumentRe$Webapi   = require("../../../src/dom/nodes/DocumentRe.js");
var NodeFilterRe$Webapi = require("../../../src/dom/traversal/NodeFilterRe.js");

var el = document.createElement("strong");

document.characterSet;

DocumentRe$Webapi.compatMode(document);

document.docType;

document.documentElement;

document.documentURI;

+document.hidden;

document.implementation;

document.lastStyleSheetSet;

document.pointerLockElement;

document.preferredStyleSheetSet;

document.scrollingElement;

document.selectedStyleSheetSet;

document.selectedStyleSheetSet = "muh-stylesheet";

document.styleSheets;

document.styleSheetSets;

DocumentRe$Webapi.visibilityState(document);

document.adoptNode(el);

document.createAttribute("data-foo");

document.createAttributeNS("http://...", "foo");

document.createComment("witty comment");

document.createDocumentFragment();

document.createElement("div");

document.createElement("div", ({}));

document.createElementNS("http://...", "foo");

document.createEementNS("http://...", "div", ({}));

document.createEvent("MyCustomEvent");

document.createNodeIterator(el);

document.createNodeIterator(el, DomRe$Webapi.WhatToShow[/* _All */0]);

document.createNodeIterator(el, Curry._1(DomRe$Webapi.WhatToShow[/* many */13], /* :: */[
          DomRe$Webapi.WhatToShow[/* _Element */1],
          /* :: */[
            DomRe$Webapi.WhatToShow[/* _Attribute */2],
            /* [] */0
          ]
        ]), NodeFilterRe$Webapi.make((function () {
            return 0;
          })));

document.createRange();

document.createTextNode("Very reasonable!");

document.createTreeWalker(el);

document.createTreeWalker(el, DomRe$Webapi.WhatToShow[/* _All */0]);

document.createTreeWalker(el, Curry._1(DomRe$Webapi.WhatToShow[/* many */13], /* :: */[
          DomRe$Webapi.WhatToShow[/* _Element */1],
          /* :: */[
            DomRe$Webapi.WhatToShow[/* _Attribute */2],
            /* [] */0
          ]
        ]), NodeFilterRe$Webapi.make((function () {
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
