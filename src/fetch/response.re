type t;

/* TODO: type Headers */
external ok : t => Js.boolean = "" [@@bs.get];
external redirected : t => Js.boolean = "" [@@bs.get];
external status : t => int = "" [@@bs.get];
external statusText : t => string = "" [@@bs.get];
external type_ : t => string = "type" [@@bs.get];
external url : t => string = "" [@@bs.get];

/** body getters **/
external json : t => Js.t 'a = "" [@@bs.send];
external text : t => string = "" [@@bs.send];
