open ReasonJs.Dom;

let event = CompositionEvent.make "my-event";

/* Event */
let _ = CompositionEvent.bubbles event;
let _ = CompositionEvent.cancelable event;
let _ = CompositionEvent.composed event;
let _ = CompositionEvent.currentTarget event;
let _ = CompositionEvent.defaultPrevented event;
let _ = CompositionEvent.eventPhase event;
let _ = CompositionEvent.target event;
let _ = CompositionEvent.timeStamp event;
let _ = CompositionEvent.type_ event;
let _ = CompositionEvent.isTrusted event;

CompositionEvent.preventDefault event;
CompositionEvent.stopImmediatePropagation event;
CompositionEvent.stopPropagation event;

/* UIEvent */
let _ = CompositionEvent.detail event;
let _ = CompositionEvent.view event;

/* CompositionEvent */
let _ = CompositionEvent.data event;