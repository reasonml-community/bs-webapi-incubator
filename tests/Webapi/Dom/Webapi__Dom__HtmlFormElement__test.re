open Webapi.FormData;
open Webapi.Dom.HtmlFormElement;

let test_data = formElement => formElement |> data |> get("foo");
