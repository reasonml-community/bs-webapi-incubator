/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#audiotracklist
 */
type t;
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });

/** Properties */

[@bs.get] external length: t => float = "length";
[@bs.get_index] external get: (t, int) => option(Webapi__AudioTrack.t) = "";

/** Methods */

[@bs.send] [@bs.return nullable] external getTrackById: (t, string) => option(Webapi__AudioTrack.t) = "getTrackById";
