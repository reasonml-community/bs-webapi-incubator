open Webapi.ReadableStream;

module DefaultReader__test = {
  open! DefaultReader;

  let test_closed = reader => closed(reader);

  let test_cancel = reader =>
    reader
    |> cancel
    |> Js.Promise.then_(() =>
      "cancelled"
      |> Js.log
      |> Js.Promise.resolve);

  let test_cancelWith = reader =>
    reader
    |> cancelWith("reason")
    |> Js.Promise.then_(reason =>
      reason
      |> Js.log
      |> Js.Promise.resolve);

  let test_releaseLock = reader => releaseLock(reader);

  let test_read = reader =>
    reader
    |> read
    |> Js.Promise.then_(next =>
      next
      |> Fetch__Iterator.Next.value
      |> Belt.Option.forEach(_, Js.log)
      |> Js.Promise.resolve);
};

let test_locked = stream => locked(stream);

let test_cancel = stream => cancel(stream);

let test_cancelWith = stream => cancelWith("reason", stream);

let test_getReader = stream => getReader(stream);

let test_getReaderBYOB = stream => getReaderBYOB(stream);

let test_tee = stream => {
  let (stream1, stream2) = tee(stream);

  stream1 |> cancel |> ignore;
  stream2 |> cancel |> ignore;
};
