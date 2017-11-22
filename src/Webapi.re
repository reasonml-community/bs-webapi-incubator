[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";

module Base64 = Base64Re;

module Canvas = CanvasRe;

module Dom = DomRe;

module File = {
  include FileRe;
  module Url = UrlRe;
};
