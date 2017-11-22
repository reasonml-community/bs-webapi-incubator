type t = Dom.treeWalker;

[@bs.get] external root : t => Dom.node = "";

[@bs.get] external whatToShow : t => DomTypesRe.WhatToShow.t = "";

[@bs.get] [@bs.return null_to_opt] external filter : t => option(Dom.nodeFilter) = "";

[@bs.get] external currentNode : t => Dom.node = "";

[@bs.set] external setCurrentNode : (t, Dom.node) => unit = "";

[@bs.send.pipe : t] external parentNode : option(Dom.node) = "";

[@bs.send.pipe : t] external firstChild : option(Dom.node) = "";

[@bs.send.pipe : t] external lastChild : option(Dom.node) = "";

[@bs.send.pipe : t] external previousSibling : option(Dom.node) = "";

[@bs.send.pipe : t] external nextSibling : option(Dom.node) = "";

[@bs.send.pipe : t] external previousNode : option(Dom.node) = "";

[@bs.send.pipe : t] external nextNode : option(Dom.node) = "";
