/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#htmlmediaelement
 */
module Impl = (T: {type t;}) => {
  type t_htmlMediaElement = T.t;

  type mediaProvider; // TODO: one of MediaStream, MediaSource, or Blob

  /** Properties */
  [@bs.get] external buffered: t_htmlMediaElement => Webapi__TimeRanges.t = "buffered";

  // This is part of the recommendation spec
  // type mediaController; // TODO
  // [@bs.get] [@bs.return nullable] external controller: t_htmlMediaElement => option(mediaController) = "controller";
  // [@bs.set] external setController: (t_htmlMediaElement, mediaController) => unit = "controller";

  [@bs.get] external controls: t_htmlMediaElement => bool = "controls";
  [@bs.set] external setControls: (t_htmlMediaElement, bool) => unit = "controls";

  /** One or more of "nodownload", "nofullscreen", and "noremoteplayback" */
  [@bs.get] external controlsList: t_htmlMediaElement => Dom.domTokenList = "controlsList";

  [@bs.get] [@bs.return nullable] external crossOrigin: t_htmlMediaElement => option(string) = "crossOrigin";
  [@bs.set]
  external setCrossOrigin:
    (
      t_htmlMediaElement,
      [@bs.string] [ | `anonymous | [@bs.as "use-credentials"] `useCredentials | [@bs.as ""] `empty]
    ) =>
    unit =
    "crossOrigin";

  [@bs.get] external currentSrc: t_htmlMediaElement => string = "currentSrc";

  [@bs.get] external currentTime: t_htmlMediaElement => float = "currentTime";
  [@bs.set] external setCurrentTime: (t_htmlMediaElement, float) => unit = "currentTime";

  [@bs.get] external defaultMuted: t_htmlMediaElement => bool = "defaultMuted";
  [@bs.set] external setDefaultMuted: (t_htmlMediaElement, bool) => unit = "defaultMuted";

  [@bs.get] external defaultPlaybackRate: t_htmlMediaElement => float = "defaultPlaybackRate";
  [@bs.set] external setDefaultPlaybackRate: (t_htmlMediaElement, float) => unit = "defaultPlaybackRate";

  [@bs.get] external disableRemotePlayback: t_htmlMediaElement => bool = "disableRemotePlayback";
  [@bs.set] external setDisableRemotePlayback: (t_htmlMediaElement, bool) => unit = "disableRemotePlayback";

  [@bs.get] external duration: t_htmlMediaElement => float = "duration";
  [@bs.get] external ended: t_htmlMediaElement => bool = "ended";
  [@bs.get] [@bs.return nullable] external error: t_htmlMediaElement => option(Webapi__Dom__MediaError.t) = "error";

  [@bs.get] external loop: t_htmlMediaElement => bool = "loop";
  [@bs.set] external setLoop: (t_htmlMediaElement, bool) => unit = "loop";

  // [@bs.get] external mediaGroup: t_htmlMediaElement => string = "mediaGroup"; // Not well supported
  // [@bs.set] external setMediaGroup: (t_htmlMediaElement, string) => unit = "mediaGroup"; // Not well supported

  [@bs.get] external muted: t_htmlMediaElement => bool = "muted";
  [@bs.set] external setMuted: (t_htmlMediaElement, bool) => unit = "muted";

  type mediaNetworkState =
    | NetworkEmpty // 0
    | NetworkIdle // 1
    | NetworkLoading // 2
    | NetworkNoSource; // 3

  let decodeNetworkState = fun
    | 0 => Some(NetworkEmpty)
    | 1 => Some(NetworkIdle)
    | 2 => Some(NetworkLoading)
    | 3 => Some(NetworkNoSource)
    | _ => None;

  [@bs.get] external _networkState: t_htmlMediaElement => int = "networkState";
  let networkState = t_htmlMediaElement => _networkState(t_htmlMediaElement) |> decodeNetworkState;

  [@bs.get] external paused: t_htmlMediaElement => bool = "paused";

  [@bs.get] external playbackRate: t_htmlMediaElement => float = "playbackRate";
  [@bs.set] external setPlaybackRate: (t_htmlMediaElement, float) => unit = "playbackRate";

  [@bs.get] external played: t_htmlMediaElement => Webapi__TimeRanges.t = "played";
  [@bs.get] external preload: t_htmlMediaElement => string = "preload";

  type readyStateEnum =
    | HaveNothing
    | HaveMetadata
    | HaveCurrentData
    | HaveFutureData
    | HaveEnoughData;

  let decodeReadyState = fun
    | 0 => Some(HaveNothing)
    | 1 => Some(HaveMetadata)
    | 2 => Some(HaveCurrentData)
    | 3 => Some(HaveFutureData)
    | 4 => Some(HaveEnoughData)
    | _ => None;

  [@bs.get] external _readyState: t_htmlMediaElement => int = "readyState";
  let readyState = t => _readyState(t) |> decodeReadyState;

  [@bs.get] external seekable: t_htmlMediaElement => Webapi__TimeRanges.t = "seekable";
  [@bs.get] external seeking: t_htmlMediaElement => bool = "seeking";
  // [@bs.get] external sinkId: t_htmlMediaElement => string = "sinkId"; // experimental

  [@bs.get] external src: t_htmlMediaElement => string = "src";
  [@bs.set] external setSrc: (t_htmlMediaElement, string) => unit = "src";

  [@bs.get] [@bs.return nullable] external srcObject: t_htmlMediaElement => option(mediaProvider) = "srcObject";

  [@bs.get] external audioTracks: t_htmlMediaElement => Webapi__AudioTrackList.t = "textTracks";
  [@bs.get] external textTracks: t_htmlMediaElement => Webapi__TextTrackList.t = "textTracks";

  // [@bs.get] external videoTracks: t_htmlMediaElement => Webapi__VideoTrackList.t = "videoTracks"; // Not widely available

  [@bs.get] external volume: t_htmlMediaElement => float = "volume";
  [@bs.set] external setVolume: (t_htmlMediaElement, float) => unit = "volume";

  /** Methods */

  [@bs.send] external addTextTrack: (t_htmlMediaElement, Webapi__TextTrack.textTrackKind, ~label: string, ~language: string, unit) => Webapi__TextTrack.t = "addTextTrack";

  // return is one of "probably", "maybe", or ""
  [@bs.send] external canPlayType: (t_htmlMediaElement, string) => string = "canPlayType";
  // [@bs.send] external fastSeek: (t_htmlMediaElement, float) => unit = "fastSeek"; // experimental
  [@bs.send] external load: t_htmlMediaElement => unit = "load";
  [@bs.send] external pause: t_htmlMediaElement => unit = "pause";
  [@bs.send] external play: t_htmlMediaElement => Js.Promise.t(unit) = "play";

  // [@bs.send] external getStartDate: t_htmlMediaElement => Js.Date.t = "getStartDate"; // not supported?
};

type t; // TODO: Dom.htmlMediaElement

include Webapi__Dom__EventTarget.Impl({type nonrec t = t;});
include Webapi__Dom__Node.Impl({type nonrec t = t;});
include Webapi__Dom__Element.Impl({type nonrec t = t;});
include Webapi__Dom__HtmlElement.Impl({type nonrec t = t;});
include Impl({type nonrec t = t;});
