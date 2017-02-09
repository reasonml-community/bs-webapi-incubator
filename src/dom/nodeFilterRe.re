type t = DomRe.nodeFilter;

let make f: t => {
  acceptNode: f
};

type action =
| Accept
| Reject
| Skip;
let encodeAction = fun
| Accept => 1
| Reject => 2
| Skip   => 3;

module type WhatToShowT = {
  type t;

  let _All: t;
  let _Element: t;
  let _Attribute: t;
  let _Text: t;
  let _CDATASection: t;
  let _EntityReference: t;
  let _Entity: t;
  let _ProcessingInstruction: t;
  let _Comment: t;
  let _Document: t;
  let _DocumentType: t;
  let _DocumentFragment: t;
  let _Notation: t;

  let many: list t => t;
};
module WhatToShow: WhatToShowT = {
  type t = int;

  let _All                    = -1;
  let _Element                = 1;
  let _Attribute              = 2;
  let _Text                   = 4;
  let _CDATASection           = 8;
  let _EntityReference        = 16;
  let _Entity                 = 32;
  let _ProcessingInstruction  = 64;
  let _Comment                = 128;
  let _Document               = 256;
  let _DocumentType           = 512;
  let _DocumentFragment       = 1024;
  let _Notation               = 2048;

  let rec many = fun
    | [] => 0
    | [hd, ...rest] => hd lor (many rest);
};
