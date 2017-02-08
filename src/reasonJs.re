type intervalId;
external setInterval : (unit => unit) => int => intervalId = "setInterval" [@@bs.val];
external clearInterval : intervalId => unit = "clearInterval" [@@bs.val];

type timeoutId;
external setTimeout : (unit => unit) => int => timeoutId = "setTimeout" [@@bs.val];
external clearTimeout : timeoutId => unit = "clearTimeout" [@@bs.val];

external requestAnimationFrame : (unit => unit) => unit = "requestAnimationFrame" [@@bs.val];

external window : Dom.window = "window" [@@bs.val];
external document : Dom.document = "document" [@@bs.val];
external history : Dom.history = "document.history" [@@bs.val];
external location : Dom.location = "document.location" [@@bs.val];

module CanvasElement = {
  external getContext : Dom.element => string => Gl.glT = "getContext" [@@bs.send];
};

let fetch = Fetch.fetch;
