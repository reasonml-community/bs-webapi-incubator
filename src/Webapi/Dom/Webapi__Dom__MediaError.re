/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#mediaerror
 */
type t;

type errorType =
  | ERR_ABORTED
  | ERR_NETWORK
  | ERR_DECODE
  | ERR_SRC_NOT_SUPPORTED;

let decodeErrorType = fun
  | 1 => Some(ERR_ABORTED)
  | 2 => Some(ERR_NETWORK)
  | 3 => Some(ERR_DECODE)
  | 4 => Some(ERR_SRC_NOT_SUPPORTED)
  | _ => None;

/** Properties */

[@bs.get] external _code: t => int = "code";
let code = t => _code(t) |> decodeErrorType;
[@bs.get] external message: t => string = "message";
