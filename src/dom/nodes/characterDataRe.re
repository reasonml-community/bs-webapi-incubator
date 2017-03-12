module Impl (Type: DomInternalRe.Type) => {
    external data : Type.t => string = "" [@@bs.get];
    external length : Type.t => int = "" [@@bs.get];
    external substringData : offset::int => count::int => string = "" [@@bs.send.pipe: Type.t];
    external appendData : string => unit = "" [@@bs.send.pipe: Type.t];
    external insertData : offset::int => string => unit = "" [@@bs.send.pipe: Type.t];
    external deleteData : offset::int => count::int => unit = "" [@@bs.send.pipe: Type.t];
    external replaceData : offset::int => count::int => string => unit = "" [@@bs.send.pipe: Type.t];
};

type t = DomTypesRe.characterData;
include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include NonDocumentTypeChildNodeRe.Impl { type nonrec t = t };
include ChildNodeRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };
