type t = Dom.namedNodeMap;

[@bs.get] external length : t => int = "length";

[@bs.send.pipe : t] [@bs.return nullable] external item : int => option(Dom.attr) = "item";
[@bs.send.pipe : t] [@bs.return nullable] external getNamedItem : string => option(Dom.attr) = "getNamedItem";
[@bs.send.pipe : t] [@bs.return nullable] external getNamedItemNS : (string, string) => option(Dom.attr) = "getNamedItemNS";
[@bs.send.pipe : t] external setNamedItem : Dom.attr => unit = "setNamedItem";
[@bs.send.pipe : t] external setNamedItemNS : Dom.attr => unit = "setNamedItemNS";
[@bs.send.pipe : t] external removeNamedItem : string => Dom.attr = "removeNamedItem";
[@bs.send.pipe : t] external removeNamedItemNS : (string, string) => Dom.attr = "removeNamedItemNS";

[@bs.val] [@bs.scope ("Array", "prototype", "slice")] external toArray : t => array(Dom.attr) = "call";
