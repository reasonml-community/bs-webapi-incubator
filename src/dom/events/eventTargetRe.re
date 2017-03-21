module Impl (T: { type t; }) => {
  external asEventTarget : T.t => DomTypesRe.eventTarget = "%identity";

  external addEventListener : string => (DomTypesRe.event => unit) => unit = "" [@@bs.send.pipe: T.t];
  external addEventListenerWithOptions : string => (DomTypesRe.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send.pipe: T.t]; /* not widely supported */
  external addEventListenerUseCapture : string => (DomTypesRe.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send.pipe: T.t];
  let addEventListenerUseCapture : string => (DomTypesRe.event => unit) => T.t => unit = fun type_ listener self => addEventListenerUseCapture type_ listener Js.true_ self;
  external removeEventListener : string => (DomTypesRe.event => unit) => unit = "" [@@bs.send.pipe: T.t];
  external removeEventListenerWithOptions : string => (DomTypesRe.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send.pipe: T.t]; /* not widely supported */
  external removeEventListenerUseCapture : string => (DomTypesRe.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send.pipe: T.t];
  let removeEventListenerUseCapture : string => (DomTypesRe.event => unit) => T.t => unit = fun type_ listener self => removeEventListenerUseCapture type_ listener Js.true_ self;
  external dispatchEvent : DomTypesRe.event => bool = "" [@@bs.send.pipe: T.t];
};

include Impl { type t = DomTypesRe.eventTarget };
