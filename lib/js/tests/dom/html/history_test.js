'use strict';

var HistoryRe = require("../../../src/dom/html/historyRe.js");

document.history.length;

+document.history.scrollRestoration;

HistoryRe.setScrollRestoration(document.history, /* true */1);

document.history.state;

document.history.back();

document.history.forward();

document.history.go(-2);

document.history.pushState(document.history.state, "My title", "http://...");

document.history.replaceState(document.history.state, "My title", "http://...");

/*  Not a pure module */
