module Impl (T: { type t; }) => {
  type t_htmlDocument = T.t;

  external activeElement : t_htmlDocument => option DomTypesRe.element = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external body : t_htmlDocument => option DomTypesRe.element = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}]; /* returns option HTMLBodyElement */
  external setBody : t_htmlDocument => DomTypesRe.element => unit = "body" [@@bs.set]; /* accepth HTMLBodyElement */
  external cookie : t_htmlDocument => string = "" [@@bs.get];
  external setCookie : t_htmlDocument => string => unit = "cookie" [@@bs.set];
  external defaultView : t_htmlDocument => option DomTypesRe.window = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external designMode : t_htmlDocument => string /* designMode enum */ = "" [@@bs.get];
  let designMode : t_htmlDocument => DomTypesRe.designMode = fun self => DomTypesRe.decodeDesignMode (designMode self);
  external setDesignMode : t_htmlDocument => string /* designMode enum */ => unit = "designMode" [@@bs.set];
  let setDesignMode : t_htmlDocument => DomTypesRe.designMode => unit = fun self value => setDesignMode self (DomTypesRe.encodeDesignMode value);
  external dir : t_htmlDocument => string /* dir enum */ = "" [@@bs.get];
  let dir : t_htmlDocument => DomTypesRe.dir = fun self => DomTypesRe.decodeDir (dir self);
  external setDir : t_htmlDocument => string /* dir enum */ => unit = "dir" [@@bs.set];
  let setDir : t_htmlDocument => DomTypesRe.dir => unit = fun self value => setDir self (DomTypesRe.encodeDir value);
  external domain : t_htmlDocument => option string = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external setDomain : t_htmlDocument => string => unit = "domain" [@@bs.set];
  external embeds : t_htmlDocument => DomTypesRe.nodeList = "" [@@bs.get];
  external forms : t_htmlDocument => DomTypesRe.htmlCollection = "" [@@bs.get];
  external head : t_htmlDocument => DomTypesRe.element = "" [@@bs.get]; /* returns HTMLHeadElement */
  external images : t_htmlDocument => DomTypesRe.htmlCollection = "" [@@bs.get];
  external lastModified : t_htmlDocument => string = "" [@@bs.get];
  external links : t_htmlDocument => DomTypesRe.nodeList = "" [@@bs.get];
  external location : t_htmlDocument => DomTypesRe.location = "" [@@bs.get];
  external setLocation : t_htmlDocument => string => unit = "location" [@@bs.set];
  external plugins : t_htmlDocument => DomTypesRe.htmlCollection = "" [@@bs.get];
  external readyState : t_htmlDocument => string /* enum */ = "" [@@bs.get];
  let readyState : t_htmlDocument => DomTypesRe.readyState = fun self => DomTypesRe.decodeReadyState (readyState self);
  external referrer : t_htmlDocument => string = "" [@@bs.get];
  external scripts : t_htmlDocument => DomTypesRe.htmlCollection = "" [@@bs.get];
  external title : t_htmlDocument => string = "" [@@bs.get];
  external setTitle : t_htmlDocument => string => unit = "title" [@@bs.set];
  external url : t_htmlDocument => string = "URL" [@@bs.get];

  external close : unit = "" [@@bs.send.pipe: t_htmlDocument];
  external execCommand : string => Js.boolean => Js.null string => bool = "" [@@bs.send.pipe: t_htmlDocument];
  let execCommand : string => bool => option string => t_htmlDocument => bool = fun command show value self => execCommand command (Js.Boolean.to_js_boolean show) (Js.Null.from_opt value) self;
  external getElementsByName : string => DomTypesRe.nodeList = "" [@@bs.send.pipe: t_htmlDocument];
  external getSelection : DomTypesRe.selection = "" [@@bs.send.pipe: t_htmlDocument];
  external hasFocus : bool = "" [@@bs.send.pipe: t_htmlDocument];
  external open_ : unit = "open" [@@bs.send.pipe: t_htmlDocument];
  external queryCommandEnabled : string => bool = "" [@@bs.send.pipe: t_htmlDocument];
  external queryCommandIndeterm : string => bool = "" [@@bs.send.pipe: t_htmlDocument];
  external queryCommandSupported : string => bool = "" [@@bs.send.pipe: t_htmlDocument];
  external queryCommandValue : string => string = "" [@@bs.send.pipe: t_htmlDocument];
  external write : string => unit = "" [@@bs.send.pipe: t_htmlDocument];
  external writeln : string => unit = "" [@@bs.send.pipe: t_htmlDocument];
};

include NodeRe.Impl { type t = DomTypesRe.htmlDocument };
include EventTargetRe.Impl { type t = DomTypesRe.htmlDocument };
include DocumentRe.Impl { type t = DomTypesRe.htmlDocument };
include Impl { type t = DomTypesRe.htmlDocument };
