/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#htmlvideoelement
 */
module Impl = (T: {type t;}) => {
  type t_htmlVideoElement = T.t;

  external unsafeAsVideoElement: Dom.element => t_htmlVideoElement = "%identity";

  let asVideoElement = (el): option(t_htmlVideoElement) => switch(Webapi__Dom__Element.tagName(el)) {
    | "VIDEO" => el->unsafeAsVideoElement->Some
    | _ => None
  };

  /** Properties */
  [@bs.get] external height: t_htmlVideoElement => int = "height";
  [@bs.set] external setHeight: (t_htmlVideoElement, int) => unit = "height";
  [@bs.get] external poster: t_htmlVideoElement => string = "poster";
  [@bs.set] external setPoster: (t_htmlVideoElement, string) => unit = "poster";
  [@bs.get] external videoHeight: t_htmlVideoElement => int = "videoHeight";
  [@bs.get] external videoWidth: t_htmlVideoElement => int =  "videoWidth";
  [@bs.get] external width: t_htmlVideoElement => int = "width";
  [@bs.set] external setWidth: (t_htmlVideoElement, int) => unit = "width";
};

type t; // TODO: Dom.htmlVideoElement

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlMediaElement.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
