open Webapi.Blob;

let test_arrayBuffer = blob => blob |> arrayBuffer |> Js.Promise.then_(buffer =>
  buffer
  |> Js.Typed_array.ArrayBuffer.byteLength
  |> Js.log
  |> Js.Promise.resolve);

let test_size = blob => blob |> size |> Js.log;

let test_slice = blob => test_size(slice(~start=0, blob));

let test_text = blob => blob |> text |> Js.Promise.then_(string =>
  string
  |> Js.log
  |> Js.Promise.resolve);

let test_type = blob => blob |> type_ |> Js.log;
