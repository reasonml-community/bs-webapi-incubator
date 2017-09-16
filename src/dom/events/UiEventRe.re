module Impl (T: { type t; }) => {
  external detail : T.t => int = "" [@@bs.get];
  external view : T.t => Dom.window = "" [@@bs.get]; /* technically returns a `WindowProxy` */
};

type t = Dom.uiEvent;
include EventRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };

external make : string => t = "UIEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "UIEvent" [@@bs.new];

