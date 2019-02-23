type t;

[@bs.new] external make: string => t = "URLSearchParams";
[@bs.new] external makeWithDict: Js.Dict.t(string) => t = "URLSearchParams";
[@bs.new] external makeWithArray: array((string, string)) => t = "URLSearchParams";
[@bs.send.pipe : t] external append: (string, string) => unit = "";
[@bs.send.pipe : t] external delete: string => unit = "";
[@bs.send.pipe : t] external entries: Js.Array.array_like(string) = "";
[@bs.return nullable][@bs.send.pipe : t] external get: string => option(string) = "";
[@bs.send.pipe : t] external getAll: string => array(string) = "";
[@bs.send.pipe : t] external has: string => bool = "";
[@bs.send.pipe : t] external keys: Js.Array.array_like(string) = "";
[@bs.send.pipe : t] external set: (string, string) => unit = "";
[@bs.send.pipe : t] external sort: unit = "";
[@bs.send.pipe : t] external toString: string = "";
[@bs.send.pipe : t] external values: Js.Array.array_like(string) = "";
