module Base64 = Webapi__Base64;

/** @since 0.18.0 */
module Blob = Webapi__Blob;
module Canvas = Webapi__Canvas;
module Dom = Webapi__Dom;
module File = Webapi__File;

/** Re-export from [bs-fetch] for convenience. To use, you will also
    need to add the [bs-fetch] package as a dependency.

    To get the [FormData] of an HTML form, use
    [Webapi.Dom.HtmlFormElement.data].

    @since 0.18.0 */
module FormData = Fetch.FormData;

/** Re-export from [bs-fetch] for convenience. See also
    {!module:FormData}.

    @since 0.18.0 */
module Iterator = FormData.Iterator;

module Performance = Webapi__Performance;

/** @since 0.19.0 */
module ReadableStream = Webapi__ReadableStream;

/** @since 0.20.0 */
module IntersectionObserver = Webapi__IntersectionObserver;
module ResizeObserver = Webapi__ResizeObserver;
module Url = Webapi__Url;

type rafId;

[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";
[@bs.val] external requestCancellableAnimationFrame : (float => unit) => rafId = "requestAnimationFrame";
[@bs.val] external cancelAnimationFrame : rafId => unit = "";
