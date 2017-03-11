
module Impl (Type: DomInternalRe.Type) => {
  type t_mouseEvent = Type.t;

  external altKey : t_mouseEvent => bool = "" [@@bs.get];
  external button : t_mouseEvent => int = "" [@@bs.get];
  external buttons : t_mouseEvent => int /* bitmask */ = "" [@@bs.get];
  external clientX : t_mouseEvent => int = "" [@@bs.get];
  external clientY : t_mouseEvent => int = "" [@@bs.get];
  external ctrlKey : t_mouseEvent => bool = "" [@@bs.get];
  external metaKey : t_mouseEvent => bool = "" [@@bs.get];
  external movementX : t_mouseEvent => int = "" [@@bs.get];
  external movementY : t_mouseEvent => int = "" [@@bs.get];
  external offsetX : t_mouseEvent => int = "" [@@bs.get]; /* experimental, but widely supported */
  external offsetY : t_mouseEvent => int = "" [@@bs.get]; /* experimental, but widely supported */
  external pageX : t_mouseEvent => int = "" [@@bs.get]; /* experimental, but widely supported */
  external pageY : t_mouseEvent => int = "" [@@bs.get]; /* experimental, but widely supported */
  external region : t_mouseEvent => option string = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external relatedTarget : t_mouseEvent => option DomTypesRe.eventTarget = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external screenX : t_mouseEvent => int = "" [@@bs.get];
  external screenY : t_mouseEvent => int = "" [@@bs.get];
  external shiftKey : t_mouseEvent => bool = "" [@@bs.get];
  external x : t_mouseEvent => int = "" [@@bs.get]; /* experimental */
  external y : t_mouseEvent => int = "" [@@bs.get]; /* experimental */

  external getModifierState : string /* modifierKey enum */ => bool = "" [@@bs.send.pipe: t_mouseEvent];
  let getModifierState : KeyboardEventRe.modifierKey => t_mouseEvent => bool = fun key self => getModifierState (KeyboardEventRe.encodeModifierKey key) self;
};

type t = DomTypesRe.mouseEvent;
include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };

external make : string => t = "MouseEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "MouseEvent" [@@bs.new];
