type t = Dom.shadowRoot;

include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include NonElementParentNodeRe.Impl { type nonrec t = t };
include DocumentOrShadowRootRe.Impl { type nonrec t = t };
include ParentNodeRe.Impl { type nonrec t = t };

external shadowRootMode : t => string = "" [@@bs.get];
let shadowRootMode : t => DomTypesRe.shadowRootMode = fun self => DomTypesRe.decodeShadowRootMode (shadowRootMode self);
external host : t => Dom.element = "" [@@bs.get];
