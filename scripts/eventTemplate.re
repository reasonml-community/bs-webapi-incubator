
let typ = Node.Process.argv[2];
let name = Node.Process.argv[3];
let lname = name |> Js.String.toLowerCase;

{j|
  [@bs.send.pipe : T.t] external add$(name)EventListener : ([@bs.as "$(lname)"] _, Dom.$(typ) => unit) => unit = "addEventListener";
  [@bs.send.pipe : T.t] external add$(name)EventListenerWithOptions : ([@bs.as "$(lname)"] _, Dom.$(typ) => unit, {. "capture": bool, "once": bool, "passive": bool}) => unit = "addEventListener"; /* not widely supported */
  [@bs.send.pipe : T.t] external add$(name)EventListenerUseCapture : ([@bs.as "$(lname)"] _, Dom.$(typ) => unit, [@bs.as {json|true|json}] _) => unit = "addEventListener";
  [@bs.send.pipe : T.t] external remove$(name)EventListener : ([@bs.as "$(lname)"] _, Dom.$(typ) => unit) => unit = "removeEventListener";
  [@bs.send.pipe : T.t] external remove$(name)EventListenerWithOptions : ([@bs.as "$(lname)"] _, Dom.$(typ) => unit, {. "capture": bool, "passive": bool}) => unit = "removeEventListener"; /* not widely supported */
  [@bs.send.pipe : T.t] external remove$(name)EventListenerUseCapture : ([@bs.as "$(lname)"] _, Dom.$(typ) => unit, [@bs.as {json|true|json}] _) => unit = "removeEventListener";
|j} |> Js.log;
