external stringify : 'a => string = "JSON.stringify" [@@bs.val]
[@@ocaml.deprecated "Use `Js.Json.stringify` instead"];

external parse : string => 'a = "JSON.parse" [@@bs.val]
[@@ocaml.deprecated "Use `Js.Json.parse` instead"];
