let module Document = {
  type element;
  external getElementById : string => element = "document.getElementById" [@@bs.val];
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
