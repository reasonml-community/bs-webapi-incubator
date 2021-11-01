/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#texttrack
 */
type t;
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });

/** @since 0.20.0 */
module TextTrackCueList = Webapi__TextTrack__TextTrackCueList;
/** @since 0.20.0 */
module TextTrackCue = Webapi__TextTrack__TextTrackCue;

// TODO: string enum for
// enum TextTrackMode { "disabled",  "hidden",  "showing" };
// enum TextTrackKind { "subtitles",  "captions",  "descriptions",  "chapters",  "metadata" };
type textTrackMode = string;
type textTrackKind = string;

/** Properties */

[@bs.get] external activeCues: t => option(TextTrackCueList.t) = "activeCues";
[@bs.get] external cues: t => option(TextTrackCueList.t) = "cues";
[@bs.get] external id: t => string = "id";
[@bs.get] external inBandMetadataTrackDispatchType: t => option(string) = "inBandMetadataTrackDispatchType";
[@bs.get] external kind: t => textTrackKind = "kind";
[@bs.get] external label: t => string = "label";
[@bs.get] external language: t => string = "language";
[@bs.get] external mode: t => textTrackMode = "mode";
[@bs.set] external setMode: (t, textTrackMode) => unit = "mode";

/** Methods */

[@bs.send] external addCue: (t, TextTrackCue.t) => unit = "addCue";
[@bs.send] external removeCue: (t, TextTrackCue.t) => unit = "removeCue";
