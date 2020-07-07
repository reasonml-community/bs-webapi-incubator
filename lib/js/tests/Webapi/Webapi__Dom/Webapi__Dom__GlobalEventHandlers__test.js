'use strict';

var TestHelpers = require("../../testHelpers.js");
var Webapi__Dom__Document = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Document.js");
var Webapi__Dom__HtmlElement = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__HtmlElement.js");

function handleSelection(param) {
  console.log("change");
  
}

var elm = document.createElement("strong");

elm.addEventListener("selectionchange", handleSelection, {
      passive: true,
      once: true,
      capture: false
    });

elm.addEventListener("selectionchange", handleSelection, true);

elm.removeEventListener("selectionchange", handleSelection);

elm.removeEventListener("selectionchange", handleSelection, {
      passive: true,
      capture: false
    });

elm.removeEventListener("selectionchange", handleSelection, true);

var htmlElm = TestHelpers.unsafelyUnwrapOption(Webapi__Dom__HtmlElement.ofElement(document.createElement("strong")));

htmlElm.addEventListener("selectionchange", handleSelection, {
      passive: true,
      once: true,
      capture: false
    });

htmlElm.addEventListener("selectionchange", handleSelection, true);

htmlElm.removeEventListener("selectionchange", handleSelection);

htmlElm.removeEventListener("selectionchange", handleSelection, {
      passive: true,
      capture: false
    });

htmlElm.removeEventListener("selectionchange", handleSelection, true);

var htmlDoc = TestHelpers.unsafelyUnwrapOption(Webapi__Dom__Document.asHtmlDocument(document));

htmlDoc.addEventListener("selectionchange", handleSelection, {
      passive: true,
      once: true,
      capture: false
    });

htmlDoc.addEventListener("selectionchange", handleSelection, true);

htmlDoc.removeEventListener("selectionchange", handleSelection);

htmlDoc.removeEventListener("selectionchange", handleSelection, {
      passive: true,
      capture: false
    });

htmlDoc.removeEventListener("selectionchange", handleSelection, true);

window.addEventListener("selectionchange", handleSelection, {
      passive: true,
      once: true,
      capture: false
    });

window.addEventListener("selectionchange", handleSelection, true);

window.removeEventListener("selectionchange", handleSelection);

window.removeEventListener("selectionchange", handleSelection, {
      passive: true,
      capture: false
    });

window.removeEventListener("selectionchange", handleSelection, true);

exports.handleSelection = handleSelection;
exports.elm = elm;
exports.htmlElm = htmlElm;
exports.htmlDoc = htmlDoc;
/* elm Not a pure module */
