module type Reader = {
  type t;
  type closed;

  [@bs.send] external closed: t => Js.Promise.t(closed) = "";
  [@bs.send] external cancel: t => Js.Promise.t(unit) = "";
  [@bs.send.pipe: t] external cancelWith: string => Js.Promise.t(string) = "cancel";
  [@bs.send] external releaseLock: t => unit = "";
};

module rec DefaultReader: {
  include Reader;
  [@bs.send] external read: t => Js.Promise.t(Fetch__Iterator.Next.t(string)) = "";
} = DefaultReader;

module rec BYOBReader: {
  include Reader;
  // [@bs.send.pipe: t] external read: view => Js.Promise.t(Fetch__Iterator.Next.t(string)) = "read";
} = BYOBReader;

type t = Fetch.readableStream;

[@bs.get] external locked: t => bool = "";
[@bs.send] external cancel: t => Js.Promise.t(unit) = "";
[@bs.send.pipe: t] external cancelWith: string => Js.Promise.t(string) = "cancel";
[@bs.send] external getReader: t => DefaultReader.t = "";
[@bs.send] external getReaderBYOB: (t, [@bs.as {json|{"mode": "byob"}|json}] _) => BYOBReader.t = "getReader";
[@bs.send] external tee: t => (t, t) = "";
