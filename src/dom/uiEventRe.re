module Impl (Type: DomInternalRe.Type) => {
  type t_uiEvent = Type.t;

  external detail : t_uiEvent => int = "" [@@bs.get];
  external view : t_uiEvent => DomTypesRe.window = "" [@@bs.get]; /* technically returns a `WindowProxy` */
};

type t = DomTypesRe.mouseEvent;
include EventRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };

external make : string => t = "UIEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "UIEvent" [@@bs.new];

