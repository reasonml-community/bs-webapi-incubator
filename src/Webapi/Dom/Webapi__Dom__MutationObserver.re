type t = Dom.mutationObserver;

[@bs.new] external make : ((array(Dom.mutationRecord), t) => unit) => t = "MutationObserver";

[@bs.send.pipe : t] external observe : (Dom.node_like('a), Js.t({..})) => unit = "oldValue";
[@bs.send.pipe : t] external disconnect : unit = "disconnect";
[@bs.send.pipe : t] external takeRecords : array(Dom.mutationRecord) = "takeRecords";
