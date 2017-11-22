type t;

[@bs.new] external make : unit => t = "Image";

[@bs.set] external src : (t, string) => unit = "";
[@bs.get] external getSrc : t => string = "src";
[@bs.set] external onload : (t, unit => unit) => unit = "";
[@bs.get] external naturalHeight : t => string = "";
[@bs.get] external naturalWidth : t => string = "";
