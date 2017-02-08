open ReasonJs;

let el = Document.createElement document "strong";
let event = Document.createEvent document "my-event";
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

Window.alert window "hello!";
let _ = Window.confirm window "is ok?";
let _ = Window.getComputedStyle window el;
let _ = Window.getComputedStyleWithPseudoElement window el "hover";
let _ = Window.prompt window "type you password, please?";
let _ = Window.promptWithDefault window "type password or use this?" "password";
let _ = Window.scroll window 0 0;

Window.onLoad window (fun () => print_endline "load");

/* EventTarget interface */
Window.addEventListener window "click" handleClick;
Window.addEventListenerWithOptions window "click" handleClick  { "passive": true };
Window.addEventListenerUseCapture window "click" handleClick (Js.Boolean.to_js_boolean true);
Window.removeEventListener window "click" handleClick;
Window.removeEventListenerWithOptions window "click" handleClick  { "passive": true };
Window.removeEventListenerUseCapture window "click" handleClick (Js.Boolean.to_js_boolean true);
let _ = Window.dispatchEvent window event;
