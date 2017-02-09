  type t = DomRe.domTokenList;

  external contains : string => Js.boolean = "contains" [@@bs.send.pipe: t];
  let contains : string => t => bool = fun token self => Js.to_bool (contains token self);
