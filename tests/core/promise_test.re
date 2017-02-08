open ReasonJs;

let p = fetch "/greatings";

let p2 = Promise.(
  p |> then_ (fun res => Response.text res)
    |> then_ (fun text => print_endline text)
);

let _ = p2 |> Promise.catch (fun err => Js.log err);

let _ = Promise.(
  p |> then_ (fun res => Response.json res)
    |> then_ (fun json => Js.log json)
);
