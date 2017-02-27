open ReasonJs;
open Fetch;

Promise.(
  fetch "/api/hellos/1"
    |> andThen Response.text
    |> then_ print_endline
    |> catch (fun _ => print_endline "error")
);

Promise.(
  fetchWithInit "/api/hello" (RequestInit.make method_::Post ())
    |> andThen Response.text
    |> then_ print_endline
    |> catch (fun err => print_endline err)
);
