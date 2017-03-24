type t = Dom.location;

/* a more ergonomic API would perhaps accept a Window.t directly instead of Location.t */

external href : t => string = "" [@@bs.get];
external setHref : t => string => unit = "href" [@@bs.set];
external protocol : t => string = "" [@@bs.get];
external setProtocol : t => string => unit = "protocol" [@@bs.set];
external host : t => string = "" [@@bs.get];
external setHost : t => string => unit = "host" [@@bs.set];
external hostname : t => string = "" [@@bs.get];
external setHostname : t => string => unit = "hostname" [@@bs.set];
external port : t => string = "" [@@bs.get];
external setPort : t => string => unit  = "port" [@@bs.set];
external pathname : t => string = "" [@@bs.get];
external setPathname : t => string => unit = "pathname" [@@bs.set];
external search : t => string = "" [@@bs.get];
external setSearch : t => string => unit = "search" [@@bs.set];
external hash : t => string = "" [@@bs.get];
external setHash : t => string => unit = "hash" [@@bs.set];
external username : t => string = "" [@@bs.get];
external setUsername : t => string => unit = "username" [@@bs.set];
external password : t => string = "" [@@bs.get];
external setPassword : t => string => unit = "password" [@@bs.set];
external origin : t => string = "" [@@bs.get];

external assign : string => unit = "" [@@bs.send.pipe: t];
external reload : unit = "" [@@bs.send.pipe: t];
external reloadWithForce : Js.boolean => unit = "reload" [@@bs.send.pipe: t];
let reloadWithForce : t => unit = fun self => reloadWithForce Js.true_ self;
external replace : string => unit = "" [@@bs.send.pipe: t];
external toString : string = "" [@@bs.send.pipe: t];
