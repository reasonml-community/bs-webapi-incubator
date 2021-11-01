open Webapi__Dom;
open Webapi__Dom__HtmlVideoElement;

let el = Document.createElement("video", document)
  |> ofElement
  |> Belt.Option.getUnsafe;

let body = Document.asHtmlDocument(document)
-> Belt.Option.flatMap(HtmlDocument.body)
-> Belt.Option.getUnsafe;

Element.appendChild(el |> Obj.magic |> Element.asNode, body);

let test = buffered(el);
Js.log2("Webapi.Dom.HtmlVideoElement.buffered:", test);

let test = controls(el);
Js.log2("Webapi.Dom.HtmlVideoElement.controls:", test);

let test = setControls(el, true);
Js.log2("Webapi.Dom.HtmlVideoElement.setControls:", test);

let test = controlsList(el);
Js.log2("Webapi.Dom.HtmlVideoElement.controlsList:", test);

let test = crossOrigin(el);
Js.log2("Webapi.Dom.HtmlVideoElement.crossOrigin:", test);

let test = setCrossOrigin(el, `empty);
Js.log2("Webapi.Dom.HtmlVideoElement.setCrossOrigin:", test);

let test = currentSrc(el);
Js.log2("Webapi.Dom.HtmlVideoElement.currentSrc:", test);

let test = currentTime(el);
Js.log2("Webapi.Dom.HtmlVideoElement.currentTime:", test);

let test = setCurrentTime(el, 0.1);
Js.log2("Webapi.Dom.HtmlVideoElement.setCurrentTime:", test);

let test = defaultMuted(el);
Js.log2("Webapi.Dom.HtmlVideoElement.defaultMuted:", test);

let test = setDefaultMuted(el, true);
Js.log2("Webapi.Dom.HtmlVideoElement.setDefaultMuted:", test);

let test = defaultPlaybackRate(el);
Js.log2("Webapi.Dom.HtmlVideoElement.defaultPlaybackRate:", test);

let test = setDefaultPlaybackRate(el, 1.25);
Js.log2("Webapi.Dom.HtmlVideoElement.setDefaultPlaybackRate:", test);

let test = disableRemotePlayback(el);
Js.log2("Webapi.Dom.HtmlVideoElement.disableRemotePlayback:", test);

let test = setDisableRemotePlayback(el, true);
Js.log2("Webapi.Dom.HtmlVideoElement.setDisableRemotePlayback:", test);

let test = duration(el);
Js.log2("Webapi.Dom.HtmlVideoElement.duration:", test);

let test = ended(el);
Js.log2("Webapi.Dom.HtmlVideoElement.ended:", test);

let test = error(el);
Js.log2("Webapi.Dom.HtmlVideoElement.error:", test);

let test = loop(el);
Js.log2("Webapi.Dom.HtmlVideoElement.loop:", test);

let test = setLoop(el, true);
Js.log2("Webapi.Dom.HtmlVideoElement.setLoop:", test);

let test = muted(el);
Js.log2("Webapi.Dom.HtmlVideoElement.muted:", test);

let test = setMuted(el, false);
Js.log2("Webapi.Dom.HtmlVideoElement.setMuted:", test);

let test = networkState(el);
Js.log2("Webapi.Dom.HtmlVideoElement.networkState:", test);

let test = paused(el);
Js.log2("Webapi.Dom.HtmlVideoElement.paused:", test);

let test = playbackRate(el);
Js.log2("Webapi.Dom.HtmlVideoElement.playbackRate:", test);

let test = setPlaybackRate(el, 0.1);
Js.log2("Webapi.Dom.HtmlVideoElement.setPlaybackRate:", test);

let test = played(el);
Js.log2("Webapi.Dom.HtmlVideoElement.played:", test);

let test = preload(el);
Js.log2("Webapi.Dom.HtmlVideoElement.preload:", test);

let test = readyState(el);
Js.log2("Webapi.Dom.HtmlVideoElement.readyState:", test);

let test = seekable(el);
Js.log2("Webapi.Dom.HtmlVideoElement.seekable:", test);

let test = seeking(el);
Js.log2("Webapi.Dom.HtmlVideoElement.seeking:", test);

let test = src(el);
Js.log2("Webapi.Dom.HtmlVideoElement.src:", test);

let test = setSrc(el, "#");
Js.log2("Webapi.Dom.HtmlVideoElement.setSrc:", test);

let test = srcObject(el);
Js.log2("Webapi.Dom.HtmlVideoElement.srcObject:", test);

let test = audioTracks(el);
Js.log2("Webapi.Dom.HtmlVideoElement.audioTracks:", test);

let len = Webapi.AudioTrackList.length(test);
Js.log2("Webapi.AudioTrackList.length:", len);
let track = Webapi.AudioTrackList.get(test, 0);
Js.log2("Webapi.AudioTrackList.get:", track);
let track = Webapi.AudioTrackList.getTrackById(test, "1");
Js.log2("Webapi.AudioTrackList.getTrackById:", track);

let test = textTracks(el);
Js.log2("Webapi.Dom.HtmlVideoElement.textTracks:", test);

let len = Webapi.TextTrackList.length(test);
Js.log2("Webapi.TextTrackList.length:", len);
let track = addTextTrack(el, "subtitles", ~label="My Text Track", ~language="en-US", ());
Js.log2("Webapi.Dom.HtmlVideoElement.addTextTrack:", track);
let track = Webapi.TextTrackList.get(test, 0) -> Belt.Option.getUnsafe;
Js.log2("Webapi.TextTrackList.get:", track);

let test2 = Webapi.TextTrack.id(track);
Js.log2("Webapi.TextTrack.id:", test2);
let test2 = Webapi.TextTrack.inBandMetadataTrackDispatchType(track);
Js.log2("Webapi.TextTrack.inBandMetadataTrackDispatchType:", test2);
let test2 = Webapi.TextTrack.kind(track);
Js.log2("Webapi.TextTrack.kind:", test2);
let test2 = Webapi.TextTrack.label(track);
Js.log2("Webapi.TextTrack.label:", test2);
let test2 = Webapi.TextTrack.language(track);
Js.log2("Webapi.TextTrack.language:", test2);
let test2 = Webapi.TextTrack.mode(track);
Js.log2("Webapi.TextTrack.mode:", test2);
let test2 = Webapi.TextTrack.setMode(track, "hidden");
Js.log2("Webapi.TextTrack.setMode:", test2);

let cues = Webapi.TextTrack.cues(track) -> Belt.Option.getUnsafe;
Js.log2("Webapi.TextTrack.cues:", cues);

let activeCues = Webapi.TextTrack.activeCues(track) -> Belt.Option.getUnsafe;
Js.log2("Webapi.TextTrack.activeCues:", cues);

let len = Webapi.TextTrack.TextTrackCueList.length(cues);
Js.log2("Webapi.TextTrack.TextTrackCueList.length:", len);
let len = Webapi.TextTrack.TextTrackCueList.length(activeCues);
Js.log2("Webapi.TextTrack.TextTrackCueList.length:", len);

let track = Webapi.TextTrackList.getTrackById(test, "");
Js.log2("Webapi.TextTrackList.getTrackById:", track);

let track = Webapi.TextTrackList.length(test);
Js.log2("Webapi.TextTrackList.length:", track);

// not well supported

// let test = videoTracks(el);
// Js.log2("Webapi.Dom.HtmlVideoElement.videoTracks:", test);

// let len = Webapi.VideoTrackList.length(test);
// Js.log2("Webapi.VideoTrackList.length:", len);
// let track = Webapi.VideoTrackList.get(test, 0);
// Js.log2("Webapi.VideoTrackList.get:", track);
// let track = Webapi.VideoTrackList.getTrackById(test, "1");
// Js.log2("Webapi.VideoTrackList.getTrackById:", track);

let test = volume(el);
Js.log2("Webapi.Dom.HtmlVideoElement.volume:", test);

let test = setVolume(el, 1.0);
Js.log2("Webapi.Dom.HtmlVideoElement.setVolume:", test);

let test = canPlayType(el, "video/webm");
Js.log2("Webapi.Dom.HtmlVideoElement.canPlayType:", test);

let test = load(el);
Js.log2("Webapi.Dom.HtmlVideoElement.load:", test);

let test = pause(el);
Js.log2("Webapi.Dom.HtmlVideoElement.pause:", test);

let test = play(el);
Js.log2("Webapi.Dom.HtmlVideoElement.play:", test);

let test = setHeight(el, 100);
Js.log2("Webapi.Dom.HtmlVideoElement.setHeight:", test);
let test = height(el);
Js.log2("Webapi.Dom.HtmlVideoElement.height:", test);
let test = poster(el);
Js.log2("Webapi.Dom.HtmlVideoElement.poster:", test);
let test = setPoster(el, "foo");
Js.log2("Webapi.Dom.HtmlVideoElement.setPoster:", test);
let test = videoHeight(el);
Js.log2("Webapi.Dom.HtmlVideoElement.videoHeight:", test);
let test = videoWidth(el);
Js.log2("Webapi.Dom.HtmlVideoElement.videoWidth:", test);
let test = setWidth(el, 100);
Js.log2("Webapi.Dom.HtmlVideoElement.setWidth:", test);
let test = width(el);
Js.log2("Webapi.Dom.HtmlVideoElement.width:", test);
