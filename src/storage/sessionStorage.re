external getItem : string => Js.null string = "sessionStorage.getItem" [@@bs.val];
external setItem : string => string => unit = "sessionStorage.setItem" [@@bs.val];
external removeItem : string => unit = "sessionStorage.removeItem" [@@bs.val];
external clear : unit => unit = "sessionStorage.clear" [@@bs.val];
external key : int => 'a = "sessionStorage.key" [@@bs.val];
let length () :int => [%bs.raw {|sessionStorage.length|}];
