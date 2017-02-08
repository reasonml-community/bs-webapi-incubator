type t = Dom.window;

include EventTarget.Interface;

/* This module is far from exhaustive */

external document : t => Dom.document = "" [@@bs.get];
external fullScreen : t => Js.boolean = "" [@@bs.get];
external history : t => Dom.history = "" [@@bs.get];
external innerWidth : t => int = "" [@@bs.get];
external innerHeight : t => int = "" [@@bs.get];
external location : t => Dom.location = "" [@@bs.get];
external setLocation : t => string => Location.t = "location" [@@bs.set]; /* Will thi return Location.t, or the string it was passed? */
external parent : t => t = "" [@@bs.get];
external top : t => t = "" [@@bs.get];
external window : t => t = "" [@@bs.get];

external alert : t => string => unit = "" [@@bs.send];
external confirm : t => string => Js.boolean = "" [@@bs.send];
external getComputedStyle : t => Dom.element => Dom.cssStyleDeclaration = "" [@@bs.send];
external getComputedStyleWithPseudoElement : t => Dom.element => string => Dom.cssStyleDeclaration = "getComputedStyle" [@@bs.send];
external prompt : t => string => string = "" [@@bs.send];
external promptWithDefault : t => string => string => string = "prompt" [@@bs.send];
external scroll : t => int => int => unit = "" [@@bs.send];

external onLoad : t => (unit => unit) => unit = "onload" [@@bs.set];

/*include EventTarget;*/
