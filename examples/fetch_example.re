open ReasonJs;
open Fetch;

let _ = Promise.(
  fetch "/api/hellos/1"
    |> and_then Response.text
    |> then_ print_endline
    |> catch (fun err => print_endline err)
);

let _ = Promise.(
  fetchWithInit "/api/hello" (RequestInit.make method_::Post ())
    |> and_then Response.text
    |> then_ print_endline
    |> catch (fun err => print_endline err)
);
