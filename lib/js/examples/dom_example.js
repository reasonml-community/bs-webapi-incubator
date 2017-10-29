'use strict';

var Curry                   = require("bs-platform/lib/js/curry.js");
var Js_primitive            = require("bs-platform/lib/js/js_primitive.js");
var ElementRe$Webapi        = require("../src/dom/nodes/ElementRe.js");
var DocumentRe$Webapi       = require("../src/dom/nodes/DocumentRe.js");
var Caml_builtin_exceptions = require("bs-platform/lib/js/caml_builtin_exceptions.js");

function map(f, param) {
  if (param) {
    return /* Some */[Curry._1(f, param[0])];
  } else {
    return /* None */0;
  }
}

function andThen(f, param) {
  if (param) {
    return Curry._1(f, param[0]);
  } else {
    return /* None */0;
  }
}

function unwrapUnsafely(param) {
  if (param) {
    return param[0];
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
      }), Js_primitive.null_to_opt(document.createElement("div").nextElementSibling));

map((function (prim) {
        return prim.innerText;
      }), Js_primitive.null_to_opt(document.createElement("div").parentElement));

var el = unwrapUnsafely(ElementRe$Webapi.asHtmlElement(document.createElement("div")));

map((function (param) {
        param.appendChild(el);
        return /* () */0;
      }), andThen((function (prim) {
            return Js_primitive.null_to_opt(prim.body);
          }), DocumentRe$Webapi.asHtmlDocument(document)));

exports.map            = map;
exports.andThen        = andThen;
exports.unwrapUnsafely = unwrapUnsafely;
exports.el             = el;
/*  Not a pure module */
