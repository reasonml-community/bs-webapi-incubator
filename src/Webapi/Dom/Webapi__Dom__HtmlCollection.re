module Impl = (T: { type t;}) => {
  type t_htmlCollection = T.t;
  [@bs.val] [@bs.scope ("Array", "prototype", "slice")] external toArray : t_htmlCollection => array(Dom.element) = "call";

  [@bs.get] external length : t_htmlCollection => int = "";
  [@bs.send.pipe : t_htmlCollection] [@bs.return nullable] external item : int => option(Dom.element) = "";
  [@bs.send.pipe : t_htmlCollection] [@bs.return nullable] external namedItem : string => option(Dom.element) = "";
};

type t = Dom.htmlCollection;

include Impl({ type nonrec t = t; });
