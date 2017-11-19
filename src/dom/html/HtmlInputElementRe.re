module Impl (T: { type t; }) => {
  type t_htmlInputElement = T.t;

  external form : t_htmlInputElement => Js.null Dom.htmlFormElement = "" [@@bs.get];
  external formAction : t_htmlInputElement => string = "" [@@bs.get];
  external setFormAction : t_htmlInputElement => string => unit = "" [@@bs.set];
  external formEncType : t_htmlInputElement => string = "" [@@bs.get];
  external setFormEncType : t_htmlInputElement => string => unit = "" [@@bs.set];
  external formMethod : t_htmlInputElement => string = "" [@@bs.get];
  external setFormMethod : t_htmlInputElement => string => unit = "" [@@bs.set];
  external formNoValidate : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setFormNoValidate : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  external formTarget : t_htmlInputElement => string = "" [@@bs.get];
  external setFormTarget : t_htmlInputElement => string => unit = "" [@@bs.set];

  external name : t_htmlInputElement => string = "" [@@bs.get];
  external setName : t_htmlInputElement => string => unit = "" [@@bs.set];
  external type_ : t_htmlInputElement => string = "" [@@bs.get];
  external setType : t_htmlInputElement => string => unit = "" [@@bs.set];
  external disabled : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setDisabled : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  external autofocus : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setAutofocus : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  external required : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setRequired : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  external value : t_htmlInputElement => string = "" [@@bs.get];
  external setValue : t_htmlInputElement => string => unit = "" [@@bs.set];
  /* TODO validity: ValidityState object. Returns the validity state that this element is in. */
  external validationMessage : t_htmlInputElement => string = "" [@@bs.get];
  external willValidate : t_htmlInputElement => Js.boolean = "" [@@bs.get];

  /* Only type "checkbox" or "radio" */
  external checked : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setChecked : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  external defaultChecked : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setDefaultChecked : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  external indeterminate : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setIndeterminate : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];

  /* Only type "image" */
  external alt : t_htmlInputElement => string = "" [@@bs.get];
  external setAlt : t_htmlInputElement => string => unit = "" [@@bs.set];
  external height : t_htmlInputElement => string = "" [@@bs.get];
  external setHeight : t_htmlInputElement => string => unit = "" [@@bs.set];
  external src : t_htmlInputElement => string = "" [@@bs.get];
  external setSrc : t_htmlInputElement => string => unit = "" [@@bs.set];
  external width : t_htmlInputElement => string = "" [@@bs.get];
  external setWidth : t_htmlInputElement => string => unit = "" [@@bs.set];

  /* Only type "file" */
  external accept : t_htmlInputElement => string = "" [@@bs.get];
  external setAccept : t_htmlInputElement => string => unit = "" [@@bs.set];
  /* TODO files: Returns/accepts a FileList object. */

  /* Only text/number-containing or elements */
  external autocomplete : t_htmlInputElement => string = "" [@@bs.get];
  external setAutocomplete : t_htmlInputElement => string => unit = "" [@@bs.set];
  external maxLength : t_htmlInputElement => int = "" [@@bs.get];
  external setMaxLength : t_htmlInputElement => int => unit = "" [@@bs.set];
  external size : t_htmlInputElement => int = "" [@@bs.get];
  external setSize : t_htmlInputElement => int => unit = "" [@@bs.set];
  external pattern : t_htmlInputElement => string = "" [@@bs.get];
  external setPattern : t_htmlInputElement => string => unit = "" [@@bs.set];
  external placeholder : t_htmlInputElement => string = "" [@@bs.get];
  external setPlaceholder : t_htmlInputElement => string => unit = "" [@@bs.set];
  external readOnly : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setReadOnly : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  external min : t_htmlInputElement => string = "" [@@bs.get];
  external setMin : t_htmlInputElement => string => unit = "" [@@bs.set];
  external max : t_htmlInputElement => string = "" [@@bs.get];
  external setMax : t_htmlInputElement => string => unit = "" [@@bs.set];
  external selectionStart : t_htmlInputElement => int = "" [@@bs.get];
  external setSelectionStart : t_htmlInputElement => int => unit = "" [@@bs.set];
  external selectionEnd : t_htmlInputElement => int = "" [@@bs.get];
  external setSelectionEnd : t_htmlInputElement => int => unit = "" [@@bs.set];
  external selectionDirection : t_htmlInputElement => string = "" [@@bs.get];
  external setSelectionDirection : t_htmlInputElement => string => unit = "" [@@bs.set];

  /* Not yet categorized */
  external defaultValue : t_htmlInputElement => string = "" [@@bs.get];
  external setDefaultValue : t_htmlInputElement => string => unit = "" [@@bs.set];
  external dirName : t_htmlInputElement => string = "" [@@bs.get];
  external setDirName : t_htmlInputElement => string => unit = "" [@@bs.set];
  external accessKey : t_htmlInputElement => string = "" [@@bs.get];
  external setAccessKey : t_htmlInputElement => string => unit = "" [@@bs.set];
  external list : t_htmlInputElement => Js.null Dom.htmlElement = "" [@@bs.get];
  external multiple : t_htmlInputElement => Js.boolean = "" [@@bs.get];
  external setMultiple : t_htmlInputElement => Js.boolean => unit = "" [@@bs.set];
  /* TODO files: FileList array. Returns the list of selected files. */
  external labels : t_htmlInputElement => array Dom.nodeList = "" [@@bs.get];
  external step : t_htmlInputElement => string = "" [@@bs.get];
  external setStep : t_htmlInputElement => string => unit = "" [@@bs.set];
  external valueAsDate : t_htmlInputElement => Js.null Js.Date.t = "" [@@bs.get];
  external setValueAsDate : t_htmlInputElement => Js.Date.t => unit = "" [@@bs.set];
  external valueAsNumber : t_htmlInputElement => float = "" [@@bs.get];

  external focus : unit = "" [@@bs.send.pipe: t_htmlInputElement];
  external blur : unit = "" [@@bs.send.pipe: t_htmlInputElement];
  external select : unit = "" [@@bs.send.pipe: t_htmlInputElement];
  external click : unit = "" [@@bs.send.pipe: t_htmlInputElement];
  external setSelectionRange : int => int => unit = "" [@@bs.send.pipe: t_htmlInputElement];
  external setSelectionRangeWithDirection : int => int => string => unit = "" [@@bs.send.pipe: t_htmlInputElement];
  /* TODO setRangeText */
  external setCustomValidity : string => unit = "" [@@bs.send.pipe: t_htmlInputElement];
  external checkValidity : Js.boolean = "" [@@bs.send.pipe: t_htmlInputElement];
  external stepDown : unit = "" [@@bs.send.pipe: t_htmlInputElement];
  external stepUp : unit = "" [@@bs.send.pipe: t_htmlInputElement];
};

include EventTargetRe.Impl { type t = Dom.htmlInputElement };
include NodeRe.Impl { type t = Dom.htmlInputElement };
include ElementRe.Impl { type t = Dom.htmlInputElement };
include HtmlElementRe.Impl { type t = Dom.htmlInputElement };
