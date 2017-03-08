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

AnimationEvent
AudioProcessingEvent
BeforeInputEvent
BeforeUnloadEvent
BlobEvent
ClipboardEvent
CloseEvent
CompositionEvent
CSSFontFaceLoadEvent
CustomEvent
DeviceLightEvent
DeviceMotionEvent
DeviceOrientationEvent
DeviceProximityEvent
DOMTransactionEvent
DragEvent
EditingBeforeInputEvent
ErrorEvent
FetchEvent
FocusEvent
GamepadEvent
HashChangeEvent
IDBVersionChangeEvent
InputEvent
KeyboardEvent /* implemented on Event */
MediaStreamEvent
MessageEvent
MouseEvent /* implemented on Event */
MutationEvent
OfflineAudioCompletionEvent
PageTransitionEvent
PointerEvent /* implemented on Event */
PopStateEvent
ProgressEvent
RelatedEvent
RTCDataChannelEvent
RTCIdentityErrorEvent
RTCIdentityEvent
RTCPeerConnectionIceEvent
SensorEvent
StorageEvent
SVGEvent
SVGZoomEvent
TimeEvent
TouchEvent
TrackEvent
TransitionEvent
UIEvent
UserProximityEvent
WebGLContextEvent
WheelEvent
*/
