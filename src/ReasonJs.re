let module Date = {
  external now : unit => int = "Date.now" [@@bs.val];
};
let module Math = {
  external random : unit => float = "Math.random" [@@bs.val];
};

let module Window = {
  type t;
  external window : t = "window" [@@bs.val];
  external _innerWidth : t => int = "innerWidth" [@@bs.get];
  let innerWidth () => _innerWidth window;
  external _innerHeight : t => int = "innerHeight" [@@bs.get];
  let innerHeight () => _innerHeight window;
  external addEventListener : string => (unit => unit [@bs]) => unit = "window.addEventListener" [@@bs.val];
  /* external onLoad : t => (unit => unit [@bs]) => unit = "window.onload" [@@bs.send]; */
};

let module Document = {
  type element;
  external getElementById : string => element = "document.getElementById" [@@bs.val];
  external appendChild : element => 'element => unit = "appendChild" [@@bs.send];
};

type intervalId;

external setInterval : (unit => unit) => int => intervalId = "setInterval" [@@bs.val];

external clearInterval : intervalId => unit = "clearInterval" [@@bs.val];

type timeoutId;

external setTimeout : (unit => unit) => int => timeoutId = "setTimeout" [@@bs.val];

external clearTimeout : timeoutId => unit = "clearTimeout" [@@bs.val];

let module Console = {
  external log : 'anything => unit = "console.log" [@@bs.val];
};

let module LocalStorage = {
  external getItem : string => 'a = "localStorage.getItem" [@@bs.val];
  external setItem : string => 'a => unit = "localStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "localStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "localStorage.clear" [@@bs.val];
  external key : int => 'a = "localStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|localStorage.length|}];
};

let module SessionStorage = {
  external getItem : string => 'a = "sessionStorage.getItem" [@@bs.val];
  external setItem : string => 'a => unit = "sessionStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "sessionStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "sessionStorage.clear" [@@bs.val];
  external key : int => 'a = "sessionStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|sessionStorage.length|}];
};
