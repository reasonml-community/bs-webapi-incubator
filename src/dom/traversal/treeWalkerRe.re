type t = DomTypesRe.treeWalker;

external root : t => DomTypesRe.node = "" [@@bs.get];
external whatToShow : t => DomTypesRe.WhatToShow.t = "" [@@bs.get];
external filter : t => option DomTypesRe.nodeFilter = "" [@@bs.get] [@@bs.return null_to_opt];
external currentNode : t => DomTypesRe.node = "" [@@bs.get];
external setCurrentNode : t => DomTypesRe.node => unit = "" [@@bs.set];

external parentNode : option DomTypesRe.node = "" [@@bs.send.pipe: t];
external firstChild : option DomTypesRe.node = "" [@@bs.send.pipe: t];
external lastChild : option DomTypesRe.node = "" [@@bs.send.pipe: t];
external previousSibling : option DomTypesRe.node = "" [@@bs.send.pipe: t];
external nextSibling : option DomTypesRe.node = "" [@@bs.send.pipe: t];
external previousNode : option DomTypesRe.node = "" [@@bs.send.pipe: t];
external nextNode : option DomTypesRe.node = "" [@@bs.send.pipe: t];
