type t = Dom.eventTarget;

module Interface = {
  external addEventListener : 't => string /* enum */ => (Dom.event => unit) => unit = "" [@@bs.send];
  external addEventListenerWithOptions : 't => string /* enum */ => (Dom.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send]; /* not widely supported */
  external addEventListenerUseCapture : 't => string /* enum */ => (Dom.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send];
  external removeEventListener : 't => string /* enum */ => (Dom.event => unit) => unit = "" [@@bs.send];
  external removeEventListenerWithOptions : 't => string /* enum */ => (Dom.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send]; /* not widely supported */
  external removeEventListenerUseCapture : 't => string /* enum */ => (Dom.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send];
  external dispatchEvent : 't => Dom.event => Js.boolean = "" [@@bs.send];
};

include Interface;
