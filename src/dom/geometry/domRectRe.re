type t = Dom.domRect;

external make : int => int => int => int => t = "DOMRect" [@@bs.new]; /* experimental */

external top : t => int = "" [@@bs.get];

external bottom : t => int = "" [@@bs.get];

external left : t => int = "" [@@bs.get];

external right : t => int = "" [@@bs.get];

external height : t => int = "" [@@bs.get];

external width : t => int = "" [@@bs.get];

external x : t => int = "" [@@bs.get];

external y : t => int = "" [@@bs.get];
