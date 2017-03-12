type t = DomTypesRe.attr;

include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };

external namespaceURI : t => string = "" [@@bs.get];
external prefix : t => string = "" [@@bs.get];
external localName : t => string = "" [@@bs.get];
external name : t => string = "" [@@bs.get];
external value : t => string = "" [@@bs.get];

external ownerElement : t => option DomTypesRe.element = "" [@@bs.get];

external specified : t => bool = "" [@@bs.get]; /* useless; always returns true (exact wording from spec) */
