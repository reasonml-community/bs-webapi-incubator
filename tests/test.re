open ReasonJs;

let date = Date.now ();

let myInterval = setInterval (fun () => Js.log "hello!") 1000;

let width = Window.(innerWidth window);

let height = Window.(innerHeight window);

let value = Document.getElementById "foo" |> Document.value;

Window.(addEventListener window "click" (fun () => print_endline "asd"));

Window.(onLoad window (fun () => print_endline "load"));

let p = fetch "/greatings";

let p2 =
  Promise.(thenDo (thenDo p (fun res => Response.text res)) (fun text => print_endline text));

let p3 = Promise.catchError p2 (fun err => Js.log err);

let p4 = Promise.(thenDo (thenDo p (fun res => Response.json res)) (fun json => Js.log json));
