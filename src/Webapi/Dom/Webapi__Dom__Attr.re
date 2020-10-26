type t = Dom.attr;

include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });

[@bs.get] external namespaceURI : t => string = "namespaceURI";
[@bs.get] external prefix : t => string = "prefix";
[@bs.get] external localName : t => string = "localName";
[@bs.get] external name : t => string = "name";
[@bs.get] external value : t => string = "value";
[@bs.get] [@bs.return nullable] external ownerElement : t => option(Dom.element) = "ownerElement";
[@bs.get] external specified : t => bool = "specified"; /* useless; always returns true (exact wording from spec) */
