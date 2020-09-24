type t = Dom.customEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "CustomEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "CustomEvent";

module MakeEmittedCustomEvent = (T: {type t;}) => {
  type t = Dom.customEvent;

  include Webapi__Dom__Event.Impl({
    type nonrec t = t;
  });

  [@bs.new] external make: string => t = "CustomEvent";
  [@bs.new] external makeWithOptions: (string, T.t) => t = "CustomEvent";
  [@bs.get] external detail: t => T.t = "detail";
};