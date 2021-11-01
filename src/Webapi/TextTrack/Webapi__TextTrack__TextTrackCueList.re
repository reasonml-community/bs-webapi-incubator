/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#texttrackcuelist
 */
type t;

/** Properties */
[@bs.get] external length: t => int = "length";
[@bs.get_index] [@bs.return nullable] external get: (t, int) => option(Webapi__TextTrack__TextTrackCue.t) = "";

/** Methods */
[@bs.send] [@bs.return nullable] external getCueById: (t, string) => option(Webapi__TextTrack__TextTrackCue.t) = "getCueById";
