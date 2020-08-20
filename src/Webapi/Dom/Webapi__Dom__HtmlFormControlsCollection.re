/**
 * Spec: https://html.spec.whatwg.org/multipage/common-dom-interfaces.html#htmlformcontrolscollection
 */
type t; // TODO: Dom.htmlFormControlsCollection

type t_namedItem = [
  | `RadioNodeList(Webapi__Dom__RadioNodeList.t)
  | `Button(Webapi__Dom__HtmlButtonElement.t)
  | `FieldSet(Webapi__Dom__HtmlFieldSetElement.t)
  | `Input(Webapi__Dom__HtmlInputElement.t)
  | `Object(Webapi__Dom__HtmlObjectElement.t)
  | `Output(Webapi__Dom__HtmlOutputElement.t)
  | `Select(Webapi__Dom__HtmlSelectElement.t)
  | `TextArea(Webapi__Dom__HtmlTextAreaElement.t)
];

include Webapi__Dom__HtmlCollection.Impl({ type nonrec t = t; });

let isRadioNodeList: 'a => bool = [%raw {|
  function(x) { return x instanceof RadioNodeList; }
|}];

[@bs.send.pipe : t] [@bs.return nullable] external _namedItem: string => option('a) = "namedItem";
let namedItem = (name, t) =>
  switch (_namedItem(name, t)) {
  | Some(el) =>
    if (Webapi__Dom__RadioNodeList.unsafeAsRadioNodeList(el)->isRadioNodeList) {
      el->Obj.magic->`RadioNodeList->Some;
    } else {
      switch (Webapi__Dom__Element.tagName(el)) {
      // fixme: this should be a classify function in Webapi__Dom__HtmlElement
      | "BUTTON" => el->Obj.magic->`Button->Some
      | "FIELDSET" => el->Obj.magic->`FieldSet->Some
      | "INPUT" => el->Obj.magic->`Input->Some
      | "OBJECT" => el->Obj.magic->`Object->Some
      | "OUTPUT" => el->Obj.magic->`Output->Some
      | "SELECT" => el->Obj.magic->`Select->Some
      | "TEXTAREA" => el->Obj.magic->`TextArea->Some
      | _ => None
      };
    }
  | None => None
  };
