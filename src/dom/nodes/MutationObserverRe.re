type t = Dom.mutationObserver;

external make : (array Dom.mutationRecord => t => unit) => t = "MutationObserver" [@@bs.new];

external observe : Dom.node_like 'a => Js.t {..} => unit = "" [@@bs.send.pipe: t];
external disconnect : unit = "" [@@bs.send.pipe: t];
external takeRecords : array Dom.mutationRecord = "" [@@bs.send.pipe: t];