type t 'a = CoreRe.promise 'a;

external make : (('a => unit) => ('e => unit) => unit) => t 'a = "Promise" [@@bs.new];

external then_ : ('a => 'b) => t 'b = "then" [@@bs.send.pipe: t 'a];
external catch : ('e => unit) => t 'a = "" [@@bs.send.pipe: t 'a]; /* TODO: Include error in type? */

external all : array (t 'a) => t (array 'a) = "Promise.all" [@@bs.val];
