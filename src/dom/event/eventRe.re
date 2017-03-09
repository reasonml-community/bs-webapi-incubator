module Impl(Type: DomInternalRe.Type) => {
  type t_event = Type.t;

  type eventPhase =
  | None
  | CapturingPhase
  | AtTarget
  | BubblingPhase
  | Unknown;
  let decodeEventPhase = fun /* internal */
  | 0 => None
  | 1 => CapturingPhase
  | 2 => AtTarget
  | 3 => BubblingPhase
  | _ => Unknown;


  external bubbles : t_event => bool = "" [@@bs.get];
  external cancelable : t_event => bool = "" [@@bs.get];
  external composed : t_event => bool = "" [@@bs.get];
  external currentTarget : t_event => DomTypesRe.eventTarget = "" [@@bs.get];
  external defaultPrevented : t_event => bool = "" [@@bs.get];
  external eventPhase : t_event => int /* eventPhase enum */ = "" [@@bs.get];
  let eventPhase : t_event => eventPhase = fun self => decodeEventPhase (eventPhase self);
  external target : t_event => DomTypesRe.eventTarget = "" [@@bs.get];
  external timeStamp : t_event => float = "" [@@bs.get];
  external type_ : t_event => string = "type" [@@bs.get];
  external isTrusted : t_event => bool = "" [@@bs.get];

  external preventDefault : unit = "" [@@bs.send.pipe: t_event];
  external stopImmediatePropagation : unit = "" [@@bs.send.pipe: t_event];
  external stopPropagation : unit = "" [@@bs.send.pipe: t_event];
};

type t = DomTypesRe.event;
include Impl { type nonrec t = t };

external make : string => t = "Event" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "Event" [@@bs.new];


/* Unimplemented Event interfaces

AudioProcessingEvent /* deprecated */
BeforeInputEvent /* experimental? Looks like it might just be an InputEvent */
BeforeUnloadEvent /* https://www.w3.org/TR/html5/browsers.html#beforeunloadevent */
BlobEvent /* experimental, MediaStream recording */
CloseEvent /* https://www.w3.org/TR/websockets/#closeevent */
CSSFontFaceLoadEvent /* experimental - https://www.w3.org/TR/css-font-loading-3/#dom-cssfontfaceloadevent */
CustomEvent
DeviceLightEvent /* experimenta, Ambient Light */
DeviceMotionEvent /* experimental, Device Orientation */
DeviceOrientationEvent /* experimental, Device Orientation */
DeviceProximityEvent /* experimental, Device Orientation */
DOMTransactionEvent /* very experimental - https://dvcs.w3.org/hg/undomanager/raw-file/tip/undomanager.html#the-domtransactionevent-interface */
DragEvent
EditingBeforeInputEvent /* deprecated? - https://dvcs.w3.org/hg/editing/raw-file/57abe6d3cb60/editing.html#editingbeforeinputevent */
ErrorEvent
FetchEvent /* experimental, Service Workers */
GamepadEvent /* experimental, Gamepad */
HashChangeEvent /* https://www.w3.org/TR/html51/browsers.html#the-hashchangeevent-interface */
IDBVersionChangeEvent
MediaStreamEvent /* experimental, WebRTC */
MessageEvent /* experimental, Websocket/WebRTC */
MutationEvent /* deprecated */
OfflineAudioCompletionEvent /* experimental, Web Audio */
PageTransitionEvent /* https://www.w3.org/TR/html51/browsers.html#the-pagetransitionevent-interface */
PopStateEvent /* https://www.w3.org/TR/html51/browsers.html#the-popstateevent-interface */
ProgressEvent
RelatedEvent /* https://www.w3.org/TR/html51/interactive-elements.html#the-relatedevent-interfaces */
RTCDataChannelEvent /* experimental, WebRTC */
RTCIdentityErrorEventA /* experimental, WebRTC */
RTCIdentityEvent /* experimental, WebRTC */
RTCPeerConnectionIceEvent /* experimental, WebRTC */
SensorEvent /* deprecated? */
StorageEvent
SVGEvent /* deprecated */
SVGZoomEvent /* https://www.w3.org/TR/SVG/script.html#InterfaceSVGZoomEvent */
TimeEvent /* https://www.w3.org/TR/SVG/animate.html#InterfaceTimeEvent */
TrackEvent /* https://www.w3.org/TR/html5/embedded-content-0.html#trackevent */
UserProximityEvent /* experimental, Proximity Events */
WebGLContextEvent
*/
