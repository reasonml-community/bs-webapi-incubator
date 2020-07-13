module Base64 = Webapi__Base64;
module Blob = Webapi__Blob;
module Canvas = Webapi__Canvas;
module Dom = Webapi__Dom;
module File = Webapi__File;
module FormData = Webapi__FormData;
module Iterator = Webapi__Iterator;
module Performance = Webapi__Performance;
module Url = Webapi__Url;
module ResizeObserver = Webapi__ResizeObserver;

type rafId;

[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";
[@bs.val] external requestCancellableAnimationFrame : (float => unit) => rafId = "requestAnimationFrame";
[@bs.val] external cancelAnimationFrame : rafId => unit = "";
