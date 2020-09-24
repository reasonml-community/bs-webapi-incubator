open Webapi.Dom;
open CustomEvent;

let event = make("my-event");

/* Event */
let _ = bubbles(event);
let _ = cancelable(event);
let _ = composed(event);
let _ = currentTarget(event);
let _ = defaultPrevented(event);
let _ = eventPhase(event);
let _ = target(event);
let _ = timeStamp(event);
let _ = type_(event);
let _ = isTrusted(event);

preventDefault(event);
stopImmediatePropagation(event);
stopPropagation(event);

/* Event with type detail */
module Detail = {
    type t = {
        component:string
    }
}

let t: Detail.t = {
    component: "test-component"
};

module EventWithDetail = MakeCustomEvent(Detail);
let eventWithDetail = EventWithDetail.make("event-with-detail");
let eventWithOptions = EventWithDetail.makeWithOptions("event-with-detail", t);
eventWithOptions->Webapi.Dom.EventTarget.dispatchEvent;

/* Event */
let _ = bubbles(eventWithDetail);
let _ = cancelable(eventWithDetail);
let _ = composed(eventWithDetail);
let _ = currentTarget(eventWithDetail);
let _ = defaultPrevented(eventWithDetail);
let _ = eventPhase(eventWithDetail);
let _ = target(eventWithDetail);
let _ = timeStamp(eventWithDetail);
let _ = type_(eventWithDetail);
let _ = isTrusted(eventWithDetail);

preventDefault(eventWithDetail);
stopImmediatePropagation(eventWithDetail);
stopPropagation(eventWithDetail);

let _ = eventWithDetail->EventWithDetail.detail.component;