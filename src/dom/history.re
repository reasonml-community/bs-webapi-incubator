type t = Dom.history;
type state; /* TODO: should be "anything that can be serializable" apparently */

/* a more ergonomic API would perhaps accept a Window.t directly instead of History.t */

external length : t => int = "" [@@bs.get];
external scrollRestoration : t => Js.boolean = "" [@@bs.get]; /* experimental */
external setScrollRestoration : t => Js.boolean => Js.boolean = "scrollRestoration" [@@bs.set]; /* experimental */
external state : t => state = "" [@@bs.get];

external back : t => unit = "" [@@bs.send];
external forward : t => unit = "" [@@bs.send];
external go : t => int => unit = "" [@@bs.send];
external pushState : t => state => string => string => unit = "" [@@bs.send];
external replaceState : t => state => string => string => unit = "" [@@bs.send];
