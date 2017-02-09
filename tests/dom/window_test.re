open ReasonJs;

let el = document |> Document.createElement "strong";
let event = document |> Document.createEvent "my-event";
let handleClick e => print_endline "asd";

let _ = Window.document window;
let _ = Window.fullScreen window;
let _ = Window.history window;
let _ = Window.innerWidth window;
let _ = Window.innerHeight window;
let _ = Window.location window;
let _ = Window.setLocation window "http://reason.ml";
let _ = Window.parent window;
let _ = Window.top window;
let _ = Window.window;

Window.alert "hello!" window;
let _ = Window.confirm "is ok?" window;
let _ = Window.getComputedStyle el window;
let _ = Window.getComputedStyleWithPseudoElement el "hover" window;
let _ = Window.prompt "type you password, please?" window;
let _ = Window.promptWithDefault "type password or use this?" "password" window;
let _ = Window.scroll 0 0 window;

Window.setOnLoad window (fun () => print_endline "load");
