/**
 * Spec: https://html.spec.whatwg.org/multipage/form-elements.html#the-output-element
 */
module Impl = (T: {type t;}) => {
  type t_htmlOutputElement = T.t;

  // TODO
};

type t; // TODO: Dom.htmlOutputElement

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
