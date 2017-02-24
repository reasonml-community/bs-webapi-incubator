'use strict';

var ReasonJs  = require("../../src/reasonJs");
var HistoryRe = require("../../src/dom/historyRe");

document.history.length;

HistoryRe.scrollRestoration(document.history);

HistoryRe.setScrollRestoration(document.history, /* true */1);

document.history.state;

document.history.back();

document.history.forward();

document.history.go(-2);

document.history.pushState(document.history.state, "My title", "http://...");

document.history.replaceState(document.history.state, "My title", "http://...");

/*  Not a pure module */
