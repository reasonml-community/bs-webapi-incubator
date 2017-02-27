type t 'a = CoreRe.promise 'a;

/* TODO: Include error in type? */

external make : (('a => unit) => ('e => unit) => unit) => t 'a = "Promise" [@@bs.new];

external then_ : ('a => 'b) => t 'b = "then" [@@bs.send.pipe: t 'a];
external and_then : ('a => t 'b) => t 'b = "then" [@@bs.send.pipe: t 'a];
external catch : ('e => unit) => t 'a = "" [@@bs.send.pipe: t 'a];
external or_ : ('e => 'b) => t 'b = "catch" [@@bs.send.pipe: t 'a]; /* non-standard name for "overload" */
external or_else : ('e => t 'b) => t 'b = "catch" [@@bs.send.pipe: t 'a]; /* non-standard name for "overload" */

external all : array (t 'a) => t (array 'a) = "Promise.all" [@@bs.val];
external race : array (t 'a) => t 'b = "Promise.race" [@@bs.val]; /* unsure about what the returned promise will hold */
external reject : 'e => t unit = "Promise.reject" [@@bs.val];
external resolve : 'a => t 'a = "Promise.resolve" [@@bs.val];
