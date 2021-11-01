/**
 * https://html.spec.whatwg.org/multipage/iframe-embed-object.html#the-object-element
 */
module Impl = (T: {type t;}) => {
  type t_htmlObjectElement = T.t;

  // TODO
};

type t; // TODO: Dom.htmlObjectElement

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
