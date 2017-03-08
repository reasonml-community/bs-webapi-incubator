open ReasonJs.Dom;

let event = InputEvent.make "my-event";

/* Event */
let _ = InputEvent.bubbles event;
let _ = InputEvent.cancelable event;
let _ = InputEvent.composed event;
let _ = InputEvent.currentTarget event;
let _ = InputEvent.defaultPrevented event;
let _ = InputEvent.eventPhase event;
let _ = InputEvent.target event;
let _ = InputEvent.timeStamp event;
let _ = InputEvent.type_ event;
let _ = InputEvent.isTrusted event;

InputEvent.preventDefault event;
InputEvent.stopImmediatePropagation event;
InputEvent.stopPropagation event;

/* UIEvent */
let _ = InputEvent.detail event;
let _ = InputEvent.view event;

/* InputEvent */
let _ = InputEvent.data event;
let _ = InputEvent.isComposing event;