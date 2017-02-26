module Impl (Type: DomInternalRe.Type) => {
  type t_eventtarget = Type.t;

  external asEventTarget : t_eventtarget => DomTypesRe.eventTarget = "%identity";

  external addEventListener : string => (DomTypesRe.event => unit) => unit = "" [@@bs.send.pipe: t_eventtarget];
  external addEventListenerWithOptions : string => (DomTypesRe.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send.pipe: t_eventtarget]; /* not widely supported */
  external addEventListenerUseCapture : string => (DomTypesRe.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send.pipe: t_eventtarget];
  let addEventListenerUseCapture : string => (DomTypesRe.event => unit) => t_eventtarget => unit = fun type_ listener self => addEventListenerUseCapture type_ listener Js.true_ self;
  external removeEventListener : string => (DomTypesRe.event => unit) => unit = "" [@@bs.send.pipe: t_eventtarget];
  external removeEventListenerWithOptions : string => (DomTypesRe.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send.pipe: t_eventtarget]; /* not widely supported */
  external removeEventListenerUseCapture : string => (DomTypesRe.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send.pipe: t_eventtarget];
  let removeEventListenerUseCapture : string => (DomTypesRe.event => unit) => t_eventtarget => unit = fun type_ listener self => removeEventListenerUseCapture type_ listener Js.true_ self;
  external dispatchEvent : DomTypesRe.event => Js.boolean = "" [@@bs.send.pipe: t_eventtarget];
};

include Impl { type t = DomTypesRe.eventTarget };
