type t = DomRe.eventTarget;

external addEventListener : string => (DomRe.event => unit) => unit = "" [@@bs.send.pipe: t];
external addEventListenerWithOptions : string => (DomRe.event => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send.pipe: t]; /* not widely supported */
external addEventListenerUseCapture : string => (DomRe.event => unit) => Js.boolean => unit = "addEventListener" [@@bs.send.pipe: t];
let addEventListenerUseCapture : string => (DomRe.event => unit) => t => unit = fun type_ listener self => addEventListenerUseCapture type_ listener (Js.Boolean.to_js_boolean true) self;
external removeEventListener : string => (DomRe.event => unit) => unit = "" [@@bs.send.pipe: t];
external removeEventListenerWithOptions : string => (DomRe.event => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send.pipe: t]; /* not widely supported */
external removeEventListenerUseCapture : string => (DomRe.event => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send.pipe: t];
let removeEventListenerUseCapture : string => (DomRe.event => unit) => t => unit = fun type_ listener self => removeEventListenerUseCapture type_ listener (Js.Boolean.to_js_boolean true) self;
external dispatchEvent : DomRe.event => Js.boolean = "" [@@bs.send.pipe: t];
