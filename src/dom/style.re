  type t = Dom.style;

  external backgroundImage : t => string = "" [@@bs.get];
  external setBackgroundImage : t => string => unit = "backgroundImage" [@@bs.set];
  external setBackgroundSize : t => string => unit = "backgroundSize" [@@bs.set];
  external setTop : t => string => unit = "top" [@@bs.set];
