open ReasonJs.Dom;

let event = PointerEvent.make "my-event";

let _ = PointerEvent.bubbles event;
let _ = PointerEvent.cancelable event;
let _ = PointerEvent.composed event;
let _ = PointerEvent.currentTarget event;
let _ = PointerEvent.defaultPrevented event;
let _ = PointerEvent.eventPhase event;
let _ = PointerEvent.target event;
let _ = PointerEvent.timeStamp event;
let _ = PointerEvent.type_ event;
let _ = PointerEvent.isTrusted event;

PointerEvent.preventDefault event;
PointerEvent.stopImmediatePropagation event;
PointerEvent.stopPropagation event;

let _ = PointerEvent.altKey event;
let _ = PointerEvent.button event;
let _ = PointerEvent.buttons event;
let _ = PointerEvent.clientX event;
let _ = PointerEvent.clientY event;
let _ = PointerEvent.ctrlKey event;
let _ = PointerEvent.metaKey event;
let _ = PointerEvent.movementX event;
let _ = PointerEvent.movementY event;
let _ = PointerEvent.offsetX event;
let _ = PointerEvent.offsetY event;
let _ = PointerEvent.pageX event;
let _ = PointerEvent.pageY event;
let _ = PointerEvent.region event;
let _ = PointerEvent.relatedTarget event;
let _ = PointerEvent.screenX event;
let _ = PointerEvent.screenY event;
let _ = PointerEvent.shiftKey event;
let _ = PointerEvent.x event;
let _ = PointerEvent.y event;

let _ = PointerEvent.getModifierState KeyboardEvent.Alt event;

let _ = PointerEvent.pointerId event;
let _ = PointerEvent.width event;
let _ = PointerEvent.height event;
let _ = PointerEvent.pressure event;
let _ = PointerEvent.tiltX event;
let _ = PointerEvent.tiltY event;
let _ = PointerEvent.pointerType event;
let _ = PointerEvent.isPrimary event;
