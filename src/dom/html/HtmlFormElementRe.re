module Impl (T: { type t; }) => {
  type t_htmlFormElement = T.t;

  /* TODO elements: HTMLFormControlsCollection */
  external length : t_htmlFormElement => int = "" [@@bs.get];
  external name : t_htmlFormElement => string = "" [@@bs.get];
  external setName : t_htmlFormElement => string => unit = "" [@@bs.set];
  external method : t_htmlFormElement => string = "" [@@bs.get];
  external setMethod : t_htmlFormElement => string => unit = "" [@@bs.set];
  external target : t_htmlFormElement => string = "" [@@bs.get];
  external setTarget : t_htmlFormElement => string => unit = "" [@@bs.set];
  external action : t_htmlFormElement => string = "" [@@bs.get];
  external setAction : t_htmlFormElement => string => unit = "" [@@bs.set];
  external acceptCharset : t_htmlFormElement => string = "" [@@bs.get];
  external setAcceptCharset : t_htmlFormElement => string => unit = "" [@@bs.set];
  external autocomplete : t_htmlFormElement => string = "" [@@bs.get];
  external setAutocomplete : t_htmlFormElement => string => unit = "" [@@bs.set];
  external formNoValidate : t_htmlFormElement => Js.boolean = "" [@@bs.get];
  external setFormNoValidate : t_htmlFormElement => Js.boolean => unit = "" [@@bs.set];
  external enctype : t_htmlFormElement => string = "" [@@bs.get];
  external setEnctype : t_htmlFormElement => string => unit = "" [@@bs.set];
  let encoding = enctype;
  let setEncoding = setEnctype;

  external submit : unit = "" [@@bs.send.pipe: t_htmlFormElement];
  external reset : unit = "" [@@bs.send.pipe: t_htmlFormElement];
  external checkValidity : Js.boolean = "" [@@bs.send.pipe: t_htmlFormElement];
  external reportValidity : Js.boolean = "" [@@bs.send.pipe: t_htmlFormElement];
};

include EventTargetRe.Impl { type t = Dom.htmlFormElement };
include NodeRe.Impl { type t = Dom.htmlFormElement };
include ElementRe.Impl { type t = Dom.htmlFormElement };
include HtmlElementRe.Impl { type t = Dom.htmlFormElement };
