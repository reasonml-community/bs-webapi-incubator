open Webapi.Dom;
open Webapi.FormData;
open Webapi.Dom.HtmlFormElement;

let createElement = Document.createElement(_, document);
let createTextNode = Document.createTextNode(_, document);
let createInput = () => createElement("input");
let createLabelWithText = (text) => {
  let el = createElement("label");
  let textNode = createTextNode(text);
  Element.appendChild(textNode, el);
  el;
};

let form = createElement("form") |> asFormElement |> TestHelpers.unsafelyUnwrapOption;

let usernameInput = createInput();
Element.setAttribute("type", "text", usernameInput);
Element.setAttribute("name", "username", usernameInput);

let usernameLabel = createLabelWithText("Username:");
Element.appendChild(usernameInput, usernameLabel);

let passwordInput = createInput();
Element.setAttribute("type", "password", passwordInput);
Element.setAttribute("name", "password", passwordInput);

let passwordLabel = createLabelWithText("Password:");
Element.appendChild(passwordInput, passwordLabel);

let radioInput1 = createInput();
Element.setAttribute("type", "radio", radioInput1);
Element.setAttribute("name", "radiogroup", radioInput1);
Element.setAttribute("value", "one", radioInput1);
Element.setAttribute("checked", "true", radioInput1);

let radioLabel1 = createLabelWithText("Choice 1:");
Element.appendChild(radioInput1, radioLabel1);

let radioInput2 = createInput();
Element.setAttribute("type", "radio", radioInput2);
Element.setAttribute("name", "radiogroup", radioInput2);
Element.setAttribute("value", "two", radioInput2);
// Element.setAttribute("checked", "true", radioInput2);

let radioLabel2 = createLabelWithText("Choice 2:");
Element.appendChild(radioInput2, radioLabel2);

let select = createElement("select");
Element.setAttribute("name", "select", select);
let selectLabel = createLabelWithText("Select:");
Element.appendChild(select, selectLabel);

let usernameContainer = createElement("div");
let passwordContainer = createElement("div");
let radioContainer = createElement("div");
let selectContainer = createElement("div");

let formEl = form->asElement;

Element.appendChild(usernameLabel, usernameContainer);
Element.appendChild(passwordLabel, passwordContainer);
Element.appendChild(radioLabel1, radioContainer);
Element.appendChild(radioLabel2, radioContainer);
Element.appendChild(selectLabel, selectContainer);
Element.appendChild(usernameContainer, formEl);
Element.appendChild(passwordContainer, formEl);
Element.appendChild(radioContainer, formEl);
Element.appendChild(selectContainer, formEl);

let body =
  Document.asHtmlDocument(document)->Belt.Option.flatMap(HtmlDocument.body)->TestHelpers.unsafelyUnwrapOption;

Element.appendChild(formEl, body);

let collection = elements(form);

Js.log2("HtmlFormElement.elements:", collection);

let len = HtmlFormControlsCollection.length(collection);
Js.log2("HtmlFormControlsCollection.length:", len);

let el0 = HtmlFormControlsCollection.item(0, collection);
Js.log2("HtmlFormControlsCollection.item:", el0);

let el0 = HtmlFormControlsCollection.namedItem("username", collection);
Js.log2("HtmlFormControlsCollection.namedItem:", el0);

let el1 = HtmlFormControlsCollection.item(1, collection);
Js.log2("HtmlFormControlsCollection.length:", el1);

let el1 = HtmlFormControlsCollection.namedItem("password", collection);
Js.log2("HtmlFormControlsCollection.namedItem:", el1);

let radioNodeList = HtmlFormControlsCollection.item(2, collection);
Js.log2("HtmlFormControlsCollection.namedItem:", radioNodeList);

let radioNodeList = HtmlFormControlsCollection.namedItem("radiogroup", collection);
Js.log2("HtmlFormControlsCollection.namedItem:", radioNodeList);

switch (TestHelpers.unsafelyUnwrapOption(radioNodeList)) {
| `Button(_)
| `FieldSet(_)
| `Input(_)
| `Object(_)
| `Output(_)
| `Select(_)
| `TextArea(_) => Js.Exn.raiseError("incorrect namedItem return value")
| `RadioNodeList(radioNodeList) => Js.log2("RadioNodeList.value", RadioNodeList.value(radioNodeList))
| _ => ()
};

let select = HtmlSelectElement.ofElement(select)
  ->TestHelpers.unsafelyUnwrapOption;

let opts = HtmlSelectElement.options(select);
Js.log2("HtmlSelectElement.options:", opts);

HtmlOptionsCollection.setLength(opts, 3);
Js.log2("collection length:", HtmlOptionsCollection.length(opts));
HtmlOptionsCollection.clearItem(opts, 0, Js.Null.empty);
Js.log2("collection length:", HtmlOptionsCollection.length(opts));
HtmlOptionsCollection.setItem(opts, 2, createElement("option"));
Js.log2("collection length:", HtmlOptionsCollection.length(opts));

HtmlOptionsCollection.setLength(opts, 0);

let opt1 = createElement("option");
Element.setAttribute("value", "1", opt1);
Element.appendChild(createTextNode("opt1"), opt1);

HtmlOptionsCollection.add(opt1, opts);
let selectedIndex = HtmlOptionsCollection.setSelectedIndex(opts, 0);
Js.log2("collection length:", HtmlOptionsCollection.length(opts));
Js.log2("HtmlOptionsCollection.setSelectedIndex", selectedIndex);

let opt2 = createElement("option");
Element.setAttribute("value", "2", opt2);
Element.appendChild(createTextNode("opt2"), opt2);

let item = HtmlOptionsCollection.item(0, opts);
Js.log2("HtmlOptionsCollection.item:", item);
Js.log2("collection length:", HtmlOptionsCollection.length(opts));

HtmlOptionsCollection.addBefore(opt2, 0, opts);
HtmlOptionsCollection.setSelectedElement(opts, opt2);
let item = HtmlOptionsCollection.item(0, opts);
Js.log2("HtmlOptionsCollection.addBefore:", item);
Js.log2("collection length:", HtmlOptionsCollection.length(opts));
Js.log2("selected index", HtmlOptionsCollection.selectedIndex(opts));

let opt3 = createElement("option");
Element.setAttribute("value", "3", opt3);
Element.appendChild(createTextNode("opt3"), opt3);

HtmlOptionsCollection.addBeforeElement(opt3, opt2, opts);
let item = HtmlOptionsCollection.item(0, opts);
Js.log2("HtmlOptionsCollection.addBeforeElement:", item);
Js.log2("collection length:", HtmlOptionsCollection.length(opts));

let item = HtmlOptionsCollection.selectedIndex(opts);
Js.log2("HtmlOptionsCollection.selectedIndex:", item);

let item = HtmlOptionsCollection.setSelectedElement(opts, opt3);
Js.log2("HtmlOptionsCollection.setSelectedElement:", item);
let item = HtmlOptionsCollection.selectedIndex(opts);
Js.log2("HtmlOptionsCollection.selectedIndex:", item);

HtmlOptionsCollection.remove(0, opts);
Js.log2("collection length:", HtmlOptionsCollection.length(opts));

let test_data = formElement => formElement |> data |> get("foo");
