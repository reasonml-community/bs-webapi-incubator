module Impl = (T: {type t;}) => {
  external asDocument : T.t => Dom.document = "%identity";

  let asHtmlDocument: T.t => option(Dom.htmlDocument) = [%raw {|
    function(document) {
      var defaultView = document.defaultView;

      if (defaultView != null) {
        var HTMLDocument = defaultView.HTMLDocument;

        if (HTMLDocument != null && document instanceof HTMLDocument) {
          return document;
        }
      }
    }
  |}];

  /** Unsafe cast, use [ashtmlDocument] instead */
  external unsafeAsHtmlDocument : T.t => Dom.htmlDocument = "%identity";

  let ofNode = (node: Dom.node) : option(T.t) =>
    Webapi__Dom__Node.nodeType(node) == Webapi__Dom__Types.Document ?
      Some(Obj.magic(node)) :
      None;

  [@bs.get] external characterSet : T.t => string = "characterSet";
  [@bs.get] external compatMode : T.t => string /* compatMode enum */ = "compatMode"; /* experimental */
  let compatMode: T.t => Webapi__Dom__Types.compatMode =
    (self) => Webapi__Dom__Types.decodeCompatMode(compatMode(self));
  [@bs.get] external doctype : T.t => Dom.documentType = "doctype";
  [@bs.get] external documentElement : T.t => Dom.element = "documentElement";
  [@bs.get] external documentURI : T.t => string = "documentURI";
  [@bs.get] external hidden : T.t => bool = "hidden";
  [@bs.get] external implementation : T.t => Dom.domImplementation = "implementation";
  [@bs.get] external lastStyleSheetSet : T.t => string = "lastStyleSheetSet";
  [@bs.get] [@bs.return nullable] external pointerLockElement : T.t => option(Dom.element) = "pointerLockElement"; /* experimental */

  [@bs.get] external preferredStyleSheetSet : T.t => string = "preferredStyleSheetSet";
  [@bs.get] [@bs.return nullable] external scrollingElement : T.t => option(Dom.element) = "scrollingElement";
  [@bs.get] external selectedStyleSheetSet : T.t => string = "selectedStyleSheetSet";
  [@bs.set] external setSelectedStyleSheetSet : (T.t, string) => unit = "selectedStyleSheetSet";
  [@bs.get] external styleSheets : T.t => array(Dom.cssStyleSheet) = "styleSheets"; /* return StyleSheetList, not array */
  [@bs.get] external styleSheetSets : T.t => array(string) = "styleSheetSets";
  [@bs.get] external visibilityState : T.t => string /* visibilityState enum */ = "visibilityState";
  let visibilityState: T.t => Webapi__Dom__Types.visibilityState =
    (self) => Webapi__Dom__Types.decodeVisibilityState(visibilityState(self));

  [@bs.send.pipe : T.t] external adoptNode : Dom.element_like('a) => Dom.element_like('a) = "adoptNode";
  [@bs.send.pipe : T.t] external createAttribute : string => Dom.attr = "createAttribute";
  [@bs.send.pipe : T.t] external createAttributeNS : (string, string) => Dom.attr = "createAttributeNS";
  [@bs.send.pipe : T.t] external createComment : string => Dom.comment = "createComment";
  [@bs.send.pipe : T.t] external createDocumentFragment : Dom.documentFragment = "createDocumentFragment";
  [@bs.send.pipe : T.t] external createElement : string => Dom.element = "createElement";
  [@bs.send.pipe : T.t] external createElementWithOptions : (string, Js.t({..})) => Dom.element = "createElement"; /* not widely supported */
  [@bs.send.pipe : T.t] external createElementNS : (string, string) => Dom.element = "createElementNS";
  [@bs.send.pipe : T.t] external createElementNSWithOptions : (string, string, Js.t({..})) => Dom.element = "createElementNS"; /* not widely supported */
  [@bs.send.pipe : T.t] external createEvent : string /* large enum */ => Dom.event = "createEvent"; /* discouraged (but not deprecated) in favor of Event constructors */
  [@bs.send.pipe : T.t] external createNodeIterator : Dom.node_like('a) => Dom.nodeIterator = "createNodeIterator";
  [@bs.send.pipe : T.t] external createNodeIteratorWithWhatToShow : (Dom.node_like('a), Webapi__Dom__Types.WhatToShow.t) => Dom.nodeIterator = "createNodeIterator";
  [@bs.send.pipe : T.t] external createNodeIteratorWithWhatToShowFilter : (Dom.node_like('a), Webapi__Dom__Types.WhatToShow.t, Dom.nodeFilter) => Dom.nodeIterator = "createNodeIterator"; /* createProcessingInstruction */
  [@bs.send.pipe : T.t] external createRange : Dom.range = "createRange";
  [@bs.send.pipe : T.t] external createTextNode : string => Dom.text = "createTextNode";
  [@bs.send.pipe : T.t] external createTreeWalker : Dom.element_like('a) => Dom.treeWalker = "createTreeWalker";
  [@bs.send.pipe : T.t] external createTreeWalkerWithWhatToShow : (Dom.element_like('a), Webapi__Dom__Types.WhatToShow.t) => Dom.treeWalker = "createTreeWalker";
  [@bs.send.pipe : T.t] external createTreeWalkerWithWhatToShowFilter : (Dom.element_like('a), Webapi__Dom__Types.WhatToShow.t, Dom.nodeFilter) => Dom.treeWalker = "createTreeWalker";
  [@bs.send.pipe : T.t] external elementFromPoint : (int, int) => Dom.element = "elementFromPoint"; /* experimental, but widely supported */
  [@bs.send.pipe : T.t] external elementsFromPoint : (int, int) => array(Dom.element) = "elementsFromPoint"; /* experimental */
  [@bs.send.pipe : T.t] external enableStyleSheetsForSet : string => unit = "enableStyleSheetsForSet";
  [@bs.send.pipe : T.t] external exitPointerLock : unit = "exitPointerLock"; /* experimental */
  [@bs.send.pipe : T.t] external getAnimations : array(Dom.animation) = "getAnimations"; /* experimental */
  [@bs.send.pipe : T.t] external getElementsByClassName : string => Dom.htmlCollection = "getElementsByClassName";
  [@bs.send.pipe : T.t] external getElementsByTagName : string => Dom.htmlCollection = "getElementsByTagName";
  [@bs.send.pipe : T.t] external getElementsByTagNameNS : (string, string) => Dom.htmlCollection = "getElementsByTagNameNS";
  [@bs.send.pipe : T.t] external importNode : Dom.element_like('a) => Dom.element_like('a) = "importNode";
  [@bs.send.pipe : T.t] external importNodeDeep : (Dom.element_like('a), [@bs.as {json|true|json}] _) => Dom.element_like('a) = "importNode";
  [@bs.send.pipe : T.t] external registerElement : (string, unit) => Dom.element = "registerElement"; /* experimental and deprecated in favor of customElements.define() */
  [@bs.send.pipe : T.t] external registerElementWithOptions : (string, Js.t({..}), unit) => Dom.element = "registerElement"; /* experimental and deprecated in favor of customElements.define() */

  /** XPath stuff */
  /* createExpression */
  /* createNSResolver */
  /* evaluate */
  
  /* GlobalEventHandlers interface */
};

type t = Dom.document;

include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__NonElementParentNode.Impl({ type nonrec t = t; });
include Webapi__Dom__DocumentOrShadowRoot.Impl({ type nonrec t = t; });
include Webapi__Dom__ParentNode.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
