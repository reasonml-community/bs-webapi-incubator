type t = Dom.history;
type state; /* TODO: should be "anything that can be serializable" apparently */

/* a more ergonomic API would perhaps accept a Window.t directly instead of History.t */

external length : t => int = "" [@@bs.get];
external scrollRestoration : t => Js.boolean = "" [@@bs.get]; /* experimental */
external setScrollRestoration : t => Js.boolean => unit = "scrollRestoration" [@@bs.set]; /* experimental */
external state : t => state = "" [@@bs.get];

external back : unit = "" [@@bs.send.pipe: t];
external forward : unit = "" [@@bs.send.pipe: t];
external go : int => unit = "" [@@bs.send.pipe: t];
external pushState : state => string => string => unit = "" [@@bs.send.pipe: t];
external replaceState : state => string => string => unit = "" [@@bs.send.pipe: t];
