open ReasonJs;
open Fetch;

let _ = Bs_promise.(
  fetch "/api/hellos/1"
    |> andThen Response.text
    |> then_ print_endline
    |> catch (fun _ => print_endline "error")
);

let _ = Bs_promise.(
  fetchWithInit "/api/hello" (RequestInit.make method_::Post ())
    |> andThen Response.text
    |> then_ print_endline
    |> catch (fun _ => print_endline "error")
);
