'use strict';

var EventRe$Webapi    = require("./EventRe.js");
var UiEventRe$Webapi  = require("./UiEventRe.js");
var DomTypesRe$Webapi = require("../DomTypesRe.js");

function Impl() {
  var getModifierState = function (key, self) {
    return +self.getModifierState(DomTypesRe$Webapi.encodeModifierKey(key));
  };
  return /* module */[/* getModifierState */getModifierState];
}

var include = EventRe$Webapi.Impl(/* module */[]);

UiEventRe$Webapi.Impl(/* module */[]);

function getModifierState(key, self) {
  return +self.getModifierState(DomTypesRe$Webapi.encodeModifierKey(key));
}

var eventPhase = include[0];

exports.Impl             = Impl;
exports.eventPhase       = eventPhase;
exports.getModifierState = getModifierState;
/* include Not a pure module */
