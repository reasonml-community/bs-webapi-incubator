module Impl (T: { type t; }) => {
  external splitText : offset::int => unit => DomTypesRe.text = "" [@@bs.send.pipe: T.t];
  external wholeText : T.t => string = "" [@@bs.get];
};

type t = DomTypesRe.text;
include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include CharacterDataRe.Impl { type nonrec t = t };
include NonDocumentTypeChildNodeRe.Impl { type nonrec t = t };
include ChildNodeRe.Impl { type nonrec t = t };
include SlotableRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };