type t = Dom.nodeList;

[@bs.val] external toArray : t => array(Dom.node) = "Array.prototype.slice.call";

[@bs.get] external length : t => int = "";

[@bs.send.pipe : t] [@bs.return nullable] external item : int => option(Dom.node) = "";
