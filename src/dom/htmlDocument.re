type t = Dom.htmlDocument;

external asNode : t => Dom.node = "%identity";
external asEventTarget : t => Dom.eventTarget = "%identity";
external asDocument : t => Dom.document = "%identity";

external activeElement : t => Js.null Dom.element = "" [@@bs.get];
let activeElement : t => option Dom.element = fun self => Js.Null.to_opt (activeElement self);
external body : t => Js.null Dom.element = "" [@@bs.get]; /* returns Js.null HTMLBodyElement */
let body : t => option Dom.element = fun self => Js.Null.to_opt (body self);
external setBody : t => Dom.element => unit = "body" [@@bs.set]; /* accepth HTMLBodyElement */
external cookie : t => string = "" [@@bs.get];
external setCookie : t => string => unit = "cookie" [@@bs.set];
external defaultView : t => Js.null Dom.window = "" [@@bs.get];
let defautView : t => option Dom.window = fun self => Js.Null.to_opt (defaultView self);
external designMode : t => string /* enum */ = "" [@@bs.get];
external setDesignMode : t => string /* enum */ => unit = "designMode" [@@bs.set];
external dir : t => string /* enum */ = "" [@@bs.get];
external setDir : t => string /* enum */ => unit = "dir" [@@bs.set];
external domain : t => Js.null string = "" [@@bs.get];
let domain : t => option string = fun self => Js.Null.to_opt (domain self);
external setDomain : t => string => unit = "domain" [@@bs.set];
external embeds : t => array Dom.element = "" [@@bs.get]; /* returns NodeList, not array */
external forms : t => array Dom.element = "" [@@bs.get]; /* return HTMLCollection, not array */
external head : t => Dom.element = "" [@@bs.get]; /* returns HTMLHeadElement */
external images : t => array Dom.element = "" [@@bs.get]; /* return HTMLCollection, not array */
external lastModified : t => string = "" [@@bs.get];
external links : t => array Dom.element = "" [@@bs.get]; /* returns NodeList, not array */
external location : t => Dom.location = "" [@@bs.get];
external setLocation : t => string => unit = "location" [@@bs.set];
external plugins : t => array Dom.element = "" [@@bs.get]; /* returns HTMLCollection, not array */
external readyState : t => string /* enum */ = "" [@@bs.get];
external referrer : t => string = "" [@@bs.get];
external scripts : t => array Dom.element = "" [@@bs.get]; /* returns HTMLCOllection, not array */
external title : t => string = "" [@@bs.get];
external setTitle : t => string => unit = "title" [@@bs.set];
external url : t => string = "URL" [@@bs.get];

external close : unit = "" [@@bs.send.pipe: t];
external execCommand : string => Js.boolean => Js.null string => Js.boolean = "" [@@bs.send.pipe: t];
let execCommand : string => bool => option string => t => bool = fun command show value self => Js.to_bool (execCommand command (Js.Boolean.to_js_boolean show) (Js.Null.from_opt value) self);
external getElementsByName : string => array Dom.element = "" [@@bs.send.pipe: t]; /* returns NodelList, not array */
external getSelection : Dom.selection = "" [@@bs.send.pipe: t];
external hasFocus : Js.boolean = "" [@@bs.send.pipe: t];
let hasFocus : t => bool = fun self => Js.to_bool (hasFocus self);
external open_ : unit = "open" [@@bs.send.pipe: t];
external queryCommandEnabled : string => Js.boolean = "" [@@bs.send.pipe: t];
let queryCommandEnabled : string => t => bool = fun command self => Js.to_bool (queryCommandEnabled command self);
external queryCommandIndeterm : string => Js.boolean = "" [@@bs.send.pipe: t];
let queryCommandIndeterm : string => t => bool = fun command self => Js.to_bool (queryCommandIndeterm command self);
external queryCommandSupported : string => Js.boolean = "" [@@bs.send.pipe: t];
let queryCommandSupported : string => t => bool = fun command self => Js.to_bool (queryCommandSupported command self);
external queryCommandValue : string => string = "" [@@bs.send.pipe: t];
external write : string => unit = "" [@@bs.send.pipe: t];
external writeln : string => unit = "" [@@bs.send.pipe: t];
