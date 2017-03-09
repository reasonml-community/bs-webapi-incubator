open ReasonJs.Dom;

let event = TransitionEvent.make "my-event";

let _ = TransitionEvent.bubbles event;
let _ = TransitionEvent.cancelable event;
let _ = TransitionEvent.composed event;
let _ = TransitionEvent.currentTarget event;
let _ = TransitionEvent.defaultPrevented event;
let _ = TransitionEvent.eventPhase event;
let _ = TransitionEvent.target event;
let _ = TransitionEvent.timeStamp event;
let _ = TransitionEvent.type_ event;
let _ = TransitionEvent.isTrusted event;

TransitionEvent.preventDefault event;
TransitionEvent.stopImmediatePropagation event;
TransitionEvent.stopPropagation event;

let _ = TransitionEvent.propertyName event;
let _ = TransitionEvent.elapsedTime event;
let _ = TransitionEvent.pseudoElement event;