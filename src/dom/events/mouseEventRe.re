
module Impl (T: { type t; }) => {
  external altKey : T.t => bool = "" [@@bs.get];
  external button : T.t => int = "" [@@bs.get];
  external buttons : T.t => int /* bitmask */ = "" [@@bs.get];
  external clientX : T.t => int = "" [@@bs.get];
  external clientY : T.t => int = "" [@@bs.get];
  external ctrlKey : T.t => bool = "" [@@bs.get];
  external metaKey : T.t => bool = "" [@@bs.get];
  external movementX : T.t => int = "" [@@bs.get];
  external movementY : T.t => int = "" [@@bs.get];
  external offsetX : T.t => int = "" [@@bs.get]; /* experimental, but widely supported */
  external offsetY : T.t => int = "" [@@bs.get]; /* experimental, but widely supported */
  external pageX : T.t => int = "" [@@bs.get]; /* experimental, but widely supported */
  external pageY : T.t => int = "" [@@bs.get]; /* experimental, but widely supported */
  external region : T.t => option string = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external relatedTarget : T.t => option Dom.eventTarget = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external screenX : T.t => int = "" [@@bs.get];
  external screenY : T.t => int = "" [@@bs.get];
  external shiftKey : T.t => bool = "" [@@bs.get];
  external x : T.t => int = "" [@@bs.get]; /* experimental */
  external y : T.t => int = "" [@@bs.get]; /* experimental */

  external getModifierState : string /* modifierKey enum */ => bool = "" [@@bs.send.pipe: T.t];
  let getModifierState : DomTypesRe.modifierKey => T.t => bool = fun key self => getModifierState (DomTypesRe.encodeModifierKey key) self;
};

type t = Dom.mouseEvent;
include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };

external make : string => t = "MouseEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "MouseEvent" [@@bs.new];
