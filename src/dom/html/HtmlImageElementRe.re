type t;

[@bs.new] external make : unit => t = "Image";

[@bs.set] external src : (t, string) => unit = "";
[@bs.get] external getSrc : t => string = "src";
[@deprecated "use `addEventListener` instead"][@bs.set] external onload : (t, unit => unit) => unit = "";
[@bs.get] external naturalHeight : t => string = "";
[@bs.get] external naturalWidth : t => string = "";

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include ElementRe.Impl({ type nonrec t = t; });
include HtmlElementRe.Impl({ type nonrec t = t; });