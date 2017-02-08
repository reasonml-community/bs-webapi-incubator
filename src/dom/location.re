type t = Dom.location;

/* a more ergonomic API would perhaps accept a Window.t directly instead of Location.t */

external href : t => string = "" [@@bs.get];
external setHref : t => string => string = "href" [@@bs.set];
external protocol : t => string = "" [@@bs.get];
external setProtocol : t => string => string = "protocol" [@@bs.set];
external host : t => string = "" [@@bs.get];
external setHost : t => string => string = "host" [@@bs.set];
external hostname : t => string = "" [@@bs.get];
external setHostname : t => string => string = "hostname" [@@bs.set];
external port : t => string = "" [@@bs.get];
external setPort : t => string => string  = "port" [@@bs.set];
external pathname : t => string = "" [@@bs.get];
external setPathname : t => string => string = "pathname" [@@bs.set];
external search : t => string = "" [@@bs.get];
external setSearch : t => string => string = "search" [@@bs.set];
external hash : t => string = "" [@@bs.get];
external setHash : t => string => string = "hash" [@@bs.set];
external username : t => string = "" [@@bs.get];
external setUsername : t => string => string = "username" [@@bs.set];
external password : t => string = "" [@@bs.get];
external setPassword : t => string => string = "password" [@@bs.set];
external origin : t => string = "" [@@bs.get];

external assign : t => string => unit = "" [@@bs.send];
external reload : t => unit = "" [@@bs.send];
external reloadWithForce : t => Js.boolean => unit = "reload" [@@bs.send];
external replace : t => string => unit = "" [@@bs.send];
external toString : t => string = "" [@@bs.send];
