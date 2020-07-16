module Base64 = Webapi__Base64;
module Blob = Webapi__Blob;
module Canvas = Webapi__Canvas;
module Dom = Webapi__Dom;
module File = Webapi__File;

/** Re-export from [bs-fetch] for convenience. */
module FormData = Fetch.FormData;

/** Re-export from [bs-fetch] for convenience. */
module Iterator = FormData.Iterator;

module Performance = Webapi__Performance;
module Url = Webapi__Url;
module ResizeObserver = Webapi__ResizeObserver;

type rafId;

[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";
[@bs.val] external requestCancellableAnimationFrame : (float => unit) => rafId = "requestAnimationFrame";
[@bs.val] external cancelAnimationFrame : rafId => unit = "";
