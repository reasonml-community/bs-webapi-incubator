module Impl = (T: {type t;}) => {
  external asEventTarget : T.t => Dom.eventTarget = "%identity";

  [@bs.send.pipe : T.t] external addEventListener : (string, Dom.event => unit) => unit = "";
  [@bs.send.pipe : T.t] external addEventListenerWithOptions : (string, Dom.event => unit, {. "capture": Js.boolean, "once": Js.boolean, "passive": Js.boolean}) => unit = "addEventListener"; /* not widely supported */
  [@bs.send.pipe : T.t] external addEventListenerUseCapture : (string, Dom.event => unit, [@bs.as {json|true|json}] _) => unit = "addEventListener";
  [@bs.send.pipe : T.t] external removeEventListener : (string, Dom.event => unit) => unit = "";
  [@bs.send.pipe : T.t] external removeEventListenerWithOptions : (string, Dom.event => unit, {. "capture": Js.boolean, "passive": Js.boolean}) => unit = "removeEventListener"; /* not widely supported */
  [@bs.send.pipe : T.t] external removeEventListenerUseCapture : (string, Dom.event => unit, [@bs.as {json|true|json}] _) => unit = "removeEventListener";
  [@bs.send.pipe : T.t] external dispatchEvent : Dom.event => bool = "";
};

include Impl({ type nonrec t = Dom.eventTarget; });