[@bs.deriving abstract]
type t;

[@bs.new] external make: string => t = "URLSearchParams";
[@bs.send] external append: (t, 'a, 'b) => unit = "append";
[@bs.send] external delete: (t, 'a) => unit = "delete";
[@bs.send] external entries: t => Js.Array.array_like('a) = "entries";
[@bs.send] external get: (t, 'a) => option('b) = "get";
[@bs.send] external getAll: (t, 'a) => Js.Array.array_like('a) = "getAll";
[@bs.send] external has: (t, 'a) => bool = "has";
[@bs.send] external keys: t => array('a) = "keys";
[@bs.send] external set: (t, 'a, 'b) => unit = "set";
[@bs.send] external sort: t => unit = "sort";
[@bs.send] external toString: t => string = "toString";
[@bs.send] external values: t => Js.Array.array_like('a) = "values";
