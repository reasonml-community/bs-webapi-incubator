type t = Dom.dataTransfer;

[@bs.new] external make: unit => t = "DataTransfer";

[@bs.get] external dropEffect: t => string = "dropEffect";
[@bs.set] external setDropEffect: (t, string) => unit = "dropEffect";
[@bs.get] external effectAllowed: t => string = "effectAllowed";
[@bs.set] external setEffectAllowed: (t, string) => unit = "effectAllowed";
/** TODO: items returns DataTransferItemList: https://html.spec.whatwg.org/multipage/dnd.html#dom-datatransfer-items */
[@bs.send]
external setDragImage: (t, Webapi__Dom__HtmlImageElement.t, float, float) => unit =
  "setDragImage";
[@bs.get] external types: t => array(string) = "types";
[@bs.send] external getData: (t, string) => string = "getData";
[@bs.send] external setData: (t, string, string) => unit = "setData";
[@bs.send] external clearData: t => unit = "clearData";
[@bs.send] external clearData0: t => unit = "clearData";
[@bs.send] external clearData1: (t, string) => unit = "clearData";
/** TODO: files returns FileList: https://html.spec.whatwg.org/multipage/dnd.html#dom-datatransfer-files */;
