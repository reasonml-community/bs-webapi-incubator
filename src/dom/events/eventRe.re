module Impl(T: { type t; }) => {
  external bubbles : T.t => bool = "" [@@bs.get];
  external cancelable : T.t => bool = "" [@@bs.get];
  external composed : T.t => bool = "" [@@bs.get];
  external currentTarget : T.t => DomTypesRe.eventTarget = "" [@@bs.get];
  external defaultPrevented : T.t => bool = "" [@@bs.get];
  external eventPhase : T.t => int /* eventPhase enum */ = "" [@@bs.get];
  let eventPhase : T.t => DomTypesRe.eventPhase = fun self => DomTypesRe.decodeEventPhase (eventPhase self);
  external target : T.t => DomTypesRe.eventTarget = "" [@@bs.get];
  external timeStamp : T.t => float = "" [@@bs.get];
  external type_ : T.t => string = "type" [@@bs.get];
  external isTrusted : T.t => bool = "" [@@bs.get];

  external preventDefault : unit = "" [@@bs.send.pipe: T.t];
  external stopImmediatePropagation : unit = "" [@@bs.send.pipe: T.t];
  external stopPropagation : unit = "" [@@bs.send.pipe: T.t];
};

type t = DomTypesRe.event;
include Impl { type nonrec t = t };

external make : string => t = "Event" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "Event" [@@bs.new];


/* Unimplemented Event interfaces

AudioProcessingEvent /* deprecated */
BeforeInputEvent /* experimental? Looks like it might just be an InputEvent */
BlobEvent /* experimental, MediaStream recording */
CSSFontFaceLoadEvent /* experimental - https://www.w3.org/TR/css-font-loading-3/#dom-cssfontfaceloadevent */
DeviceLightEvent /* experimenta, Ambient Light */
DeviceMotionEvent /* experimental, Device Orientation */
DeviceOrientationEvent /* experimental, Device Orientation */
DeviceProximityEvent /* experimental, Device Orientation */
DOMTransactionEvent /* very experimental - https://dvcs.w3.org/hg/undomanager/raw-file/tip/undomanager.html#the-domtransactionevent-interface */
EditingBeforeInputEvent /* deprecated? - https://dvcs.w3.org/hg/editing/raw-file/57abe6d3cb60/editing.html#editingbeforeinputevent */
FetchEvent /* experimental, Service Workers */
GamepadEvent /* experimental, Gamepad */
HashChangeEvent /* https://www.w3.org/TR/html51/browsers.html#the-hashchangeevent-interface */
MediaStreamEvent /* experimental, WebRTC */
MessageEvent /* experimental, Websocket/WebRTC */
MutationEvent /* deprecated */
OfflineAudioCompletionEvent /* experimental, Web Audio */
RTCDataChannelEvent /* experimental, WebRTC */
RTCIdentityErrorEventA /* experimental, WebRTC */
RTCIdentityEvent /* experimental, WebRTC */
RTCPeerConnectionIceEvent /* experimental, WebRTC */
SensorEvent /* deprecated? */
SVGEvent /* deprecated */
UserProximityEvent /* experimental, Proximity Events */
*/
