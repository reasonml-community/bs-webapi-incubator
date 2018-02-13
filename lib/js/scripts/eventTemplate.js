'use strict';

var Process = require("process");
var Caml_array = require("bs-platform/lib/js/caml_array.js");

var typ = Caml_array.caml_array_get(Process.argv, 2);

var name = Caml_array.caml_array_get(Process.argv, 3);

var lname = name.toLowerCase();

console.log("\n  [@bs.send.pipe : T.t] external add" + (String(name) + ("EventListener : ([@bs.as \"" + (String(lname) + ("\"] _, Dom." + (String(typ) + (" => unit) => unit = \"addEventListener\";\n  [@bs.send.pipe : T.t] external add" + (String(name) + ("EventListenerWithOptions : ([@bs.as \"" + (String(lname) + ("\"] _, Dom." + (String(typ) + (" => unit, {. \"capture\": Js.boolean, \"once\": Js.boolean, \"passive\": Js.boolean}) => unit = \"addEventListener\"; /* not widely supported */\n  [@bs.send.pipe : T.t] external add" + (String(name) + ("EventListenerUseCapture : ([@bs.as \"" + (String(lname) + ("\"] _, Dom." + (String(typ) + (" => unit, [@bs.as {json|true|json}] _) => unit = \"addEventListener\";\n  [@bs.send.pipe : T.t] external remove" + (String(name) + ("EventListener : ([@bs.as \"" + (String(lname) + ("\"] _, Dom." + (String(typ) + (" => unit) => unit = \"removeEventListener\";\n  [@bs.send.pipe : T.t] external remove" + (String(name) + ("EventListenerWithOptions : ([@bs.as \"" + (String(lname) + ("\"] _, Dom." + (String(typ) + (" => unit, {. \"capture\": Js.boolean, \"passive\": Js.boolean}) => unit = \"removeEventListener\"; /* not widely supported */\n  [@bs.send.pipe : T.t] external remove" + (String(name) + ("EventListenerUseCapture : ([@bs.as \"" + (String(lname) + ("\"] _, Dom." + (String(typ) + " => unit, [@bs.as {json|true|json}] _) => unit = \"removeEventListener\";\n"))))))))))))))))))))))))))))))))))));

exports.typ = typ;
exports.name = name;
exports.lname = lname;
/* typ Not a pure module */
