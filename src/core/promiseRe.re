/* 'res - type the promise will be resolved with
   'rej - type the promise will be rejected with */
type t 'res 'rej = CoreRe.promise 'res 'rej;

external make : (('res => unit) => ('rej => unit) => unit) => t 'res 'rej = "Promise" [@@bs.new];

external resolve : 'res => t 'res 'a = "Promise.resolve" [@@bs.val];
external reject : 'rej => t 'a 'rej = "Promise.reject" [@@bs.val];
external all : array (t 'res 'rej) => t (array 'res) 'rej = "Promise.all" [@@bs.val];
external race : array (t 'res 'rej) => t 'res 'rej = "Promise.race" [@@bs.val];

external then_ : ('res => 'a) => t 'a 'b = "then" [@@bs.send.pipe: t 'res 'rej'];
external andThen : ('res => t 'a 'b) => t 'a 'b = "then" [@@bs.send.pipe: t 'res 'rej];
external and_then : ('res => t 'a unit) => t 'a unit = "then" [@@bs.send.pipe: t 'res 'rej]
[@@ocaml.deprecated "Please use `andThen` instead"];
external catch : ('rej => unit) => t 'a 'b = "catch" [@@bs.send.pipe: t 'res 'rej];
external or_ : ('rej => 'a) => t 'a 'b = "catch" [@@bs.send.pipe: t 'res 'rej];
external orElse : ('rej => t 'a 'b) => t 'a 'b = "catch" [@@bs.send.pipe: t 'res 'rej];
external or_else : ('rej => t 'a unit) => t 'a unit = "catch" [@@bs.send.pipe: t 'res 'rej]
[@@ocaml.deprecated "Please use `orElse` instead"];
