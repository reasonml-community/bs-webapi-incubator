type t = Dom.domRect;

[@bs.new] external make : (~x: int, ~y: int, ~width: int, ~height: int) => t = "DOMRect"; /* experimental */

[@bs.get] external top : t => int = "";
[@bs.get] external bottom : t => int = "";
[@bs.get] external left : t => int = "";
[@bs.get] external right : t => int = "";
[@bs.get] external height : t => int = "";
[@bs.get] external width : t => int = "";
[@bs.get] external x : t => int = "";
[@bs.get] external y : t => int = "";
