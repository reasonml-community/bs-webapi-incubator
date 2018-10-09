'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var ElementRe = require("../src/dom/nodes/ElementRe.js");
var DocumentRe = require("../src/dom/nodes/DocumentRe.js");
var Js_primitive = require("bs-platform/lib/js/js_primitive.js");
var Caml_builtin_exceptions = require("bs-platform/lib/js/caml_builtin_exceptions.js");

function map(f, param) {
  if (param !== undefined) {
    return Js_primitive.some(Curry._1(f, Js_primitive.valFromOption(param)));
  }
  
}

function andThen(f, param) {
  if (param !== undefined) {
    return Curry._1(f, Js_primitive.valFromOption(param));
  }
  
}

function unwrapUnsafely(param) {
  if (param !== undefined) {
    return Js_primitive.valFromOption(param);
  } else {
    throw [
          Caml_builtin_exceptions.invalid_argument,
          "Passed `None` to unwrapUnsafely"
        ];
  }
}

document.createElement("div").className;

map((function (prim) {
        return prim.innerText;
      }), Js_primitive.nullable_to_opt(document.createElement("div").nextElementSibling));

map((function (prim) {
        return prim.innerText;
      }), Js_primitive.nullable_to_opt(document.createElement("div").parentElement));

var el = unwrapUnsafely(ElementRe.asHtmlElement(document.createElement("div")));

map((function (param) {
        param.appendChild(el);
        return /* () */0;
      }), andThen((function (prim) {
            return Js_primitive.nullable_to_opt(prim.body);
          }), DocumentRe.asHtmlDocument(document)));

document.createElement("div").addEventListener("mousemove", (function (e) {
        console.log(/* tuple */[
              e.screenX,
              e.screenY
            ]);
        return /* () */0;
      }));

exports.map = map;
exports.andThen = andThen;
exports.unwrapUnsafely = unwrapUnsafely;
exports.el = el;
/*  Not a pure module */
