module Impl (Type: DomInternalRe.Type) => {
  type t_window = Type.t;

  /* This module is far from exhaustively implemented */

  external document : t_window => DomRe.document = "" [@@bs.get];
  external fullScreen : t_window => Js.boolean = "" [@@bs.get];
  let fullScreen : t_window => bool = fun self => Js.to_bool (fullScreen self);
  external history : t_window => DomRe.history = "" [@@bs.get];
  external innerWidth : t_window => int = "" [@@bs.get];
  external innerHeight : t_window => int = "" [@@bs.get];
  external location : t_window => DomRe.location = "" [@@bs.get];
  external setLocation : t_window => string => unit = "location" [@@bs.set];
  external parent : t_window => DomRe.window = "" [@@bs.get];
  external top : t_window => DomRe.window = "" [@@bs.get];
  external window : t_window => t_window = "" [@@bs.get]; /* This is really pointless I think, it's just here because window is the implicit global scope, and it's needed to be able to get a reference to it */

  external alert : string => unit = "" [@@bs.send.pipe: t_window];
  external confirm : string => Js.boolean = "" [@@bs.send.pipe: t_window];
  let confirm : string => t_window => bool = fun message self => Js.to_bool (confirm message self);
  external getComputedStyle : DomRe.element => DomRe.cssStyleDeclaration = "" [@@bs.send.pipe: t_window];
  external getComputedStyleWithPseudoElement : DomRe.element => string => DomRe.cssStyleDeclaration = "getComputedStyle" [@@bs.send.pipe: t_window];
  external prompt : string => string = "" [@@bs.send.pipe: t_window];
  external promptWithDefault : string => string => string = "prompt" [@@bs.send.pipe: t_window];
  external scroll : int => int => unit = "" [@@bs.send.pipe: t_window];

  external setOnLoad : t_window => (unit => unit) => unit = "onload" [@@bs.set];
};

include EventTargetRe.Impl { type t = DomRe.window };
include Impl { type t = DomRe.window };
