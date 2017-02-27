open ReasonJs;

let p = Fetch.fetch "/greetings";

let p2 = Promise.(
  p |> andThen (fun res => Fetch.Response.text res)
    |> then_ (fun text => print_endline text)
);

let _ = p2 |> Promise.catch (fun err => Js.log err);

let _ = Promise.(
  p |> then_ (fun res => Fetch.Response.json res)
    |> then_ (fun json => Js.log json)
);
