'use strict';

var TestHelpers = require("../../testHelpers.js");
var Webapi__Dom__Document = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__Document.js");
var Webapi__Dom__HtmlDocument = require("../../../src/Webapi/Webapi__Dom/Webapi__Dom__HtmlDocument.js");

var el = document.createElement("strong");

var htmlDocument = TestHelpers.unsafelyUnwrapOption(Webapi__Dom__Document.asHtmlDocument(document));

htmlDocument.activeElement;

htmlDocument.body;

htmlDocument.body = el;

htmlDocument.cookie;

htmlDocument.cookie = "foo=bar;reason=ml";

htmlDocument.defaultView;

Webapi__Dom__HtmlDocument.designMode(htmlDocument);

Webapi__Dom__HtmlDocument.setDesignMode(htmlDocument, /* On */0);

Webapi__Dom__HtmlDocument.dir(htmlDocument);

Webapi__Dom__HtmlDocument.setDir(htmlDocument, /* Ltr */0);

htmlDocument.domain;

htmlDocument.domain = "reason.ml";

htmlDocument.embeds;

htmlDocument.forms;

htmlDocument.head;

htmlDocument.images;

htmlDocument.lastModified;

htmlDocument.links;

htmlDocument.location;

htmlDocument.location = "http://reason.ml";

htmlDocument.plugins;

Webapi__Dom__HtmlDocument.readyState(htmlDocument);

htmlDocument.referrer;

htmlDocument.scripts;

htmlDocument.title;

htmlDocument.title = "Reason: Rapid Expressive Systems Programming.";

htmlDocument.URL;

htmlDocument.close();

Webapi__Dom__HtmlDocument.execCommand("copy", false, undefined, htmlDocument);

htmlDocument.getElementsByName("angry-joe");

htmlDocument.getSelection();

htmlDocument.hasFocus();

htmlDocument.open();

htmlDocument.queryCommandEnabled("copy");

htmlDocument.queryCommandIndeterm("cut");

htmlDocument.queryCommandSupported("paste");

htmlDocument.queryCommandValue("fontName");

htmlDocument.write("Hello World!");

htmlDocument.writeln("Hello Newline!");

exports.el = el;
exports.htmlDocument = htmlDocument;
/* el Not a pure module */
