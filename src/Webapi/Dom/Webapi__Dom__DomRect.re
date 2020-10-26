type t = Dom.domRect;

[@bs.new] external make : (~x: float, ~y: float, ~width: float, ~height: float) => t = "DOMRect"; /* experimental */

[@bs.get] external top : t => float = "top";
[@bs.get] external bottom : t => float = "bottom";
[@bs.get] external left : t => float = "left";
[@bs.get] external right : t => float = "right";
[@bs.get] external height : t => float = "height";
[@bs.get] external width : t => float = "width";
[@bs.get] external x : t => float = "x";
[@bs.get] external y : t => float = "y";
