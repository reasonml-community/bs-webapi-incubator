open ReasonJs.Dom;
let event = KeyboardEvent.make "my-event";

let _ = KeyboardEvent.bubbles event;
let _ = KeyboardEvent.cancelable event;
let _ = KeyboardEvent.composed event;
let _ = KeyboardEvent.currentTarget event;
let _ = KeyboardEvent.defaultPrevented event;
let _ = KeyboardEvent.eventPhase event;
let _ = KeyboardEvent.target event;
let _ = KeyboardEvent.timeStamp event;
let _ = KeyboardEvent.type_ event;
let _ = KeyboardEvent.isTrusted event;

KeyboardEvent.preventDefault event;
KeyboardEvent.stopImmediatePropagation event;
KeyboardEvent.stopPropagation event;

let _ = KeyboardEvent.altKey event;
let _ = KeyboardEvent.code event;
let _ = KeyboardEvent.ctrlKey event;
let _ = KeyboardEvent.isComposing event;
let _ = KeyboardEvent.key event;
let _ = KeyboardEvent.locale event;
let _ = KeyboardEvent.location event;
let _ = KeyboardEvent.metaKey event;
let _ = KeyboardEvent.repeat event;
let _ = KeyboardEvent.shiftKey event;

let _ = KeyboardEvent.getModifierState KeyboardEvent.Alt event;