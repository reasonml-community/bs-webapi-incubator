
/*
 * vim: set ft=rust:
 * vim: set ft=reason:
 */

let module Document = {
  type element;
  external getElementById : string => element = "document.getElementById" [@@bs.val];
};

let module Window = {
  type requestId;
  type intervalId;
  type timeoutId;
  external requestAnimationFrame: (unit => unit) => requestId = "window.requestAnimationFrame" [@@bs.val];
  external cancelAnimationFrame: requestId => unit = "window.cancelAnimationFrame" [@@bs.val];
  external setInterval : (unit => unit) => int => intervalId = "window.setInterval" [@@bs.val];
  external clearInterval : intervalId => unit = "window.clearInterval" [@@bs.val];
  external setTimeout: (unit => unit) => int => timeoutId = "window.setTimeout" [@@bs.val];
  external clearTimeout : timeoutId => unit = "window.clearTimeout" [@@bs.val];
};

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
