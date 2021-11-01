/**
 * Spec: https://www.w3.org/TR/intersection-observer/
 */
/** @since 0.20.0 */
module IntersectionObserverEntry = Webapi__IntersectionObserver__IntersectionObserverEntry;

type t; // TODO: Dom.intersectionObserver

type init = {
  root: option(Dom.element),
  rootMargin: option(string),
  threshold: option(array(float)) // between 0 and 1.
};

[@bs.obj]
external makeInit: (~root: Dom.element=?, ~rootMargin: string=?, ~threshold: array(float)=?, unit) => init;

[@bs.new]
external make: ((. array(IntersectionObserverEntry.t), t) => unit) => t = "IntersectionObserver";

[@bs.new]
external makeWithInit: ((. array(IntersectionObserverEntry.t), t) => unit, init) => t = "IntersectionObserver";

/* Properties */

[@bs.get] [@bs.return nullable]
external root: t => option(Dom.element) = "root";
[@bs.get] external rootMargin: t => string = "rootMargin";
[@bs.get] external thresholds: t => array(float) = "thresholds";

/* Methods */

[@bs.send] external disconnect: t => unit = "disconnect";
[@bs.send] external observe: (t, Dom.element) => unit = "observe";
[@bs.send] external unobserve: (t, Dom.element) => unit = "unobserve";
[@bs.send] external takeRecords: t => array(IntersectionObserverEntry.t) = "takeRecords";
