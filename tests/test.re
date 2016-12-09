open ReasonJs;

let date = Date.now ();

let myInterval = setInterval (fun () => Console.log "hello!") 1000;

let width = Window.(innerWidth window);

let heigth = Window.(innerHeight window);

Window.(addEventListener window "click" (fun () => print_endline "asd"));

Window.(onLoad window (fun () => print_endline "load"));

