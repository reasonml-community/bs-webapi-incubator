module Impl (T: { type t; }) => {
  external asDocument : T.t => DomTypesRe.document = "%identity";

  let asHtmlDocument : T.t => Js.null DomTypesRe.htmlDocument = [%bs.raw {|
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  |}];
  let asHtmlDocument : T.t => option DomTypesRe.htmlDocument = fun self => Js.Null.to_opt (asHtmlDocument self);

  let ofNode (node: DomTypesRe.node): option (T.t) =>
    (NodeRe.nodeType node) == Document ? Some (Obj.magic node) : None;

  external characterSet : T.t => string = "" [@@bs.get];
  external compatMode : T.t => string /* compatMode enum */ = "" [@@bs.get]; /* experimental */
  let compatMode : T.t => DomTypesRe.compatMode = fun self => DomTypesRe.decodeCompatMode (compatMode self);
  external docType : T.t => DomTypesRe.documentType = "" [@@bs.get];
  external documentElement : T.t => DomTypesRe.element = "" [@@bs.get];
  external documentURI : T.t => string = "" [@@bs.get];
  external hidden : T.t => bool = "" [@@bs.get];
  external implementation : T.t => DomTypesRe.domImplementation = "" [@@bs.get];
  external lastStyleSheetSet : T.t => string = "" [@@bs.get];
  external pointerLockElement : T.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt]; /* experimental */

  external preferredStyleSheetSet : T.t => string = "" [@@bs.get];
  external scrollingElement : T.t => option DomTypesRe.element = "" [@@bs.get] [@@bs.return null_to_opt];
  external selectedStyleSheetSet : T.t => string = "" [@@bs.get];
  external setSelectedStyleSheetSet : T.t => string => unit = "selectedStyleSheetSet" [@@bs.set];
  external styleSheets : T.t => array DomTypesRe.cssStyleSheet = "" [@@bs.get]; /* return StyleSheetList, not array */
  external styleSheetSets : T.t => array string = "" [@@bs.get];
  external visibilityState : T.t => string /* visibilityState enum */ = "" [@@bs.get];
  let visibilityState : T.t => DomTypesRe.visibilityState = fun self => DomTypesRe.decodeVisibilityState (visibilityState self);

  external adoptNode : DomTypesRe.element_like 'a => DomTypesRe.element_like 'a = "" [@@bs.send.pipe: T.t];
  external createAttribute : string => DomTypesRe.attr = "" [@@bs.send.pipe: T.t];
  external createAttributeNS : string => string => DomTypesRe.attr = "" [@@bs.send.pipe: T.t];
  external createComment : string => DomTypesRe.comment = "" [@@bs.send.pipe: T.t];
  external createDocumentFragment : DomTypesRe.documentFragment = "" [@@bs.send.pipe: T.t];
  external createElement : string => DomTypesRe.element = "" [@@bs.send.pipe: T.t];
  external createElementWithOptions : string => Js.t {..} => DomTypesRe.element = "createElement" [@@bs.send.pipe: T.t]; /* not widely supported */
  external createElementNS : string => string => DomTypesRe.element = "" [@@bs.send.pipe: T.t];
  external createElementNSWithOptions : string => string => Js.t {..} => DomTypesRe.element = "createEementNS" [@@bs.send.pipe: T.t]; /* not widely supported */
  external createEvent : string /* large enum */ => DomTypesRe.event = "" [@@bs.send.pipe: T.t]; /* discouraged (but not deprecated) in favor of Event constructors */
  external createNodeIterator : DomTypesRe.node_like 'a => DomTypesRe.nodeIterator = "" [@@bs.send.pipe: T.t];
  external createNodeIteratorWithWhatToShow : DomTypesRe.node_like 'a => DomTypesRe.WhatToShow.t => DomTypesRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: T.t];
  external createNodeIteratorWithWhatToShowFilter : DomTypesRe.node_like 'a => DomTypesRe.WhatToShow.t => DomTypesRe.nodeFilter => DomTypesRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: T.t];
  /* createProcessingInstruction */
  external createRange : DomTypesRe.range = "" [@@bs.send.pipe: T.t];
  external createText : string => DomTypesRe.text = "" [@@bs.send.pipe: T.t];
  external createTreeWalker : DomTypesRe.element_like 'a => DomTypesRe.treeWalker = "" [@@bs.send.pipe: T.t];
  external createTreeWalkerWithWhatToShow : DomTypesRe.element_like 'a => DomTypesRe.WhatToShow.t => DomTypesRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: T.t];
  external createTreeWalkerWithWhatToShowFilter : DomTypesRe.element_like 'a => DomTypesRe.WhatToShow.t => DomTypesRe.nodeFilter => DomTypesRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: T.t];
  external elementFromPoint : int => int => DomTypesRe.element = "" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  external elementsFromPoint : int => int => array DomTypesRe.element = "" [@@bs.send.pipe: T.t]; /* experimental */
  external enableStyleSheetsForSet : string => unit = "" [@@bs.send.pipe: T.t];
  external exitPointerLock : unit = "" [@@bs.send.pipe: T.t]; /* experimental */
  external getAnimations : array DomTypesRe.animation = "" [@@bs.send.pipe: T.t]; /* experimental */
  external getElementsByClassName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: T.t];
  external getElementsByTagName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: T.t];
  external getElementsByTagNameNS : string => string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: T.t];
  external importNode : DomTypesRe.element_like 'a => DomTypesRe.element_like 'a = "" [@@bs.send.pipe: T.t];
  external importNodeDeep : DomTypesRe.element_like 'a => Js.boolean => DomTypesRe.element_like 'a = "importNode" [@@bs.send.pipe: T.t];
  let importNodeDeep : DomTypesRe.element_like 'a => T.t => DomTypesRe.element_like 'a = fun element self => importNodeDeep element Js.true_ self;
  external registerElement : string => (unit => DomTypesRe.element) = "" [@@bs.send.pipe: T.t]; /* experimental and deprecated in favor of customElements.define() */
  external registerElementWithOptions : string => Js.t {..} => (unit => DomTypesRe.element) = "registerElement" [@@bs.send.pipe: T.t]; /* experimental and deprecated in favor of customElements.define() */

  /** XPath stuff */
  /* createExpression */
  /* createNSResolver */
  /* evaluate */

  /* GlobalEventHandlers interface */
};

type t = DomTypesRe.document;
include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include NonElementParentNodeRe.Impl { type nonrec t = t };
include DocumentOrShadowRootRe.Impl { type nonrec t = t };
include ParentNodeRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };
