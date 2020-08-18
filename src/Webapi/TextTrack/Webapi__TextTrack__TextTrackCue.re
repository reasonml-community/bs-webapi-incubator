/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#texttrackcue
 */
type t;

include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });

// FIXME: circular dep
// [@bs.get] [@bs.return nullable] external track: t => option(Webapi__TextTrack.t) = "track";
[@bs.get] external id: t => string = "id";
[@bs.set] external setId: (t, string) => unit = "id";
[@bs.get] external startTime: t => float = "startTime";
[@bs.set] external setStartTime: (t, float) => unit = "startTime";
[@bs.get] external endTime: t => float = "endTime";
[@bs.set] external setEndTime: (t, float) => unit = "endTime";
[@bs.get] external pauseOnExit: t => bool = "pauseOnExit";
[@bs.set] external setPauseOnExit: (t, bool) => unit = "pauseOnExit";
