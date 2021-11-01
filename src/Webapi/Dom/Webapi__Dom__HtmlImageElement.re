type t;

[@bs.new] external make : unit => t = "Image";
[@bs.new] external makeWithSize : (int, int) => t = "Image";

[@bs.get] external alt : t => string = "alt";
[@bs.set] external setAlt : (t, string) => unit = "alt";
[@bs.get] external src : t => string = "src";
[@bs.set] external setSrc : (t, string) => unit = "src";
[@bs.get] external srcset : t => string = "srcset";
[@bs.set] external setSrcset : (t, string) => unit = "srcset";
[@bs.get] external sizes : t => string = "sizes";
[@bs.set] external setSizes : (t, string) => unit = "sizes";
[@bs.get] [@bs.return nullable] external crossOrigin : t => option(string) = "crossOrigin";
[@bs.set] external setCrossOrigin : (t, Js.null(string)) => unit = "crossOrigin";
let setCrossOrigin = (self, value) =>
  setCrossOrigin(self, Js.Null.fromOption(value));
[@bs.get] external useMap : t => string = "useMap";
[@bs.set] external setUseMap : (t, string) => unit = "useMap";
[@bs.get] external isMap : t => bool = "isMap";
[@bs.set] external setIsMap : (t, bool) => unit = "isMap";
[@bs.get] external height : t => int = "height";
[@bs.set] external setHeight : (t, int) => unit = "height";
[@bs.get] external width : t => int = "width";
[@bs.set] external setWidth : (t, int) => unit = "width";
[@bs.get] external naturalHeight : t => int = "naturalHeight";
[@bs.get] external naturalWidth : t => int = "naturalWidth";
[@bs.get] external complete : t => bool = "complete";
[@bs.get] external currentSrc : t => string = "currentSrc";
[@bs.get] external referrerPolicy : t => string = "referrerPolicy";
[@bs.set] external setReferrerPolicy : (t, string) => unit = "referrerPolicy";
[@bs.get] external decoding : t => string = "decoding";
[@bs.set] external setDecoding : (t, string) => unit = "decoding";

[@bs.send.pipe: t] external decode : Js.Promise.t(unit) = "decode";

include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__Element.Impl({ type nonrec t = t; });
include Webapi__Dom__HtmlElement.Impl({ type nonrec t = t; });