/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#audiotrack
 */
type t;

/** Properties */

[@bs.get] external id: t => string = "id";
[@bs.get] external kind: t => string = "kind";
[@bs.get] external label: t => string = "label";
[@bs.get] external language: t => string = "language";

[@bs.get] external enabled: t => bool = "enabled";
[@bs.set] external setEnabled: (t, bool) => unit = "enabled";
