type t = Dom.event;
type pointerId = Dom.eventPointerId;

/* constructors */
external make : string => t = "Event" [@@bs.new];
external makeWithOptions : string => Js.t {..} = "Event" [@@bs.new];

/* Event interface */
external bubbles : t => Js.boolean = "" [@@bs.get];
external cancelable : t => Js.boolean = "" [@@bs.get];
external composed : t => Js.boolean = "" [@@bs.get];
external currentTarget : t => Dom.element = "" [@@bs.get];
external defaultPrevented : t => Js.boolean = "" [@@bs.get];
external eventPhase : t => int /* enum */ = "" [@@bs.get];
external target : t => Dom.element = "" [@@bs.get];
external timeStamp : t => float = "" [@@bs.get];
external type_ : t => string = "type" [@@bs.get];
external isTrusted : t => Js.boolean = "" [@@bs.get];

external preventDefault : t => unit = "" [@@bs.send];
external stopImmediatePropagation : t => unit = "" [@@bs.send];
external stopPropagation : t => unit = "" [@@bs.send];

/* KeyboardEvent interface */
external altKey : t => Js.boolean = "" [@@bs.get];
external code : t => string = "" [@@bs.get];
external ctrlKey : t => Js.boolean = "" [@@bs.get];
external isComposing : t => Js.boolean = "" [@@bs.get];
external key : t => string = "" [@@bs.get];
external locale : t => string = "" [@@bs.get];
external location : t => int = "" [@@bs.get];
external metaKey : t => Js.boolean = "" [@@bs.get];
external repeat : t => Js.boolean = "" [@@bs.get];
external shiftKey : t => Js.boolean = "" [@@bs.get];

external getModifierState : t => string /* enum */ => Js.boolean = "" [@@bs.send];

/* MouseEvent interface */
/* altKey */
external button : t => int = "" [@@bs.get];
external buttons : t => int /* bitmask */ = "" [@@bs.get];
external clientX : t => int = "" [@@bs.get];
external clientY : t => int = "" [@@bs.get];
/* ctrlKey */
/* metaKey */
external movementX : t => int = "" [@@bs.get];
external movementY : t => int = "" [@@bs.get];
external offsetX : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external offsetY : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external pageX : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external pageY : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external region : t => Js.null string = "" [@@bs.get];
external relatedTarget : t => Js.null Dom.element = "" [@@bs.get]; /* return Js.null EventTarget */
external screenX : t => int = "" [@@bs.get];
external screenY : t => int = "" [@@bs.get];
/* shiftKey */
external x : t => int = "" [@@bs.get]; /* experimental */
external y : t => int = "" [@@bs.get]; /* experimental */
/* getModifierState */

/* PointerEvent interface */
external pointerId : t => pointerId = "" [@@bs.get];
external width : t => int = "" [@@bs.get];
external height : t => int = "" [@@bs.get];
external pressure : t => float = "" [@@bs.get];
external tiltX : t => int = "" [@@bs.get];
external tiltY : t => int = "" [@@bs.get];
external pointerType : t => string /* enum */ = "" [@@bs.get];
external isPrimary : t => Js.boolean = "" [@@bs.get];
