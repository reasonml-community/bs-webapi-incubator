open ReasonJs.Dom;

let event = MouseEvent.make "my-event";

let _ = MouseEvent.bubbles event;
let _ = MouseEvent.cancelable event;
let _ = MouseEvent.composed event;
let _ = MouseEvent.currentTarget event;
let _ = MouseEvent.defaultPrevented event;
let _ = MouseEvent.eventPhase event;
let _ = MouseEvent.target event;
let _ = MouseEvent.timeStamp event;
let _ = MouseEvent.type_ event;
let _ = MouseEvent.isTrusted event;

MouseEvent.preventDefault event;
MouseEvent.stopImmediatePropagation event;
MouseEvent.stopPropagation event;

let _ = MouseEvent.altKey event;
let _ = MouseEvent.button event;
let _ = MouseEvent.buttons event;
let _ = MouseEvent.clientX event;
let _ = MouseEvent.clientY event;
let _ = MouseEvent.ctrlKey event;
let _ = MouseEvent.metaKey event;
let _ = MouseEvent.movementX event;
let _ = MouseEvent.movementY event;
let _ = MouseEvent.offsetX event;
let _ = MouseEvent.offsetY event;
let _ = MouseEvent.pageX event;
let _ = MouseEvent.pageY event;
let _ = MouseEvent.region event;
let _ = MouseEvent.relatedTarget event;
let _ = MouseEvent.screenX event;
let _ = MouseEvent.screenY event;
let _ = MouseEvent.shiftKey event;
let _ = MouseEvent.x event;
let _ = MouseEvent.y event;

let _ = MouseEvent.getModifierState KeyboardEvent.Alt event;