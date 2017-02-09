open ReasonJs;

let event = Event.make "my-event";

let _ = Event.bubbles event;
let _ = Event.cancelable event;
let _ = Event.composed event;
let _ = Event.currentTarget event;
let _ = Event.defaultPrevented event;
let _ = Event.eventPhase event;
let _ = Event.target event;
let _ = Event.timeStamp event;
let _ = Event.type_ event;
let _ = Event.isTrusted event;

Event.preventDefault event;
Event.stopImmediatePropagation event;
Event.stopPropagation event;

/* KeyboardEvent interface */
let _ = Event.altKey event;
let _ = Event.code event;
let _ = Event.ctrlKey event;
let _ = Event.isComposing event;
let _ = Event.key event;
let _ = Event.locale event;
let _ = Event.location event;
let _ = Event.metaKey event;
let _ = Event.repeat event;
let _ = Event.shiftKey event;

let _ = Event.getModifierState Event.Alt event;

/* MouseEvent interface */
let _ = Event.button event;
let _ = Event.buttons event;
let _ = Event.clientX event;
let _ = Event.clientY event;
let _ = Event.movementX event;
let _ = Event.movementY event;
let _ = Event.offsetX event;
let _ = Event.offsetY event;
let _ = Event.pageX event;
let _ = Event.pageY event;
let _ = Event.region event;
let _ = Event.relatedTarget event;
let _ = Event.screenX event;
let _ = Event.screenY event;
let _ = Event.x event;
let _ = Event.y event;

/* PointerEvent interface */
let _ = Event.pointerId event;
let _ = Event.width event;
let _ = Event.height event;
let _ = Event.pressure event;
let _ = Event.tiltX event;
let _ = Event.tiltY event;
let _ = Event.pointerType event;
let _ = Event.isPrimary event;
