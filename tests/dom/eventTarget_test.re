open ReasonJs;

let target = document |> Document.createElement "strong" |> Element.asEventTarget;
let event = Event.make "my-event";
let handleClick e => print_endline "asd";

EventTarget.addEventListener "click" handleClick target;
EventTarget.addEventListenerWithOptions "click" handleClick  { "passive": true } target;
EventTarget.addEventListenerUseCapture "click" handleClick target;
EventTarget.removeEventListener "click" handleClick target;
EventTarget.removeEventListenerWithOptions "click" handleClick  { "passive": true } target;
EventTarget.removeEventListenerUseCapture "click" handleClick target;
let _ = EventTarget.dispatchEvent event target;
