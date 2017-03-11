type touchList; /* TODO, Touch Events */

module Impl (Type: DomInternalRe.Type) => {
  type t_touchEvent = Type.t;

  external altKey : t_touchEvent => bool = "" [@@bs.get];
  external changedTouches : t_touchEvent => touchList = "" [@@bs.get];
  external ctrlKey : t_touchEvent => bool = "" [@@bs.get];
  external metaKey : t_touchEvent => bool = "" [@@bs.get];
  external shiftKey : t_touchEvent => bool = "" [@@bs.get];
  external targetTouches : t_touchEvent => touchList = "" [@@bs.get];
  external touches : t_touchEvent => touchList = "" [@@bs.get];
};

type t = DomTypesRe.touchEvent;
include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };

external make : string => t = "TouchEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "TouchEvent" [@@bs.new];
