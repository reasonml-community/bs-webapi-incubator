type t 'a;

external then_ : ('a => 'b) => t 'b = "then" [@@bs.send.pipe: t 'a];
external catch : ('e => unit) => t 'a = "" [@@bs.send.pipe: t 'a]; /* TODO: Include error in type? */
