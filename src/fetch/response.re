type t;

/* TODO: type Headers */
external ok : t => Js.boolean = "" [@@bs.get];
let ok : t => bool = fun self => Js.to_bool (ok self);
external redirected : t => Js.boolean = "" [@@bs.get];
let redirected : t => bool = fun self => Js.to_bool (redirected self);
external status : t => int = "" [@@bs.get];
external statusText : t => string = "" [@@bs.get];
external type_ : t => string = "type" [@@bs.get];
external url : t => string = "" [@@bs.get];

/** body getters **/
external json : Js.t 'a = "" [@@bs.send.pipe: t];
external text : string = "" [@@bs.send.pipe: t];
