module Impl = (T: {type t;}) => {
  type t_nodeList = T.t;

  [@bs.val] external toArray : t_nodeList => array(Dom.node) = "Array.prototype.slice.call";

  [@bs.send.pipe : t_nodeList] external forEach : ((Dom.node, int) => unit) => unit = "";

  [@bs.get] external length : t_nodeList => int = "";

  [@bs.send.pipe : t_nodeList] [@bs.return nullable] external item : int => option(Dom.node) = "";
};

type t = Dom.nodeList;

include Impl({ type nonrec t = t; });
