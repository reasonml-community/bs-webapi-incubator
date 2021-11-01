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

/** @since 0.20.0 */
module AudioTrack = Webapi__AudioTrack;
/** @since 0.20.0 */
module AudioTrackList = Webapi__AudioTrackList;

/** @since 0.20.0 */
module TextTrack = Webapi__TextTrack;
/** @since 0.20.0 */
module TextTrackList = Webapi__TextTrackList;

/** @since 0.20.0 */
module VideoTrack = Webapi__VideoTrack;
/** @since 0.20.0 */
module VideoTrackList = Webapi__VideoTrackList;

/** @since 0.20.0 */
module TimeRanges = Webapi__TimeRanges;

/** @since 0.19.0 */
module ReadableStream = Webapi__ReadableStream;

module ResizeObserver = Webapi__ResizeObserver;
module Url = Webapi__Url;

type rafId;

[@bs.val] external requestAnimationFrame : (float => unit) => unit = "";
[@bs.val] external requestCancellableAnimationFrame : (float => unit) => rafId = "requestAnimationFrame";
[@bs.val] external cancelAnimationFrame : rafId => unit = "";
