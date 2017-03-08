type t = DomTypesRe.keyboardEvent;

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };

external make : string => t = "KeyboardEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "KeyboardEvent" [@@bs.new];

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

external altKey : t => bool = "" [@@bs.get];
external code : t => string = "" [@@bs.get];
external ctrlKey : t => bool = "" [@@bs.get];
external isComposing : t => bool = "" [@@bs.get];
external key : t => string = "" [@@bs.get];
external locale : t => string = "" [@@bs.get];
external location : t => int = "" [@@bs.get];
external metaKey : t => bool = "" [@@bs.get];
external repeat : t => bool = "" [@@bs.get];
external shiftKey : t => bool = "" [@@bs.get];

external getModifierState : string /* modifierKey enum */ => bool = "" [@@bs.send.pipe: t];
let getModifierState : modifierKey => t => bool = fun key self => getModifierState (encodeModifierKey key) self;
