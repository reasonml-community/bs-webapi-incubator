type t = Dom.mutationRecord;

[@bs.get] external type_ : t => string = "type";
[@bs.get] external target : t => Dom.node = "target";
[@bs.get] external addedNodes : t => Dom.nodeList = "addedNodes";
[@bs.get] external removedNodes : t => Dom.nodeList = "removedNodes";
[@bs.get] [@bs.return nullable] external previousSibling : t => option(Dom.node) = "previousSibling";
[@bs.get] [@bs.return nullable] external pnextSibling : t => option(Dom.node) = "pnextSibling";
[@bs.get] external attributeName : t => string = "attributeName";
[@bs.get] external attributeNamespace : t => string = "attributeNamespace";
[@bs.get] external oldValue : t => string = "oldValue";
