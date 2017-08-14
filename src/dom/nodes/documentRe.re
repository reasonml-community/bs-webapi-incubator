module Impl (T: { type t; }) => {
  external asDocument : T.t => Dom.document = "%identity";

  let asHtmlDocument : T.t => Js.null Dom.htmlDocument = [%bs.raw {|
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  |}];
  let asHtmlDocument : T.t => option Dom.htmlDocument = fun self => Js.Null.to_opt (asHtmlDocument self);

  let ofNode (node: Dom.node): option (T.t) =>
    (NodeRe.nodeType node) == Document ? Some (Obj.magic node) : None;

  external characterSet : T.t => string = "" [@@bs.get];
  external compatMode : T.t => string /* compatMode enum */ = "" [@@bs.get]; /* experimental */
  let compatMode : T.t => DomTypesRe.compatMode = fun self => DomTypesRe.decodeCompatMode (compatMode self);
  external docType : T.t => Dom.documentType = "" [@@bs.get];
  external documentElement : T.t => Dom.element = "" [@@bs.get];
  external documentURI : T.t => string = "" [@@bs.get];
  external hidden : T.t => bool = "" [@@bs.get];
  external implementation : T.t => Dom.domImplementation = "" [@@bs.get];
  external lastStyleSheetSet : T.t => string = "" [@@bs.get];
  external pointerLockElement : T.t => option Dom.element = "" [@@bs.get] [@@bs.return null_to_opt]; /* experimental */

  external preferredStyleSheetSet : T.t => string = "" [@@bs.get];
  external scrollingElement : T.t => option Dom.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external selectedStyleSheetSet : T.t => string = "" [@@bs.get];
  external setSelectedStyleSheetSet : T.t => string => unit = "selectedStyleSheetSet" [@@bs.set];
  external styleSheets : T.t => array Dom.cssStyleSheet = "" [@@bs.get]; /* return StyleSheetList, not array */
  external styleSheetSets : T.t => array string = "" [@@bs.get];
  external visibilityState : T.t => string /* visibilityState enum */ = "" [@@bs.get];
  let visibilityState : T.t => DomTypesRe.visibilityState = fun self => DomTypesRe.decodeVisibilityState (visibilityState self);

  external adoptNode : Dom.element_like 'a => Dom.element_like 'a = "" [@@bs.send.pipe: T.t];
  external createAttribute : string => Dom.attr = "" [@@bs.send.pipe: T.t];
  external createAttributeNS : string => string => Dom.attr = "" [@@bs.send.pipe: T.t];
  external createComment : string => Dom.comment = "" [@@bs.send.pipe: T.t];
  external createDocumentFragment : Dom.documentFragment = "" [@@bs.send.pipe: T.t];
  external createElement : string => Dom.element = "" [@@bs.send.pipe: T.t];
  external createElementWithOptions : string => Js.t {..} => Dom.element = "createElement" [@@bs.send.pipe: T.t]; /* not widely supported */
  external createElementNS : string => string => Dom.element = "" [@@bs.send.pipe: T.t];
  external createElementNSWithOptions : string => string => Js.t {..} => Dom.element = "createEementNS" [@@bs.send.pipe: T.t]; /* not widely supported */
  external createEvent : string /* large enum */ => Dom.event = "" [@@bs.send.pipe: T.t]; /* discouraged (but not deprecated) in favor of Event constructors */
  external createNodeIterator : Dom.node_like 'a => Dom.nodeIterator = "" [@@bs.send.pipe: T.t];
  external createNodeIteratorWithWhatToShow : Dom.node_like 'a => DomTypesRe.WhatToShow.t => Dom.nodeIterator = "createNodeIterator" [@@bs.send.pipe: T.t];
  external createNodeIteratorWithWhatToShowFilter : Dom.node_like 'a => DomTypesRe.WhatToShow.t => Dom.nodeFilter => Dom.nodeIterator = "createNodeIterator" [@@bs.send.pipe: T.t];
  external defaultView : T.t => option Dom.window = "" [@@bs.get] [@@bs.return null_to_opt];
  /* createProcessingInstruction */
  external createRange : Dom.range = "" [@@bs.send.pipe: T.t];
  external createTextNode : string => Dom.text = "" [@@bs.send.pipe: T.t];
  external createTreeWalker : Dom.element_like 'a => Dom.treeWalker = "" [@@bs.send.pipe: T.t];
  external createTreeWalkerWithWhatToShow : Dom.element_like 'a => DomTypesRe.WhatToShow.t => Dom.treeWalker = "createTreeWalker" [@@bs.send.pipe: T.t];
  external createTreeWalkerWithWhatToShowFilter : Dom.element_like 'a => DomTypesRe.WhatToShow.t => Dom.nodeFilter => Dom.treeWalker = "createTreeWalker" [@@bs.send.pipe: T.t];
  external elementFromPoint : int => int => Dom.element = "" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  external elementsFromPoint : int => int => array Dom.element = "" [@@bs.send.pipe: T.t]; /* experimental */
  external enableStyleSheetsForSet : string => unit = "" [@@bs.send.pipe: T.t];
  external exitPointerLock : unit = "" [@@bs.send.pipe: T.t]; /* experimental */
  external getAnimations : array Dom.animation = "" [@@bs.send.pipe: T.t]; /* experimental */
  external getElementsByClassName : string => Dom.htmlCollection = "" [@@bs.send.pipe: T.t];
  external getElementsByTagName : string => Dom.htmlCollection = "" [@@bs.send.pipe: T.t];
  external getElementsByTagNameNS : string => string => Dom.htmlCollection = "" [@@bs.send.pipe: T.t];
  external importNode : Dom.element_like 'a => Dom.element_like 'a = "" [@@bs.send.pipe: T.t];
  external importNodeDeep : Dom.element_like 'a => _ [@bs.as {json|true|json}] => Dom.element_like 'a = "importNode" [@@bs.send.pipe: T.t];
  external registerElement : string => (unit => Dom.element) = "" [@@bs.send.pipe: T.t]; /* experimental and deprecated in favor of customElements.define() */
  external registerElementWithOptions : string => Js.t {..} => (unit => Dom.element) = "registerElement" [@@bs.send.pipe: T.t]; /* experimental and deprecated in favor of customElements.define() */

  /** XPath stuff */
  /* createExpression */
  /* createNSResolver */
  /* evaluate */

  /* GlobalEventHandlers interface */
};

type t = Dom.document;
include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include NonElementParentNodeRe.Impl { type nonrec t = t };
include DocumentOrShadowRootRe.Impl { type nonrec t = t };
include ParentNodeRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };
