type t = Dom.window;

external asEventTarget : t => Dom.eventTarget = "%identity";

/* This module is far from exhaustive */

external document : t => Dom.document = "" [@@bs.get];
external fullScreen : t => Js.boolean = "" [@@bs.get];
external history : t => Dom.history = "" [@@bs.get];
external innerWidth : t => int = "" [@@bs.get];
external innerHeight : t => int = "" [@@bs.get];
external location : t => Dom.location = "" [@@bs.get];
external setLocation : t => string => unit = "location" [@@bs.set];
external parent : t => t = "" [@@bs.get];
external top : t => t = "" [@@bs.get];
external window : t => t = "" [@@bs.get];

external alert : string => unit = "" [@@bs.send.pipe: t];
external confirm : string => Js.boolean = "" [@@bs.send.pipe: t];
external getComputedStyle : Dom.element => Dom.cssStyleDeclaration = "" [@@bs.send.pipe: t];
external getComputedStyleWithPseudoElement : Dom.element => string => Dom.cssStyleDeclaration = "getComputedStyle" [@@bs.send.pipe: t];
external prompt : string => string = "" [@@bs.send.pipe: t];
external promptWithDefault : string => string => string = "prompt" [@@bs.send.pipe: t];
external scroll : int => int => unit = "" [@@bs.send.pipe: t];

external onLoad : t => (unit => unit) => unit = "onload" [@@bs.set];
