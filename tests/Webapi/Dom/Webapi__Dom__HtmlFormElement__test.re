open Webapi.Dom;
open Webapi.FormData;
open Webapi.Dom.HtmlFormElement;

let form = Document.createElement("form", document) |> asFormElement |> TestHelpers.unsafelyUnwrapOption;

let usernameInput = Document.createElement("input", document);
Element.setAttribute("type", "text", usernameInput);
Element.setAttribute("name", "username", usernameInput);

let usernameLabel = Document.createElement("label", document);
let usernameText = Document.createTextNode("Username:", document);
Element.appendChild(usernameText, usernameLabel);
Element.appendChild(usernameInput, usernameLabel);

let passwordInput = Document.createElement("input", document);
Element.setAttribute("type", "password", passwordInput);
Element.setAttribute("name", "password", passwordInput);

let passwordLabel = Document.createElement("label", document);
let passwordText = Document.createTextNode("Password:", document);
Element.appendChild(passwordText, passwordLabel);
Element.appendChild(passwordInput, passwordLabel);

let radioInput1 = Document.createElement("input", document);
Element.setAttribute("type", "radio", radioInput1);
Element.setAttribute("name", "radiogroup", radioInput1);
Element.setAttribute("value", "one", radioInput1);
Element.setAttribute("checked", "true", radioInput1);

let radioLabel1 = Document.createElement("label", document);
let radioText1 = Document.createTextNode("Choice 1:", document);
Element.appendChild(radioText1, radioLabel1);
Element.appendChild(radioInput1, radioLabel1);

let radioInput2 = Document.createElement("input", document);
Element.setAttribute("type", "radio", radioInput2);
Element.setAttribute("name", "radiogroup", radioInput2);
Element.setAttribute("value", "two", radioInput2);
// Element.setAttribute("checked", "true", radioInput2);

let radioLabel2 = Document.createElement("label", document);
let radioText2 = Document.createTextNode("Choice 2:", document);
Element.appendChild(radioText2, radioLabel2);
Element.appendChild(radioInput2, radioLabel2);

let usernameContainer = Document.createElement("div", document);
let passwordContainer = Document.createElement("div", document);
let radioContainer = Document.createElement("div", document);

Element.appendChild(usernameLabel, usernameContainer);
Element.appendChild(passwordLabel, passwordContainer);
Element.appendChild(radioLabel1, radioContainer);
Element.appendChild(radioLabel2, radioContainer);
Element.appendChild(usernameContainer, form->asElement);
Element.appendChild(passwordContainer, form->asElement);
Element.appendChild(radioContainer, form->asElement);

let body =
  Document.asHtmlDocument(document)->Belt.Option.flatMap(HtmlDocument.body)->TestHelpers.unsafelyUnwrapOption;

Element.appendChild(form->asElement, body);

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
| `Fieldset(_)
| `Input(_)
| `Object(_)
| `Output(_)
| `Select(_)
| `Textarea(_) => Js.Exn.raiseError("incorrect namedItem return value")
| `RadioNodeList(radioNodeList) => Js.log2("RadioNodeList.value", RadioNodeList.value(radioNodeList))
| _ => ()
};

let test_data = formElement => formElement |> data |> get("foo");
