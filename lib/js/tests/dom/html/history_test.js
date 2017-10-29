'use strict';

var HistoryRe$Webapi = require("../../../src/dom/html/HistoryRe.js");

window.history.length;

+window.history.scrollRestoration;

HistoryRe$Webapi.setScrollRestoration(window.history, /* true */1);

window.history.state;

window.history.back();

window.history.forward();

window.history.go(-2);

window.history.pushState(window.history.state, "My title", "http://...");

window.history.replaceState(window.history.state, "My title", "http://...");

/*  Not a pure module */
