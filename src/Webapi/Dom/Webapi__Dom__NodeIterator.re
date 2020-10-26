type t = Dom.nodeIterator;

[@bs.get] external root : t => Dom.node = "root";
[@bs.get] external referenceNode : t => Dom.node = "referenceNode";
[@bs.get] external pointerBeforeReferenceNode : t => bool = "pointerBeforeReferenceNode";
[@bs.get] external whatToShow : t => Webapi__Dom__Types.WhatToShow.t = "whatToShow";
[@bs.get] [@bs.return nullable] external filter : t => option(Dom.nodeFilter) = "filter";

[@bs.send.pipe : t] [@bs.return nullable] external nextNode : option(Dom.node) = "nextNode";
[@bs.send.pipe : t] [@bs.return nullable] external previousNode : option(Dom.node) = "previousNode";
[@bs.send.pipe : t] external detach : unit = "detach";
