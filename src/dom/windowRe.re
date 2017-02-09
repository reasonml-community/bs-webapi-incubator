type t = DomRe.window;

external asEventTarget : t => DomRe.eventTarget = "%identity";

/* This module is far from exhaustively implemented */

external document : t => DomRe.document = "" [@@bs.get];
external fullScreen : t => Js.boolean = "" [@@bs.get];
let fullScreen : t => bool = fun self => Js.to_bool (fullScreen self);
external history : t => DomRe.history = "" [@@bs.get];
external innerWidth : t => int = "" [@@bs.get];
external innerHeight : t => int = "" [@@bs.get];
external location : t => DomRe.location = "" [@@bs.get];
external setLocation : t => string => unit = "location" [@@bs.set];
external parent : t => t = "" [@@bs.get];
external top : t => t = "" [@@bs.get];
external window : t => t = "" [@@bs.get];

external alert : string => unit = "" [@@bs.send.pipe: t];
external confirm : string => Js.boolean = "" [@@bs.send.pipe: t];
let confirm : string => t => bool = fun message self => Js.to_bool (confirm message self);
external getComputedStyle : DomRe.element => DomRe.cssStyleDeclaration = "" [@@bs.send.pipe: t];
external getComputedStyleWithPseudoElement : DomRe.element => string => DomRe.cssStyleDeclaration = "getComputedStyle" [@@bs.send.pipe: t];
external prompt : string => string = "" [@@bs.send.pipe: t];
external promptWithDefault : string => string => string = "prompt" [@@bs.send.pipe: t];
external scroll : int => int => unit = "" [@@bs.send.pipe: t];

external setOnLoad : t => (unit => unit) => unit = "onload" [@@bs.set];
