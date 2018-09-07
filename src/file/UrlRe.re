[@bs.deriving abstract]
type t = {
  host: string,
  hash: string,
  hostname: string,
  href: string,
  origin: string,
  pathname: string,
  port: string,
  protocol: string,
  search: string,
  searchParams: URLSearchParamsRe.t,
};

[@bs.new] external make: string => t = "URL";
[@bs.new] external makeWithBase: (string, string) => t = "URL";

[@bs.val] [@bs.scope "URL"] external createObjectURL : FileRe.t => string = "";
[@bs.val] [@bs.scope "URL"] external revokeObjectURL : string => unit = "";
