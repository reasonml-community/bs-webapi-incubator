'use strict';

var Js_exn = require("bs-platform/lib/js/js_exn.js");
var Belt_Option = require("bs-platform/lib/js/belt_Option.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var TestHelpers = require("../../testHelpers.js");
var Webapi__Dom__Document = require("../../../src/Webapi/Dom/Webapi__Dom__Document.js");
var Webapi__Dom__HtmlFormElement = require("../../../src/Webapi/Dom/Webapi__Dom__HtmlFormElement.js");
var Webapi__Dom__HtmlFormControlsCollection = require("../../../src/Webapi/Dom/Webapi__Dom__HtmlFormControlsCollection.js");

var form = TestHelpers.unsafelyUnwrapOption(Webapi__Dom__HtmlFormElement.asFormElement(document.createElement("form")));

var usernameInput = document.createElement("input");

usernameInput.setAttribute("type", "text");

usernameInput.setAttribute("name", "username");

var usernameLabel = document.createElement("label");

var usernameText = document.createTextNode("Username:");

usernameLabel.appendChild(usernameText);

usernameLabel.appendChild(usernameInput);

var passwordInput = document.createElement("input");

passwordInput.setAttribute("type", "password");

passwordInput.setAttribute("name", "password");

var passwordLabel = document.createElement("label");

var passwordText = document.createTextNode("Password:");

passwordLabel.appendChild(passwordText);

passwordLabel.appendChild(passwordInput);

var radioInput1 = document.createElement("input");

radioInput1.setAttribute("type", "radio");

radioInput1.setAttribute("name", "radiogroup");

radioInput1.setAttribute("value", "one");

radioInput1.setAttribute("checked", "true");

var radioLabel1 = document.createElement("label");

var radioText1 = document.createTextNode("Choice 1:");

radioLabel1.appendChild(radioText1);

radioLabel1.appendChild(radioInput1);

var radioInput2 = document.createElement("input");

radioInput2.setAttribute("type", "radio");

radioInput2.setAttribute("name", "radiogroup");

radioInput2.setAttribute("value", "two");

var radioLabel2 = document.createElement("label");

var radioText2 = document.createTextNode("Choice 2:");

radioLabel2.appendChild(radioText2);

radioLabel2.appendChild(radioInput2);

var usernameContainer = document.createElement("div");

var passwordContainer = document.createElement("div");

var radioContainer = document.createElement("div");

usernameContainer.appendChild(usernameLabel);

passwordContainer.appendChild(passwordLabel);

radioContainer.appendChild(radioLabel1);

radioContainer.appendChild(radioLabel2);

form.appendChild(usernameContainer);

form.appendChild(passwordContainer);

form.appendChild(radioContainer);

var body = TestHelpers.unsafelyUnwrapOption(Belt_Option.flatMap(Webapi__Dom__Document.asHtmlDocument(document), (function (prim) {
            return Caml_option.nullable_to_opt(prim.body);
          })));

body.appendChild(form);

var collection = form.elements;

console.log("HtmlFormElement.elements:", collection);

var len = collection.length;

console.log("HtmlFormControlsCollection.length:", len);

var el0 = collection.item(0);

console.log("HtmlFormControlsCollection.item:", (el0 == null) ? undefined : Caml_option.some(el0));

var el0$1 = Webapi__Dom__HtmlFormControlsCollection.namedItem("username", collection);

console.log("HtmlFormControlsCollection.namedItem:", el0$1);

var el1 = collection.item(1);

console.log("HtmlFormControlsCollection.length:", (el1 == null) ? undefined : Caml_option.some(el1));

var el1$1 = Webapi__Dom__HtmlFormControlsCollection.namedItem("password", collection);

console.log("HtmlFormControlsCollection.namedItem:", el1$1);

var radioNodeList = collection.item(2);

console.log("HtmlFormControlsCollection.namedItem:", (radioNodeList == null) ? undefined : Caml_option.some(radioNodeList));

var radioNodeList$1 = Webapi__Dom__HtmlFormControlsCollection.namedItem("radiogroup", collection);

console.log("HtmlFormControlsCollection.namedItem:", radioNodeList$1);

var match = TestHelpers.unsafelyUnwrapOption(radioNodeList$1);

if (typeof match !== "number") {
  var variant = match[0];
  if (variant >= 98300745) {
    if (variant >= 516394781) {
      if (variant !== 843607770) {
        if (variant !== 942443387) {
          
        } else {
          console.log("RadioNodeList.value", match[1].value);
        }
      } else {
        Js_exn.raiseError("incorrect namedItem return value");
      }
    } else if (variant !== 242538002 && variant < 516394780) {
      
    } else {
      Js_exn.raiseError("incorrect namedItem return value");
    }
  } else if (variant >= -908856608) {
    if (variant !== -783600662 && variant < 98300744) {
      
    } else {
      Js_exn.raiseError("incorrect namedItem return value");
    }
  } else if (variant !== -1055554783 && variant < -908856609) {
    
  } else {
    Js_exn.raiseError("incorrect namedItem return value");
  }
}

function test_data(formElement) {
  return new FormData(formElement).get("foo");
}

exports.form = form;
exports.usernameInput = usernameInput;
exports.usernameLabel = usernameLabel;
exports.usernameText = usernameText;
exports.passwordInput = passwordInput;
exports.passwordLabel = passwordLabel;
exports.passwordText = passwordText;
exports.radioInput1 = radioInput1;
exports.radioLabel1 = radioLabel1;
exports.radioText1 = radioText1;
exports.radioInput2 = radioInput2;
exports.radioLabel2 = radioLabel2;
exports.radioText2 = radioText2;
exports.usernameContainer = usernameContainer;
exports.passwordContainer = passwordContainer;
exports.radioContainer = radioContainer;
exports.body = body;
exports.collection = collection;
exports.len = len;
exports.el0 = el0$1;
exports.el1 = el1$1;
exports.radioNodeList = radioNodeList$1;
exports.test_data = test_data;
/* form Not a pure module */
