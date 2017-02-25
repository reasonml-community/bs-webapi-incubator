type t = DomTypesRe.domTokenList;

external length : t => int = "" [@@bs.get];

external item : int => Js.undefined string = "" [@@bs.send.pipe: t];
let item : int => t => option string = fun index self => Js.Undefined.to_opt (item index self);

external add : string => unit = "" [@@bs.send.pipe: t];
external addMany : array string => unit = "add" [@@bs.send.pipe: t] [@@bs.splice];
external contains : string => Js.boolean = "contains" [@@bs.send.pipe: t];
let contains : string => t => bool = fun token self => Js.to_bool (contains token self);
/* entries: iterator API, should have language support */
external forEach : (string => int => unit) => unit = "" [@@bs.send.pipe: t];
/* keys: iterator API, should have language support */
external remove : string => unit = "" [@@bs.send.pipe: t];
external removeMany : array string => unit = "remove" [@@bs.send.pipe: t] [@@bs.splice];
external replace : string => string => unit = "" [@@bs.send.pipe: t]; /* experimental */
external supports : string => Js.boolean = "" [@@bs.send.pipe: t]; /* experimental, Content Management Level 1 */
let supports : string => t => bool = fun token self => Js.to_bool (supports token self); /* experimental, Content Management Level 1 */
external toggle : string => Js.boolean = "" [@@bs.send.pipe: t];
let toggle : string => t => bool = fun token self => Js.to_bool (toggle token self);
external toggleForced : string => Js.boolean => Js.boolean = "toggle" [@@bs.send.pipe: t];
let toggleForced : string => t => bool = fun token self => Js.to_bool (toggleForced token Js.true_ self);
external toString : string = "" [@@bs.send.pipe: t];
/* values: iterator API, should have language support */
