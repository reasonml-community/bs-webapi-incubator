type t 'a;
type error;

external then_ : ('a => 'b) => t 'b = "then" [@@bs.send.pipe: t 'a];
external catch : (error => unit) => t 'a = "" [@@bs.send.pipe: t 'a];
