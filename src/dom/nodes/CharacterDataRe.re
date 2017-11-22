module Impl = (T: {type t;}) => {
  [@bs.get] external data : T.t => string = "";
  [@bs.get] external length : T.t => int = "";

  [@bs.send.pipe : T.t] external substringData : (~offset: int, ~count: int) => string = "";
  [@bs.send.pipe : T.t] external appendData : string => unit = "";
  [@bs.send.pipe : T.t] external insertData : (~offset: int, string) => unit = "";
  [@bs.send.pipe : T.t] external deleteData : (~offset: int, ~count: int) => unit = "";
  [@bs.send.pipe : T.t] external replaceData : (~offset: int, ~count: int, string) => unit = "";
};

type t = Dom.characterData;

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include NonDocumentTypeChildNodeRe.Impl({ type nonrec t = t; });
include ChildNodeRe.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });