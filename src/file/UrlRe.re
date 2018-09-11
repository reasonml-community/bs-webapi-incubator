type t;

[@bs.new] external make: string => t = "URL";
[@bs.new] external makeWithBase: (string, string) => t = "URL";
[@bs.send.pipe : t] external host: string = "";
[@bs.send.pipe : t] external hash: string = "";
[@bs.send.pipe : t] external hostname: string = "";
[@bs.send.pipe : t] external href: string = "";
[@bs.send.pipe : t] external origin: string = "";
[@bs.send.pipe : t] external pathname: string = "";
[@bs.send.pipe : t] external port: string = "";
[@bs.send.pipe : t] external protocol: string = "";
[@bs.send.pipe : t] external search: string = "";
[@bs.send.pipe : t] external searchParams: URLSearchParamsRe.t = "";
[@bs.send.pipe : t] external toJson: string = "";

[@bs.val] [@bs.scope "URL"] external createObjectURL : FileRe.t => string = "";
[@bs.val] [@bs.scope "URL"] external revokeObjectURL : string => unit = "";
