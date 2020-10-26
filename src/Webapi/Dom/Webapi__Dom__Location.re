type t = Dom.location;

/* a more ergonomic API would perhaps accept a Window.t directly instead of Location.t */
[@bs.get] external href: t => string = "href";
[@bs.set] external setHref: (t, string) => unit = "href";
[@bs.get] external protocol: t => string = "protocol";
[@bs.set] external setProtocol: (t, string) => unit = "protocol";
[@bs.get] external host: t => string = "host";
[@bs.set] external setHost: (t, string) => unit = "host";
[@bs.get] external hostname: t => string= "hostname";
[@bs.set] external setHostname: (t, string) => unit = "hostname";
[@bs.get] external port: t => string = "port";
[@bs.set] external setPort: (t, string) => unit = "port";
[@bs.get] external pathname: t => string = "pathname";
[@bs.set] external setPathname: (t, string) => unit = "pathname";
[@bs.get] external search: t => string= "search";
[@bs.set] external setSearch: (t, string) => unit = "search";
[@bs.get] external hash: t => string= "hash";
[@bs.set] external setHash: (t, string) => unit = "hash";
[@bs.get] external username: t => string= "username";
[@bs.set] external setUsername: (t, string) => unit = "username";
[@bs.get] external password: t => string= "password";
[@bs.set] external setPassword: (t, string) => unit = "password";
[@bs.get] external origin: t => string= "origin";

[@bs.send.pipe: t] external assign: string => unit = "assign";
[@bs.send.pipe: t] external reload: unit = "reload";
[@bs.send.pipe: t]
external reloadWithForce: ([@bs.as {json|true|json}] _) => unit = "reload";
[@bs.send.pipe: t] external replace: string => unit = "replace";
[@bs.send.pipe: t] external toString: string = "toString";
