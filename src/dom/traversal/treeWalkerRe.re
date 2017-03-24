type t = Dom.treeWalker;

external root : t => Dom.node = "" [@@bs.get];
external whatToShow : t => DomTypesRe.WhatToShow.t = "" [@@bs.get];
external filter : t => option Dom.nodeFilter = "" [@@bs.get] [@@bs.return null_to_opt];
external currentNode : t => Dom.node = "" [@@bs.get];
external setCurrentNode : t => Dom.node => unit = "" [@@bs.set];

external parentNode : option Dom.node = "" [@@bs.send.pipe: t];
external firstChild : option Dom.node = "" [@@bs.send.pipe: t];
external lastChild : option Dom.node = "" [@@bs.send.pipe: t];
external previousSibling : option Dom.node = "" [@@bs.send.pipe: t];
external nextSibling : option Dom.node = "" [@@bs.send.pipe: t];
external previousNode : option Dom.node = "" [@@bs.send.pipe: t];
external nextNode : option Dom.node = "" [@@bs.send.pipe: t];
