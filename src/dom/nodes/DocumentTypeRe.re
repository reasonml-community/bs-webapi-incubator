type t = Dom.documentType;

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include ChildNodeRe.Impl({ type nonrec t = t; });

[@bs.get] external name : t => string = "";
[@bs.get] external publicId : t => string = "";
[@bs.get] external systemId : t => string = "";
