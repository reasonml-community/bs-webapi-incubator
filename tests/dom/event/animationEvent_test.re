open ReasonJs.Dom;

let event = AnimationEvent.make "my-event";

let _ = AnimationEvent.bubbles event;
let _ = AnimationEvent.cancelable event;
let _ = AnimationEvent.composed event;
let _ = AnimationEvent.currentTarget event;
let _ = AnimationEvent.defaultPrevented event;
let _ = AnimationEvent.eventPhase event;
let _ = AnimationEvent.target event;
let _ = AnimationEvent.timeStamp event;
let _ = AnimationEvent.type_ event;
let _ = AnimationEvent.isTrusted event;

AnimationEvent.preventDefault event;
AnimationEvent.stopImmediatePropagation event;
AnimationEvent.stopPropagation event;

let _ = AnimationEvent.animationName event;
let _ = AnimationEvent.elapsedTime event;
let _ = AnimationEvent.pseudoElement event;