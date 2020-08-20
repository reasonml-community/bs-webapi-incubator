/**
 * Spec: https://html.spec.whatwg.org/multipage/form-elements.html#the-button-element
 */
module Impl = (T: {type t;}) => {
  type t_htmlButtonElement = T.t;

  // TODO
};

type t; // TODO: Dom.htmlButtonElement

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
