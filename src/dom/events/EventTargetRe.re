module Impl (T: { type t; }) => {
  external asEventTarget : T.t => Dom.eventTarget = "%identity";

  external addEventListener : string => (Dom.event => unit) => unit = "" [@@bs.send.pipe: T.t];
  external addEventListenerWithOptions : string => (Dom.event => unit) => Js.t {. capture: Js.boolean, once: Js.boolean, passive: Js.boolean } => unit = "addEventListener" [@@bs.send.pipe: T.t]; /* not widely supported */
  external addEventListenerUseCapture : string => (Dom.event => unit) => _ [@bs.as {json|true|json}] => unit = "addEventListener" [@@bs.send.pipe: T.t];
  external removeEventListener : string => (Dom.event => unit) => unit = "" [@@bs.send.pipe: T.t];
  external removeEventListenerWithOptions : string => (Dom.event => unit) => Js.t {. capture: Js.boolean, passive: Js.boolean } => unit = "removeEventListener" [@@bs.send.pipe: T.t]; /* not widely supported */
  external removeEventListenerUseCapture : string => (Dom.event => unit) => _ [@bs.as {json|true|json}] => unit = "removeEventListener" [@@bs.send.pipe: T.t];
  external dispatchEvent : Dom.event => bool = "" [@@bs.send.pipe: T.t];
};

include Impl { type t = Dom.eventTarget };
