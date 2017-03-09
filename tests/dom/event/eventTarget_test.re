open ReasonJs.Dom;
open EventTarget;

let target = document |> Document.createElement "strong" |> Element.asEventTarget;
let event = Event.make "my-event";
let handleClick _ => print_endline "asd";

addEventListener "click" handleClick target;
addEventListenerWithOptions "click" handleClick  { "passive": true } target;
addEventListenerUseCapture "click" handleClick target;
removeEventListener "click" handleClick target;
removeEventListenerWithOptions "click" handleClick  { "passive": true } target;
removeEventListenerUseCapture "click" handleClick target;
let _ = dispatchEvent event target;
