/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#texttracklist
 */

type t;
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });

[@bs.get] external length: t => float = "length";
[@bs.get_index] external get: (t, int) => option(Webapi__TextTrack.t) = "";
[@bs.send] [@bs.return nullable] external getTrackById: (t, string) => option(Webapi__TextTrack.t) = "getTrackById";
