type t;

[@bs.get] external contentRect: t => Dom.domRect = "contentRect";
[@bs.get] external target: t => Dom.element = "target";
