type t = DomRe.event;
type pointerId = DomRe.eventPointerId;

type eventPhase =
| None
| CapturingPhase
| AtTarget
| BubblingPhase
| Unknown;
let decodeEventPhase = fun /* internal */
| 0 => None
| 1 => CapturingPhase
| 2 => AtTarget
| 3 => BubblingPhase
| _ => Unknown;

/* constructors */
external make : string => t = "Event" [@@bs.new];
external makeWithOptions : string => Js.t {..} = "Event" [@@bs.new];

/* Event interface */
external bubbles : t => Js.boolean = "" [@@bs.get];
external cancelable : t => Js.boolean = "" [@@bs.get];
external composed : t => Js.boolean = "" [@@bs.get];
external currentTarget : t => DomRe.eventTarget = "" [@@bs.get];
external defaultPrevented : t => Js.boolean = "" [@@bs.get];
external eventPhase : t => int /* eventPhase enum */ = "" [@@bs.get];
let eventPhase : t => eventPhase = fun self => decodeEventPhase (eventPhase self);
external target : t => DomRe.eventTarget = "" [@@bs.get];
external timeStamp : t => float = "" [@@bs.get];
external type_ : t => string = "type" [@@bs.get];
external isTrusted : t => Js.boolean = "" [@@bs.get];

external preventDefault : unit = "" [@@bs.send.pipe: t];
external stopImmediatePropagation : unit = "" [@@bs.send.pipe: t];
external stopPropagation : unit = "" [@@bs.send.pipe: t];

/* KeyboardEvent interface */
type modifierKey =
| Alt
| AltGraph
| CapsLock
| Control
| Fn
| FnLock
| Hyper
| Meta
| NumLock
| ScrollLock
| Shift
| Super
| Symbol
| SymbolLock;
let encodeModifierKey = fun /* internal */
| Alt => "Alt"
| AltGraph    => "AltGraph"
| CapsLock    => "CapsLock"
| Control     => "Control"
| Fn          => "Fn"
| FnLock      => "FnLock"
| Hyper       => "Hyper"
| Meta        => "Meta"
| NumLock     => "NumLock"
| ScrollLock  => "ScrollLock"
| Shift       => "Shift"
| Super       => "Super"
| Symbol      => "Symbol"
| SymbolLock  => "SymbolLock";

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

external getModifierState : string /* modifierKey enum */ => Js.boolean = "" [@@bs.send.pipe: t];
let getModifierState : modifierKey => t => bool = fun key self => Js.to_bool (getModifierState (encodeModifierKey key) self);

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
let region : t => option string = fun event => Js.Null.to_opt (region event);
external relatedTarget : t => Js.null DomRe.element = "" [@@bs.get]; /* return Js.null EventTarget */
let relatedTarget : t => option DomRe.element = fun event => Js.Null.to_opt (relatedTarget event);
external screenX : t => int = "" [@@bs.get];
external screenY : t => int = "" [@@bs.get];
/* shiftKey */
external x : t => int = "" [@@bs.get]; /* experimental */
external y : t => int = "" [@@bs.get]; /* experimental */
/* getModifierState */

/* PointerEvent interface */
type pointerType =
| Mouse
| Pen
| Touch
| Unknown;
let decodePointerType = fun /* itnernal */
| "mouse"   => Mouse
| "pen"     => Pen
| "touch|"  => Touch
| _         => Unknown;

external pointerId : t => pointerId = "" [@@bs.get];
external width : t => int = "" [@@bs.get];
external height : t => int = "" [@@bs.get];
external pressure : t => float = "" [@@bs.get];
external tiltX : t => int = "" [@@bs.get];
external tiltY : t => int = "" [@@bs.get];
external pointerType : t => string /* pointerType enum */ = "" [@@bs.get];
let pointerType : t => pointerType = fun self => decodePointerType (pointerType self);
external isPrimary : t => Js.boolean = "" [@@bs.get];
let isPrimary : t => bool = fun event => Js.to_bool (isPrimary event);
