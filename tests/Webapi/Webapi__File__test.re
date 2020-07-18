open Webapi.File;

let test_lastModified = file => file |> lastModified |> Js.log;
let test_name = file => file |> name |> Js.log;
let test_preview = file => file |> preview |> Js.log;
