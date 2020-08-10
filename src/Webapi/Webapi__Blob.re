module Impl = (T: {type t}) => {
  [@bs.send] external arrayBuffer: T.t => Js.Promise.t(Js.Typed_array.ArrayBuffer.t) =
    "";

  [@bs.get] external size: T.t => float = "";

  [@bs.send.pipe: T.t] external slice: (~start: int=?, ~end_: int=?, ~contentType: string=?) => T.t =
    "";

  /** @since 0.19.0 */
  [@bs.send] external stream: T.t => Webapi__ReadableStream.t = "";

  [@bs.send] external text: T.t => Js.Promise.t(string) = "";

  [@bs.get] external type_: T.t => string = "type";

  /** Deprecated, use [type_] instead. */
  [@deprecated "Use [type_] instead"]
  [@bs.get] external _type: T.t => string = "type";
};

type t = Fetch.blob;

include Impl({type nonrec t = t});

// [@bs.new] external make: ... = "Blob";
