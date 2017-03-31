'use strict';

var ElementRe     = require("../../../src/dom/nodes/elementRe.js");
var TestHelpers   = require("../../testHelpers.js");
var HtmlElementRe = require("../../../src/dom/html/htmlElementRe.js");

var el = TestHelpers.unsafelyUnwrapOption(ElementRe.asHtmlElement(document.createElement("strong")));

var el2 = TestHelpers.unsafelyUnwrapOption(ElementRe.asHtmlElement(document.createElement("small")));

var $$event = document.createEvent("my-event");

el.accessKey;

el.accessKey = "";

el.accessKeyLabel;

HtmlElementRe.contentEditable(el);

HtmlElementRe.setContentEditable(el, /* Inherit */2);

+el.isContentEditable;

el.contextMenu;

el.contextMenu = el2;

el.dataset;

HtmlElementRe.dir(el);

HtmlElementRe.setDir(el, /* Rtl */1);

+el.draggable;

HtmlElementRe.setDraggable(el, /* true */1);

el.dropzone;

+el.hidden;

HtmlElementRe.setHidden(el, /* true */1);

+el.itemScope;

HtmlElementRe.setItemScope(el, /* true */1);

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

HtmlElementRe.setSpellcheck(el, /* true */1);

el.style;

el.tabIndex;

el.tabIndex = 42;

el.title;

el.title = "hovertext!";

+el.translate;

HtmlElementRe.setTranslate(el, /* true */1);

el.blur();

el.click();

el.focus();

el.forceSpellCheck();

exports.el      = el;
exports.el2     = el2;
exports.$$event = $$event;
/* el Not a pure module */
