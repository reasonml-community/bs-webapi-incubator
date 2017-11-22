module Impl = (T: {type t;}) => {
  [@bs.send.pipe : T.t] external splitText : (~offset: int, unit) => Dom.text = "";
  [@bs.get] external wholeText : T.t => string = "";
};

type t = Dom.text;

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include CharacterDataRe.Impl({ type nonrec t = t; });
include NonDocumentTypeChildNodeRe.Impl({ type nonrec t = t; });
include ChildNodeRe.Impl({ type nonrec t = t; });
include SlotableRe.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });