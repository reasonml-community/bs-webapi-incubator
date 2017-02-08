type t = Dom.eventTarget;

external addEventListener : string /* enum */ => (Dom.event => unit) => unit = "" [@@bs.send.pipe: t];
external addEventListenerWithOptions : string /* enum */ => (Dom.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send.pipe: t]; /* not widely supported */
external addEventListenerUseCapture : string /* enum */ => (Dom.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send.pipe: t];
external removeEventListener : string /* enum */ => (Dom.event => unit) => unit = "" [@@bs.send.pipe: t];
external removeEventListenerWithOptions : string /* enum */ => (Dom.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send.pipe: t]; /* not widely supported */
external removeEventListenerUseCapture : string /* enum */ => (Dom.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send.pipe: t];
external dispatchEvent : Dom.event => Js.boolean = "" [@@bs.send.pipe: t];
