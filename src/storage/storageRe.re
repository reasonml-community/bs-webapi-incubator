type t;

external getItem : string => option string = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt]
[@@ocaml.deprecated "Use Dom.Storage.getItem instead"];

external setItem : string => string => unit = "" [@@bs.send.pipe: t]
[@@ocaml.deprecated "Use Dom.Storage.getItem instead"];

external removeItem : string => unit = "" [@@bs.send.pipe: t]
[@@ocaml.deprecated "Use Dom.Storage.removeItem instead"];

external clear : unit = "" [@@bs.send.pipe: t]
[@@ocaml.deprecated "Use Dom.Storage.clear instead"];

external key : int => option string = "" [@@bs.send.pipe: t] [@@bs.return null_to_opt]
[@@ocaml.deprecated "Use Dom.Storage.key instead"];

external length : t => int = "" [@@bs.get]
[@@ocaml.deprecated "Use Dom.Storage.length  instead"];


external localStorage : t = "" [@@bs.val]
[@@ocaml.deprecated "Use Dom.Storage.localStorage instead"];

external sessionStorage : t = "" [@@bs.val]
[@@ocaml.deprecated "Use Dom.Storage.sessionStorage instead"];

