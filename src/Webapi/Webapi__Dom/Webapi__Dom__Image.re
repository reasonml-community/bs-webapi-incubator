type t;

[@bs.new] external make: (~width: float, ~height: float) => t = "Image";

[@bs.set] external setSrc: (t, string) => unit = "src";

[@bs.get] external src: t => string = "";
[@bs.get] external height: t => float = "";
[@bs.get] external width: t => float = "";