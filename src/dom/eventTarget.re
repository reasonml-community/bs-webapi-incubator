type t = Dom.eventTarget;

external addEventListener : string /* enum */ => (Dom.event => unit) => unit = "" [@@bs.send.pipe: t];
external addEventListenerWithOptions : string /* enum */ => (Dom.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send.pipe: t]; /* not widely supported */
external addEventListenerUseCapture : string /* enum */ => (Dom.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send.pipe: t];
let addEventListenerUseCapture : string /* enum */ => (Dom.event => unit) => t => unit = fun type_ listener self => addEventListenerUseCapture type_ listener (Js.Boolean.to_js_boolean true) self;
external removeEventListener : string /* enum */ => (Dom.event => unit) => unit = "" [@@bs.send.pipe: t];
external removeEventListenerWithOptions : string /* enum */ => (Dom.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send.pipe: t]; /* not widely supported */
external removeEventListenerUseCapture : string /* enum */ => (Dom.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send.pipe: t];
let removeEventListenerUseCapture : string /* enum */ => (Dom.event => unit) => t => unit = fun type_ listener self => removeEventListenerUseCapture type_ listener (Js.Boolean.to_js_boolean true) self;
external dispatchEvent : Dom.event => Js.boolean = "" [@@bs.send.pipe: t];
