module Impl = (T: {type t;}) => {
  type t_htmlDocument = T.t;

  [@bs.get] [@bs.return nullable] external activeElement : t_htmlDocument => option(Dom.element) = "activeElement";
  [@bs.get] [@bs.return nullable] external body : t_htmlDocument => option(Dom.element) = "body"; /* returns option HTMLBodyElement */
  [@bs.set] external setBody : (t_htmlDocument, Dom.element) => unit = "body"; /* accepth HTMLBodyElement */
  [@bs.get] external cookie : t_htmlDocument => string = "cookie";
  [@bs.set] external setCookie : (t_htmlDocument, string) => unit = "cookie";
  [@bs.get] [@bs.return nullable] external defaultView : t_htmlDocument => option(Dom.window) = "defaultView";
  [@bs.get] external designMode : t_htmlDocument => string /* designMode enum */ = "designMode";
  let designMode: t_htmlDocument => Webapi__Dom__Types.designMode =
    (self) => Webapi__Dom__Types.decodeDesignMode(designMode(self));
  [@bs.set] external setDesignMode : (t_htmlDocument, string /* designMode enum */) => unit = "designMode";
  let setDesignMode: (t_htmlDocument, Webapi__Dom__Types.designMode) => unit =
    (self, value) => setDesignMode(self, Webapi__Dom__Types.encodeDesignMode(value));
  [@bs.get] external dir : t_htmlDocument => string /* dir enum */ = "dir";
  let dir: t_htmlDocument => Webapi__Dom__Types.dir = (self) => Webapi__Dom__Types.decodeDir(dir(self));
  [@bs.set] external setDir : (t_htmlDocument, string /* dir enum */) => unit = "dir";
  let setDir: (t_htmlDocument, Webapi__Dom__Types.dir) => unit =
    (self, value) => setDir(self, Webapi__Dom__Types.encodeDir(value));
  [@bs.get] [@bs.return nullable] external domain : t_htmlDocument => option(string) = "domain";
  [@bs.set] external setDomain : (t_htmlDocument, string) => unit = "domain";
  [@bs.get] external embeds : t_htmlDocument => Dom.nodeList = "embeds";
  [@bs.get] external forms : t_htmlDocument => Dom.htmlCollection = "forms";
  [@bs.get] external head : t_htmlDocument => Dom.element = "head"; /* returns HTMLHeadElement */
  [@bs.get] external images : t_htmlDocument => Dom.htmlCollection = "images";
  [@bs.get] external lastModified : t_htmlDocument => string = "lastModified";
  [@bs.get] external links : t_htmlDocument => Dom.nodeList = "links";
  [@bs.get] external location : t_htmlDocument => Dom.location = "location";
  [@bs.set] external setLocation : (t_htmlDocument, string) => unit = "location";
  [@bs.get] external plugins : t_htmlDocument => Dom.htmlCollection = "plugins";
  [@bs.get] external readyState : t_htmlDocument => string /* enum */ = "readyState";
  let readyState: t_htmlDocument => Webapi__Dom__Types.readyState =
    (self) => Webapi__Dom__Types.decodeReadyState(readyState(self));
  [@bs.get] external referrer : t_htmlDocument => string = "referrer";
  [@bs.get] external scripts : t_htmlDocument => Dom.htmlCollection = "scripts";
  [@bs.get] external title : t_htmlDocument => string = "title";
  [@bs.set] external setTitle : (t_htmlDocument, string) => unit = "title";
  [@bs.get] external url : t_htmlDocument => string = "URL";

  [@bs.send.pipe : t_htmlDocument] external close : unit = "close";
  [@bs.send.pipe : t_htmlDocument] external execCommand : (string, bool, Js.null(string)) => bool = "execCommand";
  let execCommand: (string, bool, option(string), t_htmlDocument) => bool =
    (command, show, value, self) =>
      execCommand(command, show, Js.Null.fromOption(value), self);
  [@bs.send.pipe : t_htmlDocument] external getElementsByName : string => Dom.nodeList = "getElementsByName";
  [@bs.send.pipe : t_htmlDocument] external getSelection : Dom.selection = "getSelection";
  [@bs.send.pipe : t_htmlDocument] external hasFocus : bool = "hasFocus";
  [@bs.send.pipe : t_htmlDocument] external open_ : unit = "open";
  [@bs.send.pipe : t_htmlDocument] external queryCommandEnabled : string => bool = "queryCommandEnabled";
  [@bs.send.pipe : t_htmlDocument] external queryCommandIndeterm : string => bool = "queryCommandIndeterm";
  [@bs.send.pipe : t_htmlDocument] external queryCommandSupported : string => bool = "queryCommandSupported";
  [@bs.send.pipe : t_htmlDocument] external queryCommandValue : string => string = "queryCommandValue";
  [@bs.send.pipe : t_htmlDocument] external write : string => unit = "write";
  [@bs.send.pipe : t_htmlDocument] external writeln : string => unit = "writeln";
};

type t = Dom.htmlDocument;

include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__GlobalEventHandlers.Impl({ type nonrec t = t; });
include Webapi__Dom__Document.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
