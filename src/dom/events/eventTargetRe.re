module Impl (T: { type t; }) => {
  external asEventTarget : T.t => Dom.eventTarget = "%identity";

  external addEventListener : string => (Dom.event => unit) => unit = "" [@@bs.send.pipe: T.t];
  external addEventListenerWithOptions : string => (Dom.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send.pipe: T.t]; /* not widely supported */
  external addEventListenerUseCapture : string => (Dom.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send.pipe: T.t];
  /*let addEventListenerUseCapture : string => (Dom.event => unit) => T.t => unit = fun type_ listener self => addEventListenerUseCapture type_ listener Js.true_ self;*/ /* temporarily removed to reduce code size */
  external removeEventListener : string => (Dom.event => unit) => unit = "" [@@bs.send.pipe: T.t];
  external removeEventListenerWithOptions : string => (Dom.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send.pipe: T.t]; /* not widely supported */
  external removeEventListenerUseCapture : string => (Dom.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send.pipe: T.t];
  /*let removeEventListenerUseCapture : string => (Dom.event => unit) => T.t => unit = fun type_ listener self => removeEventListenerUseCapture type_ listener Js.true_ self;*/ /* temporarily removed to reduce code size */
  external dispatchEvent : Dom.event => bool = "" [@@bs.send.pipe: T.t];
};

include Impl { type t = Dom.eventTarget };
