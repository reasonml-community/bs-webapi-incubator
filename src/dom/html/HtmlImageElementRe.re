type t;

external make : unit => t = "Image" [@@bs.new];

external src : t => string => unit = "" [@@bs.set];

external getSrc : t => string = "src" [@@bs.get];

external onload : t => (unit => unit) => unit = "" [@@bs.set];

external naturalHeight : t => string = "" [@@bs.get];

external naturalWidth : t => string = "" [@@bs.get];
