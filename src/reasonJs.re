module Window = {
  type t;
  external window : t = "window" [@@bs.val];
  external innerWidth : t => int = "innerWidth" [@@bs.get];
  external innerHeight : t => int = "innerHeight" [@@bs.get];
  external addEventListener : t => string => (unit => unit) => unit = "addEventListener" [@@bs.send];
  external onLoad : t => (unit => unit) => unit = "onload" [@@bs.set];
};

module Date = {
  type t;
  external make : unit => t = "Date" [@@bs.new];
  external makeWithValue : int => t = "Date" [@@bs.new];
  external now : unit => int = "" [@@bs.val "Date.now"];
  external getTimezoneOffset : t => int = "" [@@bs.send "getTimezoneOffset"];
  external getHours : t => int = "" [@@bs.send "getHours"];
  external getTime : t => int = "" [@@bs.send "getTime"];
};

module Math = {
  external random : unit => float = "Math.random" [@@bs.val];
};

module Document = {
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

module Console = {
  external log : 'anything => unit = "console.log" [@@bs.val];
};

module LocalStorage = {
  external getItem : string => 'a = "localStorage.getItem" [@@bs.val];
  external setItem : string => 'a => unit = "localStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "localStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "localStorage.clear" [@@bs.val];
  external key : int => 'a = "localStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|localStorage.length|}];
};

module SessionStorage = {
  external getItem : string => 'a = "sessionStorage.getItem" [@@bs.val];
  external setItem : string => 'a => unit = "sessionStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "sessionStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "sessionStorage.clear" [@@bs.val];
  external key : int => 'a = "sessionStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|sessionStorage.length|}];
};

