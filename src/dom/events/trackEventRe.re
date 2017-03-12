type t = DomTypesRe.trackEvent;
type track; /* TODO: VideoTrack or AudioTrack or TextTrack */

include EventRe.Impl { type nonrec t = t };

external make : string => t = "TrackEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "TrackEvent" [@@bs.new];

external track : t => track = "" [@@bs.get];