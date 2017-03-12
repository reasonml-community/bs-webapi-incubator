type t = DomTypesRe.mutationObserver;

external make : (array DomTypesRe.mutationRecord => t => unit) => t = "MutationObserver" [@@bs.new];

external observe : DomTypesRe.node_like 'a => Js.t {..} => unit = "" [@@bs.send.pipe: t];
external disconnect : unit = "" [@@bs.send.pipe: t];
external takeRecords : array DomTypesRe.mutationRecord = "" [@@bs.send.pipe: t];