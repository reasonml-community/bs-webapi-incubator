[@bs.deriving abstract]
type t;

[@bs.new] external make: string => t = "URLSearchParams";
[@bs.send.pipe : t] external append: ('a, 'b) => unit = "append";
[@bs.send.pipe : t] external delete: 'a => unit = "delete";
[@bs.send.pipe : t] external entries: Js.Array.array_like('a) = "entries";
[@bs.send.pipe : t] external get: 'a => option('b) = "get";
[@bs.send.pipe : t] external getAll: 'a => Js.Array.array_like('a) = "getAll";
[@bs.send.pipe : t] external has: 'a => bool = "has";
[@bs.send.pipe : t] external keys: array('a) = "keys";
[@bs.send.pipe : t] external set: ('a, 'b) => unit = "set";
[@bs.send.pipe : t] external sort: unit = "sort";
[@bs.send.pipe : t] external toString: string = "toString";
[@bs.send.pipe : t] external values: Js.Array.array_like('a) = "values";
