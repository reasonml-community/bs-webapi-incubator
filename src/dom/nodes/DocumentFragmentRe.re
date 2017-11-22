type t = Dom.documentFragment;

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include NonElementParentNodeRe.Impl({ type nonrec t = t; });
include ParentNodeRe.Impl({ type nonrec t = t; });
