open ReasonJs.Dom;

let event = FocusEvent.make "my-event";

/* Event */
let _ = FocusEvent.bubbles event;
let _ = FocusEvent.cancelable event;
let _ = FocusEvent.composed event;
let _ = FocusEvent.currentTarget event;
let _ = FocusEvent.defaultPrevented event;
let _ = FocusEvent.eventPhase event;
let _ = FocusEvent.target event;
let _ = FocusEvent.timeStamp event;
let _ = FocusEvent.type_ event;
let _ = FocusEvent.isTrusted event;

FocusEvent.preventDefault event;
FocusEvent.stopImmediatePropagation event;
FocusEvent.stopPropagation event;

/* UIEvent */
let _ = FocusEvent.detail event;
let _ = FocusEvent.view event;

/* FocusEvent */
let _ = FocusEvent.relatedTarget event;
