/*
 * Spec: https://html.spec.whatwg.org/multipage/input.html#the-input-element
 * MDN: https://developer.mozilla.org/en-US/docs/Web/API/HTMLInputElement
 */

module Impl = (T: {type t;}) => {
  type t_htmlInputElement = T.t;

  [@bs.get] [@bs.return nullable] external form : t_htmlInputElement => option(Dom.htmlFormElement) = "form";
  [@bs.set] external setFormEncType : (t_htmlInputElement, string) => unit = "formEncType";
  [@bs.get] external formMethod : t_htmlInputElement => string = "formMethod";
  [@bs.set] external setFormMethod : (t_htmlInputElement, string) => unit = "formMethod";
  [@bs.get] external formNoValidate : t_htmlInputElement => bool = "formNoValidate";
  [@bs.set] external setFormNoValidate : (t_htmlInputElement, bool) => unit = "formNoValidate";
  [@bs.get] external formTarget : t_htmlInputElement => string = "formTarget";
  [@bs.set] external setFormTarget : (t_htmlInputElement, string) => unit = "formTarget";

  /* Properties that apply to any type of input element that is not hidden */
  [@bs.get] external name : t_htmlInputElement => string = "name";
  [@bs.set] external setName : (t_htmlInputElement, string) => unit = "name";
  [@bs.get] external type_ : t_htmlInputElement => string = "type";
  [@bs.set] external setType : (t_htmlInputElement, string) => unit = "type";
  [@bs.get] external disabled : t_htmlInputElement => bool = "disabled";
  [@bs.set] external setDisabled : (t_htmlInputElement, bool) => unit = "disabled";
  [@bs.get] external autofocus : t_htmlInputElement => bool = "autofocus";
  [@bs.set] external setAutofocus : (t_htmlInputElement, bool) => unit = "autofocus";
  [@bs.get] external required : t_htmlInputElement => bool = "required";
  [@bs.set] external setRequired : (t_htmlInputElement, bool) => unit = "required";
  [@bs.get] external value : t_htmlInputElement => string = "value";
  [@bs.set] external setValue : (t_htmlInputElement, string) => unit = "value";
  [@bs.get] external validity : t_htmlInputElement => Webapi__Dom__ValidityState.t = "validity";
  [@bs.get] external validationMessage : t_htmlInputElement => string = "validationMessage";
  [@bs.get] external willValidate : t_htmlInputElement => bool = "willValidate";

  /* Properties that apply only to elements of type "checkbox" or "radio" */
  [@bs.get] external checked : t_htmlInputElement => bool = "checked";
  [@bs.set] external setChecked : (t_htmlInputElement, bool) => unit = "checked";
  [@bs.get] external defaultChecked : t_htmlInputElement => bool = "defaultChecked";
  [@bs.set] external setDefaultChecked : (t_htmlInputElement, bool) => unit = "defaultChecked";
  [@bs.get] external indeterminate : t_htmlInputElement => bool = "indeterminate";
  [@bs.set] external setIndeterminate : (t_htmlInputElement, bool) => unit = "indeterminate";

  /* Properties that apply only to elements of type "image" */
  [@bs.get] external alt : t_htmlInputElement => string = "alt";
  [@bs.set] external setAlt : (t_htmlInputElement, string) => unit = "alt";
  [@bs.get] external height : t_htmlInputElement => string = "height";
  [@bs.set] external setHeight : (t_htmlInputElement, string) => unit = "height";
  [@bs.get] external src : t_htmlInputElement => string = "src";
  [@bs.set] external setSrc : (t_htmlInputElement, string) => unit = "src";
  [@bs.get] external width : t_htmlInputElement => string = "width";
  [@bs.set] external setWidth : (t_htmlInputElement, string) => unit = "width";

  /* Properties that apply only to elements of type "file" */
  [@bs.get] external accept : t_htmlInputElement => string = "accept";
  [@bs.set] external setAccept : (t_htmlInputElement, string) => unit = "accept";
  /* TODO: files: Returns/accepts a FileList object. */

  /* Properties that apply only to text/number-containing or elements */
  [@bs.get] external autocomplete : t_htmlInputElement => string = "autocomplete";
  [@bs.set] external setAutocomplete : (t_htmlInputElement, string) => unit = "autocomplete";
  [@bs.get] external maxLength : t_htmlInputElement => int = "maxLength";
  [@bs.set] external setMaxLength : (t_htmlInputElement, int) => unit = "maxLength";
  [@bs.get] external minLength : t_htmlInputElement => int = "minLength";
  [@bs.set] external setMinLength : (t_htmlInputElement, int) => unit = "minLength";
  [@bs.get] external size : t_htmlInputElement => int = "size";
  [@bs.set] external setSize : (t_htmlInputElement, int) => unit = "size";
  [@bs.get] external pattern : t_htmlInputElement => string = "pattern";
  [@bs.set] external setPattern : (t_htmlInputElement, string) => unit = "pattern";
  [@bs.get] external placeholder : t_htmlInputElement => string = "placeholder";
  [@bs.set] external setPlaceholder : (t_htmlInputElement, string) => unit = "placeholder";
  [@bs.get] external readOnly : t_htmlInputElement => bool = "readOnly";
  [@bs.set] external setReadOnly : (t_htmlInputElement, bool) => unit = "readOnly";
  [@bs.get] external min : t_htmlInputElement => string = "min";
  [@bs.set] external setMin : (t_htmlInputElement, string) => unit = "min";
  [@bs.get] external max : t_htmlInputElement => string = "max";
  [@bs.set] external setMax : (t_htmlInputElement, string) => unit = "max";
  [@bs.get] external selectionStart : t_htmlInputElement => int = "selectionStart";
  [@bs.set] external setSelectionStart : (t_htmlInputElement, int) => unit = "selectionStart";
  [@bs.get] external selectionEnd : t_htmlInputElement => int = "selectionEnd";
  [@bs.set] external setSelectionEnd : (t_htmlInputElement, int) => unit = "selectionEnd";
  [@bs.get] external selectionDirection : t_htmlInputElement => string = "selectionDirection";
  [@bs.set] external setSelectionDirection : (t_htmlInputElement, string) => unit = "selectionDirection";

  /* Properties not yet categorized */
  [@bs.get] external defaultValue : t_htmlInputElement => string = "defaultValue";
  [@bs.set] external setDefaultValue : (t_htmlInputElement, string) => unit = "defaultValue";
  [@bs.get] external dirName : t_htmlInputElement => string = "dirName";
  [@bs.set] external setDirName : (t_htmlInputElement, string) => unit = "dirName";
  [@bs.get] external accessKey : t_htmlInputElement => string = "accessKey";
  [@bs.set] external setAccessKey : (t_htmlInputElement, string) => unit = "accessKey";
  [@bs.get] [@bs.return nullable] external list : t_htmlInputElement => option(Dom.htmlElement) = "list";
  [@bs.get] external multiple : t_htmlInputElement => bool = "multiple";
  [@bs.set] external setMultiple : (t_htmlInputElement, bool) => unit = "multiple";
  /* TODO: files: FileList array. Returns the list of selected files. */
  [@bs.get] external labels : t_htmlInputElement => array(Dom.nodeList) = "labels";
  [@bs.get] external step : t_htmlInputElement => string = "step";
  [@bs.set] external setStep : (t_htmlInputElement, string) => unit = "step";
  [@bs.get] [@bs.return nullable] external valueAsDate : t_htmlInputElement => option(Js.Date.t) = "valueAsDate";
  [@bs.set] external setValueAsDate : (t_htmlInputElement, Js.Date.t) => unit = "valueAsDate";
  [@bs.get] external valueAsNumber : t_htmlInputElement => float = "valueAsNumber";

  [@bs.send.pipe: t_htmlInputElement] external select : unit = "select";

  module SelectionDirection = {
    type t =
      | Forward
      | Backward
      | None;

    let toString =
      fun
      | Forward => "forward"
      | Backward => "backward"
      | None => "none";
  };

  [@bs.send.pipe: t_htmlInputElement] external setSelectionRange : (int, int) => unit = "setSelectionRange";
  [@bs.send.pipe: t_htmlInputElement] external setSelectionRangeWithDirection_ : (int, int, string) => unit = "setSelectionRange";
  let setSelectionRangeWithDirection = (selectionStart, selectionEnd, selectionDirection, element) =>
    element |> setSelectionRangeWithDirection_(selectionStart, selectionEnd, selectionDirection |> SelectionDirection.toString);

  module SelectionMode = {
    type t =
      | Select
      | Start
      | End
      | Preserve;

    let toString =
      fun
      | Select => "select"
      | Start => "start"
      | End => "end"
      | Preserve => "preserve";
  };

  [@bs.send.pipe: t_htmlInputElement] external setRangeTextWithinSelection : string => unit = "setRangeText";
  [@bs.send.pipe: t_htmlInputElement] external setRangeTextWithinInterval : (string, int, int) => unit = "setRangeText";
  [@bs.send.pipe: t_htmlInputElement] external setRangeTextWithinIntervalWithSelectionMode_ : (string, int, int, string) => unit = "setRangeText";
  let setRangeTextWithinIntervalWithSelectionMode = (text, selectionStart, selectionEnd, selectionMode, element) =>
    element |> setRangeTextWithinIntervalWithSelectionMode_(text, selectionStart, selectionEnd, selectionMode |> SelectionMode.toString);

  [@bs.send.pipe: t_htmlInputElement] external setCustomValidity : string => unit = "setCustomValidity";
  [@bs.send.pipe: t_htmlInputElement] external checkValidity : bool = "checkValidity";
  [@bs.send.pipe: t_htmlInputElement] external reportValidity : bool = "reportValidity";
  [@bs.send.pipe: t_htmlInputElement] external stepDownBy : int => unit = "stepDown";
  [@bs.send.pipe: t_htmlInputElement] external stepDownByOne : unit = "stepDown";
  [@bs.send.pipe: t_htmlInputElement] external stepUpBy : int => unit = "stepUp";
  [@bs.send.pipe: t_htmlInputElement] external stepUpByOne : unit = "stepUp";
};

type t = Dom.htmlInputElement;

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
