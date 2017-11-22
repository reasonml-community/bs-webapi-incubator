type t = Dom.htmlCollection;

[@bs.val] [@bs.scope ("Array", "prototype", "slice")] external toArray : t => array(Dom.element) = "call";

[@bs.get] external length : t => int = "";
[@bs.send.pipe : t] [@bs.return null_undefined_to_opt] external item : int => option(Dom.element) = "";
[@bs.send.pipe : t] external namedItem : string => option(Dom.element) = "";
