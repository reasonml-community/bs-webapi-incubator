'use strict';

var Curry        = require("bs-platform/lib/js/curry");
var DocumentRe   = require("../../src/dom/documentRe");
var NodeFilterRe = require("../../src/dom/nodeFilterRe");

var el = document.createElement("strong");

document.characterSet;

DocumentRe.compatMode(document);

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

DocumentRe.visibilityState(document);

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

document.createNodeIterator(el, NodeFilterRe.WhatToShow[/* _All */0]);

document.createNodeIterator(el, Curry._1(NodeFilterRe.WhatToShow[/* many */13], /* :: */[
          NodeFilterRe.WhatToShow[/* _Element */1],
          /* :: */[
            NodeFilterRe.WhatToShow[/* _Attribute */2],
            /* [] */0
          ]
        ]), NodeFilterRe.make(function () {
          return 0;
        }));

document.createRange();

document.createText("Very reasonable!");

document.createTreeWalker(el);

document.createTreeWalker(el, NodeFilterRe.WhatToShow[/* _All */0]);

document.createTreeWalker(el, Curry._1(NodeFilterRe.WhatToShow[/* many */13], /* :: */[
          NodeFilterRe.WhatToShow[/* _Element */1],
          /* :: */[
            NodeFilterRe.WhatToShow[/* _Attribute */2],
            /* [] */0
          ]
        ]), NodeFilterRe.make(function () {
          return 0;
        }));

document.elementFromPoint(0, 0);

document.elementsFromPoint(0, 0);

document.enableStyleSheetsForSet("my-stylesheet-set");

document.exitPointerLock();

document.getAnimations();

document.getElementsByClassName("lstlisting");

document.getElementsByTagName("code");

document.getElementsByTagNameNS("http://...", "foo");

document.importNode(el);

DocumentRe.importNodeDeep(el, document);

document.getElementById("root");

document.querySelector(".lstlisting");

document.querySelectorAll(".lstlisting");

exports.el = el;
/* el Not a pure module */
