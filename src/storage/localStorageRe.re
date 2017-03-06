external getItem : string => option string = "localStorage.getItem" [@@bs.val] [@@bs.return {null_to_opt: null_to_opt}];
external setItem : string => string => unit = "localStorage.setItem" [@@bs.val];
external removeItem : string => unit = "localStorage.removeItem" [@@bs.val];
external clear : unit => unit = "localStorage.clear" [@@bs.val];
external key : int => 'a = "localStorage.key" [@@bs.val];
let length () :int => [%bs.raw {|localStorage.length|}];
