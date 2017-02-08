open ReasonJs;

let _ = Promise.(
  fetch "/api/hellos/1"
    |> then_ Response.text
    |> then_ print_endline
    |> catch (fun err => print_endline err)
);
