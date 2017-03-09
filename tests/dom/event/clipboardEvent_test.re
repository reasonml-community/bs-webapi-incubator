open ReasonJs.Dom;

let event = ClipboardEvent.make "my-event";

/* Event */
let _ = ClipboardEvent.bubbles event;
let _ = ClipboardEvent.cancelable event;
let _ = ClipboardEvent.composed event;
let _ = ClipboardEvent.currentTarget event;
let _ = ClipboardEvent.defaultPrevented event;
let _ = ClipboardEvent.eventPhase event;
let _ = ClipboardEvent.target event;
let _ = ClipboardEvent.timeStamp event;
let _ = ClipboardEvent.type_ event;
let _ = ClipboardEvent.isTrusted event;

ClipboardEvent.preventDefault event;
ClipboardEvent.stopImmediatePropagation event;
ClipboardEvent.stopPropagation event;

/* ClipboardEvent */
let _ = ClipboardEvent.clipboardData event;