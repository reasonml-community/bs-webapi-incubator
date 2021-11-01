/**
 * Spec: https://www.w3.org/TR/intersection-observer/#intersection-observer-entry
 */

type t; // TODO: Dom.intersectionObserverEntry

/* Properties */

[@bs.get] external time: t => float = "time";
[@bs.get] external rootBounds: t => Dom.domRect = "rootBounds";
[@bs.get] external boundingClientRect: t => Dom.domRect = "boundingClientRect";
[@bs.get] external intersectionRect: t => Dom.domRect = "intersectionRect";
[@bs.get] external isIntersecting: t => bool = "isIntersecting";
[@bs.get] external intersectionRatio: t => float = "intersectionRatio";
[@bs.get] external target: t => Dom.element = "target";
