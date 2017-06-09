open Bs_webapi.Dom;
open EventTarget;

let target = document |> Document.createElement "strong" |> Element.asEventTarget;
let event = Event.make "my-event";
let handleClick _ => print_endline "asd";

addEventListener "click" handleClick target;
addEventListenerWithOptions "click" handleClick  { "passive": Js.true_, "once": Js.true_, "capture": Js.false_ } target;
addEventListenerUseCapture "click" handleClick target;
removeEventListener "click" handleClick target;
removeEventListenerWithOptions "click" handleClick  { "passive": Js.true_, "capture": Js.false_ } target;
removeEventListenerUseCapture "click" handleClick target;
let _ = dispatchEvent event target;
