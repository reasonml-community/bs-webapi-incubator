open ReasonJs;
open Fetch;

let _ = Promise.(
  fetch "/api/hellos/1"
    |> andThen Response.text
    |> then_ print_endline
    |> catch (fun _ => print_endline "error")
);

let _ = Promise.(
  fetchWithInit "/api/hello" (RequestInit.make method_::Post ())
    |> andThen Response.text
    |> then_ print_endline
    |> catch (fun _ => print_endline "error")
);
