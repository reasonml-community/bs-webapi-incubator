/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#videotrack
 */
type t;

/** Properties */

[@bs.get] external selected: t => bool = "selected";
[@bs.set] external setSelected: (t, bool) => unit = "selected";
[@bs.get] external id: t => string = "id";
[@bs.get] external kind: t => string = "kind";
[@bs.get] external label: t => string = "label";
[@bs.get] external language: t => string = "language";

// Not widely available, recommendation status
// type t_sourceBuffer;
// [@bs.get] external sourceBuffer: t => t_sourceBuffer = "sourceBuffer";
