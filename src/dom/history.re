type t = Dom.history;
type state; /* TODO: should be "anything that can be serializable" apparently */

external length : t => int = "" [@@bs.get];
external scrollRestoration : t => Js.boolean = "" [@@bs.get]; /* experimental */
let scrollRestoration : t => bool = fun self => Js.to_bool (scrollRestoration self);
external setScrollRestoration : t => Js.boolean => unit = "scrollRestoration" [@@bs.set]; /* experimental */
let setScrollRestoration : t => bool => unit = fun self value => setScrollRestoration self (Js.Boolean.to_js_boolean value);
external state : t => state = "" [@@bs.get];

external back : unit = "" [@@bs.send.pipe: t];
external forward : unit = "" [@@bs.send.pipe: t];
external go : int => unit = "" [@@bs.send.pipe: t];
external pushState : state => string => string => unit = "" [@@bs.send.pipe: t];
external replaceState : state => string => string => unit = "" [@@bs.send.pipe: t];
