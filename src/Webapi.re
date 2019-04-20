type rafId;
type selection = {
  _type: string,
  anchorNode: Dom.element,
  anchorOffset: int,
  baseNode: Dom.element,
  baseOffset: int,
  extentNode: Dom.element,
  extentOffset: int,
  focusNode: Dom.element,
  focusOffset: int,
  isCollapsed: bool,
  rangeCount: int,
  toString: unit => string
};

[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";
[@bs.val] external requestCancellableAnimationFrame : (float => unit) => rafId = "requestAnimationFrame";
[@bs.val] external cancelAnimationFrame : rafId => unit = "";
[@bs.val] external getSelection : unit => selection = "";

module Base64 = Webapi__Base64;
module Canvas = Webapi__Canvas;
module Dom = Webapi__Dom;
module File = Webapi__File;
module Url = Webapi__Url;
