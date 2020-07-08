open Webapi.Dom;
open Webapi.Dom.DomStringMap;

let dataset =
  document
  |> Document.createElement("div")
  |> Element.asHtmlElement
  |> Belt.Option.map(_, HtmlElement.dataset);

let () = switch (dataset) {
  | Some(dataset) =>
    set("fooKey", "barValue", dataset);
    dataset |> get("fooKey") |> ignore;
    unsafeDeleteKey("fooKey", dataset);
  | None => ()
};
