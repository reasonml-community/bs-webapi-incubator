open ReasonJs.Dom;

let event = WheelEvent.make "my-event";

/* Event */
let _ = WheelEvent.bubbles event;
let _ = WheelEvent.cancelable event;
let _ = WheelEvent.composed event;
let _ = WheelEvent.currentTarget event;
let _ = WheelEvent.defaultPrevented event;
let _ = WheelEvent.eventPhase event;
let _ = WheelEvent.target event;
let _ = WheelEvent.timeStamp event;
let _ = WheelEvent.type_ event;
let _ = WheelEvent.isTrusted event;

WheelEvent.preventDefault event;
WheelEvent.stopImmediatePropagation event;
WheelEvent.stopPropagation event;

/* UIEvent */
let _ = WheelEvent.detail event;
let _ = WheelEvent.view event;

/* WheelEvent */
let _ = WheelEvent.deltaX event;
let _ = WheelEvent.deltaY event;
let _ = WheelEvent.deltaZ event;
let _ = WheelEvent.deltaMode event;