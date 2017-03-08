open ReasonJs.Dom;

let event = UiEvent.make "my-event";

/* Event */
let _ = UiEvent.bubbles event;
let _ = UiEvent.cancelable event;
let _ = UiEvent.composed event;
let _ = UiEvent.currentTarget event;
let _ = UiEvent.defaultPrevented event;
let _ = UiEvent.eventPhase event;
let _ = UiEvent.target event;
let _ = UiEvent.timeStamp event;
let _ = UiEvent.type_ event;
let _ = UiEvent.isTrusted event;

UiEvent.preventDefault event;
UiEvent.stopImmediatePropagation event;
UiEvent.stopPropagation event;

/* UIEvent */
let _ = UiEvent.detail event;
let _ = UiEvent.view event;