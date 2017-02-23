module Impl (Type: DomInternalRe.Type) => {
  type t_eventtarget = Type.t;

  external asEventTarget : t_eventtarget => DomRe.eventTarget = "%identity";

  external addEventListener : string => (DomRe.event => unit) => unit = "" [@@bs.send.pipe: t_eventtarget];
  external addEventListenerWithOptions : string => (DomRe.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send.pipe: t_eventtarget]; /* not widely supported */
  external addEventListenerUseCapture : string => (DomRe.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send.pipe: t_eventtarget];
  let addEventListenerUseCapture : string => (DomRe.event => unit) => t_eventtarget => unit = fun type_ listener self => addEventListenerUseCapture type_ listener Js.true_ self;
  external removeEventListener : string => (DomRe.event => unit) => unit = "" [@@bs.send.pipe: t_eventtarget];
  external removeEventListenerWithOptions : string => (DomRe.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send.pipe: t_eventtarget]; /* not widely supported */
  external removeEventListenerUseCapture : string => (DomRe.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send.pipe: t_eventtarget];
  let removeEventListenerUseCapture : string => (DomRe.event => unit) => t_eventtarget => unit = fun type_ listener self => removeEventListenerUseCapture type_ listener Js.true_ self;
  external dispatchEvent : DomRe.event => Js.boolean = "" [@@bs.send.pipe: t_eventtarget];
};

include Impl { type t = DomRe.eventTarget };
