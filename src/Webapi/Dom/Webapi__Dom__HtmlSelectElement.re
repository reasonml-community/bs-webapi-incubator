/**
 * Spec: https://html.spec.whatwg.org/multipage/form-elements.html#the-select-element
 */
module Impl = (T: {type t;}) => {
  type t_htmlSelectElement = T.t;

  external unsafeOfElement: Dom.element => t_htmlSelectElement = "%identity";
  external asElement: t_htmlSelectElement => Dom.element = "%identity";

  let ofElement = (el): option(t_htmlSelectElement) => switch(Webapi__Dom__Element.tagName(el)) {
    | "SELECT" => el->unsafeOfElement->Some
    | _ => None
  };

  // TODO

  /** Properties */

  [@bs.get] external options: t_htmlSelectElement => Webapi__Dom__HtmlOptionsCollection.t = "options";
};

type t; // TODO: Dom.htmlSelectElement

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
