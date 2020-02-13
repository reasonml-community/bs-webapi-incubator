open Webapi.Dom.Image;

let image = make(~width=0.0, ~height=0.0);

let url = "http://test.jpg";

let _ = setSrc(image, url);

let _ = src(image);
let _ = height(image);
let _ = width(image);