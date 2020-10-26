module URLSearchParams = {
  type t;

  [@bs.new] external make: string => t = "URLSearchParams";
  [@bs.new] external makeWithDict: Js.Dict.t(string) => t = "URLSearchParams";
  [@bs.new] external makeWithArray: array((string, string)) => t = "URLSearchParams";
  [@bs.send.pipe : t] external append: (string, string) => unit = "append";
  [@bs.send.pipe : t] external delete: string => unit = "delete";
  [@bs.send.pipe : t] external entries: Js.Array.array_like((string, string)) = "entries";
  [@bs.send.pipe : t] external forEach: ([@bs.uncurry] (string, string) => unit) => unit = "forEach";
  [@bs.return nullable][@bs.send.pipe : t] external get: string => option(string) = "get";
  [@bs.send.pipe : t] external getAll: string => array(string) = "getAll";
  [@bs.send.pipe : t] external has: string => bool = "has";
  [@bs.send.pipe : t] external keys: Js.Array.array_like(string) = "keys";
  [@bs.send.pipe : t] external set: (string, string) => unit = "set";
  [@bs.send.pipe : t] external sort: unit = "sort";
  [@bs.send.pipe : t] external toString: string = "toString";
  [@bs.send.pipe : t] external values: Js.Array.array_like(string) = "values";
};

type t;

[@bs.new] external make: string => t = "URL";

/** Deprecated, use [makeWith] instead. */
[@deprecated "Use [makeWith] instead."]
[@bs.new] external makeWithBase: (string, string) => t = "URL";

/** @since 0.19.0 */
[@bs.new] external makeWith: (string, ~base: string) => t = "URL";

[@bs.get] external hash: t => string = "hash";
[@bs.set] external setHash: (t, string) => unit = "hash";
[@bs.get] external host: t => string = "host";
[@bs.set] external setHost: (t, string) => unit = "host";
[@bs.get] external hostname: t => string = "hostname";
[@bs.set] external setHostname: (t, string) => unit = "hostname";
[@bs.get] external href: t => string = "href";
[@bs.set] external setHref: (t, string) => unit = "href";
[@bs.get] external origin: t => string = "origin";
[@bs.get] external password: t => string = "password";
[@bs.set] external setPassword: (t, string) => unit = "password";
[@bs.get] external pathname: t => string = "pathname";
[@bs.set] external setPathname: (t, string) => unit = "pathname";
[@bs.get] external port: t => string = "port";
[@bs.set] external setPort: (t, string) => unit = "port";
[@bs.get] external protocol: t => string = "protocol";
[@bs.set] external setProtocol: (t, string) => unit = "protocol";
[@bs.get] external search: t => string = "search";
[@bs.set] external setSearch: (t, string) => unit = "search";
[@bs.get] external searchParams: t => URLSearchParams.t = "searchParams";
[@bs.get] external username: t => string = "username";
[@bs.set] external setUsername: (t, string) => unit = "username";
[@bs.get] external toJson: t => string = "toJson";

[@bs.val] [@bs.scope "URL"] external createObjectURL : Webapi__File.t => string = "createObjectURL";
[@bs.val] [@bs.scope "URL"] external revokeObjectURL : string => unit = "revokeObjectURL";
