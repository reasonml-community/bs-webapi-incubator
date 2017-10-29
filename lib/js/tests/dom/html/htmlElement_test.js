'use strict';

var ElementRe$Webapi     = require("../../../src/dom/nodes/ElementRe.js");
var TestHelpers$Webapi   = require("../../testHelpers.js");
var HtmlElementRe$Webapi = require("../../../src/dom/html/HtmlElementRe.js");

var el = TestHelpers$Webapi.unsafelyUnwrapOption(ElementRe$Webapi.asHtmlElement(document.createElement("strong")));

var el2 = TestHelpers$Webapi.unsafelyUnwrapOption(ElementRe$Webapi.asHtmlElement(document.createElement("small")));

var $$event = document.createEvent("my-event");

el.accessKey;

el.accessKey = "";

el.accessKeyLabel;

HtmlElementRe$Webapi.contentEditable(el);

HtmlElementRe$Webapi.setContentEditable(el, /* Inherit */2);

+el.isContentEditable;

el.contextMenu;

el.contextMenu = el2;

el.dataset;

HtmlElementRe$Webapi.dir(el);

HtmlElementRe$Webapi.setDir(el, /* Rtl */1);

+el.draggable;

el.draggable = true;

el.dropzone;

+el.hidden;

el.hidden = true;

+el.itemScope;

el.itemScope = true;

el.itemType;

el.itemId;

el.itemId = "my-id";

el.itemRef;

el.itemProp;

el.itemValue;

el.itemValue = ({});

el.lang;

el.lang = "en";

el.offsetHeight;

el.offsetLeft;

el.offsetParent;

el.offsetTop;

el.offsetWidth;

+el.spellcheck;

el.spellcheck = true;

el.style;

el.tabIndex;

el.tabIndex = 42;

el.title;

el.title = "hovertext!";

+el.translate;

el.translate = true;

el.blur();

el.click();

el.focus();

el.forceSpellCheck();

exports.el      = el;
exports.el2     = el2;
exports.$$event = $$event;
/* el Not a pure module */
