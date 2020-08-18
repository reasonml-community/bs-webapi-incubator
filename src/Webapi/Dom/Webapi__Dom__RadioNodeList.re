module Impl = (T: {type t;}) => {
  type t_radioNodeList = T.t;
  [@bs.get] external value: t_radioNodeList => string = "value";

  external unsafeAsRadioNodeList: 'a => t_radioNodeList = "%identity";
};

type t = Dom.radioNodeList;

include Webapi__Dom__NodeList.Impl({type nonrec t = t;});
include Impl({type nonrec t = t;});
