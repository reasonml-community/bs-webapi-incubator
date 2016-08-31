let module Document = {
  type element;
  external getElementById : string => element = "document.getElementById" [@@bs.val];
};

let module Window = {
  type intervalId;
  external setInterval : (unit => unit) => int => intervalId = "window.setInterval" [@@bs.val];
  external clearInterval : intervalId => unit = "window.clearInterval" [@@bs.val];
};

let module Console = {
  external log : 'anything => unit = "console.log" [@@bs.val];
};
