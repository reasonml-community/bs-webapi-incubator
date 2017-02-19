module Impl (Type: DomInternalRe.Type) => {
  type t_htmlDocument = Type.t;

  type designMode =
  | On
  | Off
  | Unknown;
  let encodeDesignMode = fun /* internal */
  | On      => "on"
  | Off     => "off"
  | Unknown => "";
  let decodeDesignMode = fun /* internal */
  | "on"  => On
  | "off" => Off
  | _     => Unknown;

  type readyState =
  | Loading
  | Interactive
  | Complete
  | Unknown;
  let decodeReadyState = fun /* internal */
  | "loading"     => Loading
  | "interactive" => Interactive
  | "complete"    => Complete
  | _             => Unknown;

  external activeElement : t_htmlDocument => Js.null DomRe.element = "" [@@bs.get];
  let activeElement : t_htmlDocument => option DomRe.element = fun self => Js.Null.to_opt (activeElement self);
  external body : t_htmlDocument => Js.null DomRe.element = "" [@@bs.get]; /* returns Js.null HTMLBodyElement */
  let body : t_htmlDocument => option DomRe.element = fun self => Js.Null.to_opt (body self);
  external setBody : t_htmlDocument => DomRe.element => unit = "body" [@@bs.set]; /* accepth HTMLBodyElement */
  external cookie : t_htmlDocument => string = "" [@@bs.get];
  external setCookie : t_htmlDocument => string => unit = "cookie" [@@bs.set];
  external defaultView : t_htmlDocument => Js.null DomRe.window = "" [@@bs.get];
  let defautView : t_htmlDocument => option DomRe.window = fun self => Js.Null.to_opt (defaultView self);
  external designMode : t_htmlDocument => string /* designMode enum */ = "" [@@bs.get];
  let designMode : t_htmlDocument => designMode = fun self => decodeDesignMode (designMode self);
  external setDesignMode : t_htmlDocument => string /* designMode enum */ => unit = "designMode" [@@bs.set];
  let setDesignMode : t_htmlDocument => designMode => unit = fun self value => setDesignMode self (encodeDesignMode value);
  external dir : t_htmlDocument => string /* dir enum */ = "" [@@bs.get];
  let dir : t_htmlDocument => DomRe.dir = fun self => DomRe.decodeDir (dir self);
  external setDir : t_htmlDocument => string /* dir enum */ => unit = "dir" [@@bs.set];
  let setDir : t_htmlDocument => DomRe.dir => unit = fun self value => setDir self (DomRe.encodeDir value);
  external domain : t_htmlDocument => Js.null string = "" [@@bs.get];
  let domain : t_htmlDocument => option string = fun self => Js.Null.to_opt (domain self);
  external setDomain : t_htmlDocument => string => unit = "domain" [@@bs.set];
  external embeds : t_htmlDocument => DomRe.nodeList = "" [@@bs.get];
  external forms : t_htmlDocument => DomRe.htmlCollection = "" [@@bs.get];
  external head : t_htmlDocument => DomRe.element = "" [@@bs.get]; /* returns HTMLHeadElement */
  external images : t_htmlDocument => DomRe.htmlCollection = "" [@@bs.get];
  external lastModified : t_htmlDocument => string = "" [@@bs.get];
  external links : t_htmlDocument => DomRe.nodeList = "" [@@bs.get];
  external location : t_htmlDocument => DomRe.location = "" [@@bs.get];
  external setLocation : t_htmlDocument => string => unit = "location" [@@bs.set];
  external plugins : t_htmlDocument => DomRe.htmlCollection = "" [@@bs.get];
  external readyState : t_htmlDocument => string /* enum */ = "" [@@bs.get];
  let readyState : t_htmlDocument => readyState = fun self => decodeReadyState (readyState self);
  external referrer : t_htmlDocument => string = "" [@@bs.get];
  external scripts : t_htmlDocument => DomRe.htmlCollection = "" [@@bs.get];
  external title : t_htmlDocument => string = "" [@@bs.get];
  external setTitle : t_htmlDocument => string => unit = "title" [@@bs.set];
  external url : t_htmlDocument => string = "URL" [@@bs.get];

  external close : unit = "" [@@bs.send.pipe: t_htmlDocument];
  external execCommand : string => Js.boolean => Js.null string => Js.boolean = "" [@@bs.send.pipe: t_htmlDocument];
  let execCommand : string => bool => option string => t_htmlDocument => bool = fun command show value self => Js.to_bool (execCommand command (Js.Boolean.to_js_boolean show) (Js.Null.from_opt value) self);
  external getElementsByName : string => DomRe.nodeList = "" [@@bs.send.pipe: t_htmlDocument];
  external getSelection : DomRe.selection = "" [@@bs.send.pipe: t_htmlDocument];
  external hasFocus : Js.boolean = "" [@@bs.send.pipe: t_htmlDocument];
  let hasFocus : t_htmlDocument => bool = fun self => Js.to_bool (hasFocus self);
  external open_ : unit = "open" [@@bs.send.pipe: t_htmlDocument];
  external queryCommandEnabled : string => Js.boolean = "" [@@bs.send.pipe: t_htmlDocument];
  let queryCommandEnabled : string => t_htmlDocument => bool = fun command self => Js.to_bool (queryCommandEnabled command self);
  external queryCommandIndeterm : string => Js.boolean = "" [@@bs.send.pipe: t_htmlDocument];
  let queryCommandIndeterm : string => t_htmlDocument => bool = fun command self => Js.to_bool (queryCommandIndeterm command self);
  external queryCommandSupported : string => Js.boolean = "" [@@bs.send.pipe: t_htmlDocument];
  let queryCommandSupported : string => t_htmlDocument => bool = fun command self => Js.to_bool (queryCommandSupported command self);
  external queryCommandValue : string => string = "" [@@bs.send.pipe: t_htmlDocument];
  external write : string => unit = "" [@@bs.send.pipe: t_htmlDocument];
  external writeln : string => unit = "" [@@bs.send.pipe: t_htmlDocument];
};

include NodeRe.Impl { type t = DomRe.htmlDocument };
include EventTargetRe.Impl { type t = DomRe.htmlDocument };
include DocumentRe.Impl { type t = DomRe.htmlDocument };
include Impl { type t = DomRe.htmlDocument };
