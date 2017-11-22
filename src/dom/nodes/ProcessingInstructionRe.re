type t = Dom.processingInstruction;

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include NonDocumentTypeChildNodeRe.Impl({ type nonrec t = t; });
include ChildNodeRe.Impl({ type nonrec t = t; });

[@bs.get] external target : t => string = "";
