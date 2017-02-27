'use strict';

var DomRe          = require("../../src/dom/domRe");
var ReasonJs       = require("../../src/reasonJs");
var DomTokenListRe = require("../../src/dom/domTokenListRe");

var tlist = document.createElement("div").classList;

tlist.length;

DomTokenListRe.item(3, tlist);

tlist.add("my-class");

tlist.add("my-class", "my-other-class");

DomTokenListRe.contains("my-class", tlist);

tlist.forEach(function (item, _) {
      console.log(item);
      return /* () */0;
    });

tlist.remove("my-class");

tlist.remove("my-class", "my-other-class");

tlist.replace("my-class", "my-other-class");

DomTokenListRe.supports("my-class", tlist);

DomTokenListRe.toggle("my-class", tlist);

DomTokenListRe.toggleForced("my-class", tlist);

tlist.toString();

exports.tlist = tlist;
/* tlist Not a pure module */
