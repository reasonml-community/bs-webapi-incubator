'use strict';

var Js_exn = require("bs-platform/lib/js/js_exn.js");
var Belt_Option = require("bs-platform/lib/js/belt_Option.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var TestHelpers = require("../../testHelpers.js");
var Webapi__Dom__Document = require("../../../src/Webapi/Dom/Webapi__Dom__Document.js");
var Webapi__Dom__HtmlFormElement = require("../../../src/Webapi/Dom/Webapi__Dom__HtmlFormElement.js");
var Webapi__Dom__HtmlSelectElement = require("../../../src/Webapi/Dom/Webapi__Dom__HtmlSelectElement.js");
var Webapi__Dom__HtmlFormControlsCollection = require("../../../src/Webapi/Dom/Webapi__Dom__HtmlFormControlsCollection.js");

function createElement(__x) {
  return document.createElement(__x);
}

function createTextNode(__x) {
  return document.createTextNode(__x);
}

function createInput(param) {
  return document.createElement("input");
}

function createLabelWithText(text) {
  var el = document.createElement("label");
  var textNode = document.createTextNode(text);
  el.appendChild(textNode);
  return el;
}

var form = TestHelpers.unsafelyUnwrapOption(Webapi__Dom__HtmlFormElement.asFormElement(document.createElement("form")));

var usernameInput = document.createElement("input");

usernameInput.setAttribute("type", "text");

usernameInput.setAttribute("name", "username");

var usernameLabel = createLabelWithText("Username:");

usernameLabel.appendChild(usernameInput);

var passwordInput = document.createElement("input");

passwordInput.setAttribute("type", "password");

passwordInput.setAttribute("name", "password");

var passwordLabel = createLabelWithText("Password:");

passwordLabel.appendChild(passwordInput);

var radioInput1 = document.createElement("input");

radioInput1.setAttribute("type", "radio");

radioInput1.setAttribute("name", "radiogroup");

radioInput1.setAttribute("value", "one");

radioInput1.setAttribute("checked", "true");

var radioLabel1 = createLabelWithText("Choice 1:");

radioLabel1.appendChild(radioInput1);

var radioInput2 = document.createElement("input");

radioInput2.setAttribute("type", "radio");

radioInput2.setAttribute("name", "radiogroup");

radioInput2.setAttribute("value", "two");

var radioLabel2 = createLabelWithText("Choice 2:");

radioLabel2.appendChild(radioInput2);

var select = document.createElement("select");

select.setAttribute("name", "select");

var selectLabel = createLabelWithText("Select:");

selectLabel.appendChild(select);

var usernameContainer = document.createElement("div");

var passwordContainer = document.createElement("div");

var radioContainer = document.createElement("div");

var selectContainer = document.createElement("div");

usernameContainer.appendChild(usernameLabel);

passwordContainer.appendChild(passwordLabel);

radioContainer.appendChild(radioLabel1);

radioContainer.appendChild(radioLabel2);

selectContainer.appendChild(selectLabel);

form.appendChild(usernameContainer);

form.appendChild(passwordContainer);

form.appendChild(radioContainer);

form.appendChild(selectContainer);

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
  if (variant >= 96709417) {
    if (variant >= 488741627) {
      if (variant !== 516394780) {
        if (variant !== 942443387) {
          
        } else {
          console.log("RadioNodeList.value", match[1].value);
        }
      } else {
        Js_exn.raiseError("incorrect namedItem return value");
      }
    } else if (variant !== 242538002 && variant < 488741626) {
      
    } else {
      Js_exn.raiseError("incorrect namedItem return value");
    }
  } else if (variant >= -908856608) {
    if (variant !== -783600662 && variant < 96709416) {
      
    } else {
      Js_exn.raiseError("incorrect namedItem return value");
    }
  } else if (variant !== -1055554783 && variant < -908856609) {
    
  } else {
    Js_exn.raiseError("incorrect namedItem return value");
  }
}

var select$1 = TestHelpers.unsafelyUnwrapOption(Webapi__Dom__HtmlSelectElement.ofElement(select));

var opts = select$1.options;

console.log("HtmlSelectElement.options:", opts);

opts.length = 3;

console.log("collection length:", opts.length);

opts[0] = null;

console.log("collection length:", opts.length);

opts[2] = document.createElement("option");

console.log("collection length:", opts.length);

opts.length = 0;

var opt1 = document.createElement("option");

opt1.setAttribute("value", "1");

opt1.appendChild(document.createTextNode("opt1"));

opts.add(opt1);

var selectedIndex = opts.selectedIndex = 0;

console.log("collection length:", opts.length);

console.log("HtmlOptionsCollection.setSelectedIndex", selectedIndex);

var opt2 = document.createElement("option");

opt2.setAttribute("value", "2");

opt2.appendChild(document.createTextNode("opt2"));

var item = opts.item(0);

console.log("HtmlOptionsCollection.item:", (item == null) ? undefined : Caml_option.some(item));

console.log("collection length:", opts.length);

opts.add(opt2, 0);

opts.selectedIndex = opt2;

var item$1 = opts.item(0);

console.log("HtmlOptionsCollection.addBefore:", (item$1 == null) ? undefined : Caml_option.some(item$1));

console.log("collection length:", opts.length);

console.log("selected index", opts.selectedIndex);

var opt3 = document.createElement("option");

opt3.setAttribute("value", "3");

opt3.appendChild(document.createTextNode("opt3"));

opts.add(opt3, opt2);

var item$2 = opts.item(0);

console.log("HtmlOptionsCollection.addBeforeElement:", (item$2 == null) ? undefined : Caml_option.some(item$2));

console.log("collection length:", opts.length);

var item$3 = opts.selectedIndex;

console.log("HtmlOptionsCollection.selectedIndex:", item$3);

var item$4 = opts.selectedIndex = opt3;

console.log("HtmlOptionsCollection.setSelectedElement:", item$4);

var item$5 = opts.selectedIndex;

console.log("HtmlOptionsCollection.selectedIndex:", item$5);

opts.remove(0);

console.log("collection length:", opts.length);

function test_data(formElement) {
  return new FormData(formElement).get("foo");
}

var formEl = form;

exports.createElement = createElement;
exports.createTextNode = createTextNode;
exports.createInput = createInput;
exports.createLabelWithText = createLabelWithText;
exports.form = form;
exports.usernameInput = usernameInput;
exports.usernameLabel = usernameLabel;
exports.passwordInput = passwordInput;
exports.passwordLabel = passwordLabel;
exports.radioInput1 = radioInput1;
exports.radioLabel1 = radioLabel1;
exports.radioInput2 = radioInput2;
exports.radioLabel2 = radioLabel2;
exports.selectLabel = selectLabel;
exports.usernameContainer = usernameContainer;
exports.passwordContainer = passwordContainer;
exports.radioContainer = radioContainer;
exports.selectContainer = selectContainer;
exports.formEl = formEl;
exports.body = body;
exports.collection = collection;
exports.len = len;
exports.el0 = el0$1;
exports.el1 = el1$1;
exports.radioNodeList = radioNodeList$1;
exports.select = select$1;
exports.opts = opts;
exports.opt1 = opt1;
exports.selectedIndex = selectedIndex;
exports.opt2 = opt2;
exports.opt3 = opt3;
exports.item = item$5;
exports.test_data = test_data;
/* form Not a pure module */
