type rafId;

[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";
[@bs.val] external requestCancellableAnimationFrame : (float => unit) => rafId = "requestAnimationFrame";
[@bs.val] external cancelAnimationFrame : rafId => unit = "";

module Base64 = Base64Re;
module Canvas = CanvasRe;
module Dom = DomRe;

module File = {
  include FileRe;
  module Url = UrlRe;
};
