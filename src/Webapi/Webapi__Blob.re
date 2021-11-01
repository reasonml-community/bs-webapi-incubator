module Impl = (T: {type t}) => {
  [@bs.send] external arrayBuffer: T.t => Js.Promise.t(Js.Typed_array.ArrayBuffer.t) =
    "arrayBuffer";

  [@bs.get] external size: T.t => float = "size";

  [@bs.send.pipe: T.t] external slice: (~start: int=?, ~end_: int=?, ~contentType: string=?) => T.t =
    "slice";

  /** @since 0.19.0 */
  [@bs.send] external stream: T.t => Webapi__ReadableStream.t = "stream";

  [@bs.send] external text: T.t => Js.Promise.t(string) = "text";

  [@bs.get] external type_: T.t => string = "type";

  /** Deprecated, use [type_] instead. */
  [@deprecated "Use [type_] instead"]
  [@bs.get] external _type: T.t => string = "type";
};

type t = Fetch.blob;

include Impl({type nonrec t = t});

// [@bs.new] external make: ... = "Blob";
