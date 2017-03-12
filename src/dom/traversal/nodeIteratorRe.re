type t = DomTypesRe.nodeIterator;

external root : t => DomTypesRe.node = "" [@@bs.get];
external referenceNode : t => DomTypesRe.node = "" [@@bs.get];
external pointerBeforeReferenceNode : t => bool = "" [@@bs.get];
external whatToShow : t => NodeFilterRe.WhatToShow.t = "" [@@bs.get];
external filter : t => option DomTypesRe.nodeFilter = "" [@@bs.get] [@@bs.return null_to_opt];

external nextNode : option DomTypesRe.node = "" [@@bs.send.pipe: t];
external previousNode : option DomTypesRe.node = "" [@@bs.send.pipe: t];

external detach : unit = "" [@@bs.send.pipe: t];