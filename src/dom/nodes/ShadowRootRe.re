type t = Dom.shadowRoot;

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include NonElementParentNodeRe.Impl({ type nonrec t = t; });
include DocumentOrShadowRootRe.Impl({ type nonrec t = t; });
include ParentNodeRe.Impl({ type nonrec t = t; });

[@bs.get] external shadowRootMode : t => string = "";
let shadowRootMode: t => DomTypesRe.shadowRootMode =
  (self) => DomTypesRe.decodeShadowRootMode(shadowRootMode(self));
[@bs.get] external host : t => Dom.element = "";
