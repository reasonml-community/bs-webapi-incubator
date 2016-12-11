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

/* TODO: maybe remove this. We have Random.float 1.0 in OCaml */
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

module Promise = {
  type promiseT 'a;
  type errorT;
  external thenDo : promiseT 'a => ('a => 'b) => promiseT 'b = "then" [@@bs.send];
  external catchError : promiseT 'a => (errorT => unit) => promiseT 'a = "catch" [@@bs.send];
};

module Response = {
  type responseT;
  /* TODO: type Headers */
  external ok : responseT => Js.boolean = "ok" [@@bs.get];
  external redirected : responseT => Js.boolean = "redirected" [@@bs.get];
  external status : responseT => int = "status" [@@bs.get];
  external statusText : responseT => string = "statusText" [@@bs.get];
  external type_ : responseT => string = "type" [@@bs.get];
  external url : responseT => string = "url" [@@bs.get];

  /** body getters **/
  external json : responseT => Js.t 'a = "json" [@@bs.send];
  external text : responseT => string = "text" [@@bs.send];
};

external fetch : string => Promise.promiseT Response.responseT = "fetch" [@@bs.val];
