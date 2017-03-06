external getItem : string => option string = "sessionStorage.getItem" [@@bs.val] [@@bs.return {null_to_opt: null_to_opt}];
external setItem : string => string => unit = "sessionStorage.setItem" [@@bs.val];
external removeItem : string => unit = "sessionStorage.removeItem" [@@bs.val];
external clear : unit => unit = "sessionStorage.clear" [@@bs.val];
external key : int => 'a = "sessionStorage.key" [@@bs.val];
let length () :int => [%bs.raw {|sessionStorage.length|}];
