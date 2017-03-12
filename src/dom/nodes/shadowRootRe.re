
type shadowRootMode =
| Open
| Closed;
let decodeShadowRootMode = fun /* internal */
| "open" => Open
| "closed" => Closed
| _ => raise (Invalid_argument "Unknown shadowRootMode");

type t = DomTypesRe.shadowRoot;
include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include NonElementParentNodeRe.Impl { type nonrec t = t };
include DocumentOrShadowRootRe.Impl { type nonrec t = t };
include ParentNodeRe.Impl { type nonrec t = t };

external shadowRootMode : t => string = "" [@@bs.get];
let shadowRootMode : t => shadowRootMode = fun self => decodeShadowRootMode (shadowRootMode self);
external host : t => DomTypesRe.element = "" [@@bs.get];