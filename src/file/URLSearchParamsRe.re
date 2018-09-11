[@bs.deriving abstract]
type t;

[@bs.new] external make: string => t = "URLSearchParams";
[@bs.send.pipe : t] external append: (string, string) => unit = "append";
[@bs.send.pipe : t] external delete: string => unit = "delete";
[@bs.send.pipe : t] external entries: Js.Array.array_like(string) = "entries";
[@bs.send.pipe : t] external get: string => option(string) = "get";
[@bs.send.pipe : t] external getAll: string => array(string) = "getAll";
[@bs.send.pipe : t] external has: string => bool = "has";
[@bs.send.pipe : t] external keys: array(string) = "keys";
[@bs.send.pipe : t] external set: (string, string) => unit = "set";
[@bs.send.pipe : t] external sort: unit = "sort";
[@bs.send.pipe : t] external toString: string = "toString";
[@bs.send.pipe : t] external values: Js.Array.array_like(string) = "values";
