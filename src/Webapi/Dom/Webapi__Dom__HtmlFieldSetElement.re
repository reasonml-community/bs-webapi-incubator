/**
 * Spec: https://html.spec.whatwg.org/multipage/form-elements.html#the-fieldset-element
 */
module Impl = (T: {type t;}) => {
  type t_htmlFieldSetElement = T.t;

  // TODO
};

type t; // TODO: Dom.htmlFieldSetElement

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
