module Impl = (T: {type t;}) => {
  type t_htmlFormElement = T.t;

  /* TODO: elements: HTMLFormControlsCollection */
  [@bs.get] external length : t_htmlFormElement => int = "";
  [@bs.get] external name : t_htmlFormElement => string = "";
  [@bs.set] external setName : (t_htmlFormElement, string) => unit = "name";
  [@bs.get] external method : t_htmlFormElement => string = "";
  [@bs.set] external setMethod : (t_htmlFormElement, string) => unit = "method";
  [@bs.get] external target : t_htmlFormElement => string = "";
  [@bs.set] external setTarget : (t_htmlFormElement, string) => unit = "target";
  [@bs.get] external action : t_htmlFormElement => string = "";
  [@bs.set] external setAction : (t_htmlFormElement, string) => unit = "action";
  [@bs.get] external acceptCharset : t_htmlFormElement => string = "";
  [@bs.set] external setAcceptCharset : (t_htmlFormElement, string) => unit = "acceptCharset";
  [@bs.get] external autocomplete : t_htmlFormElement => string = "";
  [@bs.set] external setAutocomplete : (t_htmlFormElement, string) => unit = "autocomplete";
  [@bs.get] external noValidate : t_htmlFormElement => bool = "";
  [@bs.set] external setNoValidate : (t_htmlFormElement, bool) => unit = "noValidate";
  [@bs.get] external enctype : t_htmlFormElement => string = "";
  [@bs.set] external setEnctype : (t_htmlFormElement, string) => unit = "enctype";
  [@bs.get] external encoding : t_htmlFormElement => string = "";
  [@bs.set] external setEncoding : (t_htmlFormElement, string) => unit = "encoding";

  [@bs.send.pipe: t_htmlFormElement] external submit : unit = "";
  [@bs.send.pipe: t_htmlFormElement] external reset : unit = "";
  [@bs.send.pipe: t_htmlFormElement] external checkValidity : bool = "";
  [@bs.send.pipe: t_htmlFormElement] external reportValidity : bool = "";
};

include EventTargetRe.Impl({
  type t = Dom.htmlFormElement;
});
include NodeRe.Impl({
  type t = Dom.htmlFormElement;
});
include ElementRe.Impl({
  type t = Dom.htmlFormElement;
});
include HtmlElementRe.Impl({
  type t = Dom.htmlFormElement;
});
