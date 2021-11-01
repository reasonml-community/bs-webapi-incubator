type t = Dom.treeWalker;

[@bs.get] external root : t => Dom.node = "root";
[@bs.get] external whatToShow : t => Webapi__Dom__Types.WhatToShow.t = "whatToShow";
[@bs.get] [@bs.return nullable] external filter : t => option(Dom.nodeFilter) = "filter";
[@bs.get] external currentNode : t => Dom.node = "currentNode";
[@bs.set] external setCurrentNode : (t, Dom.node) => unit = "setCurrentNode";

[@bs.send.pipe : t] [@bs.return nullable] external parentNode : option(Dom.node) = "parentNode";
[@bs.send.pipe : t] [@bs.return nullable] external firstChild : option(Dom.node) = "firstChild";
[@bs.send.pipe : t] [@bs.return nullable] external lastChild : option(Dom.node) = "lastChild";
[@bs.send.pipe : t] [@bs.return nullable] external previousSibling : option(Dom.node) = "previousSibling";
[@bs.send.pipe : t] [@bs.return nullable] external nextSibling : option(Dom.node) = "nextSibling";
[@bs.send.pipe : t] [@bs.return nullable] external previousNode : option(Dom.node) = "previousNode";
[@bs.send.pipe : t] [@bs.return nullable] external nextNode : option(Dom.node) = "nextNode";
