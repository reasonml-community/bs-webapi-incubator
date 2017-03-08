open ReasonJs.Dom;

let event = TouchEvent.make "my-event";

/* Event */
let _ = TouchEvent.bubbles event;
let _ = TouchEvent.cancelable event;
let _ = TouchEvent.composed event;
let _ = TouchEvent.currentTarget event;
let _ = TouchEvent.defaultPrevented event;
let _ = TouchEvent.eventPhase event;
let _ = TouchEvent.target event;
let _ = TouchEvent.timeStamp event;
let _ = TouchEvent.type_ event;
let _ = TouchEvent.isTrusted event;

TouchEvent.preventDefault event;
TouchEvent.stopImmediatePropagation event;
TouchEvent.stopPropagation event;

/* UIEvent */
let _ = TouchEvent.detail event;
let _ = TouchEvent.view event;

/* TouchEvent */
let _ = TouchEvent.altKey event;
let _ = TouchEvent.changedTouches event;
let _ = TouchEvent.ctrlKey event;
let _ = TouchEvent.metaKey event;
let _ = TouchEvent.shiftKey event;
let _ = TouchEvent.targetTouches event;
let _ = TouchEvent.touches event;