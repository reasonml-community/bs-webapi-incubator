open ReasonJs.Dom;

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
