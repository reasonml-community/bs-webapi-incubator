module Impl (Type: DomInternalRe.Type) => {
  type t_document = Type.t;

  external asDocument : t_document => DomTypesRe.document = "%identity";

  let asHtmlDocument : t_document => Js.null DomTypesRe.htmlDocument = [%bs.raw {|
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  |}];
  let asHtmlDocument : t_document => option DomTypesRe.htmlDocument = fun self => Js.Null.to_opt (asHtmlDocument self);

  let ofNode node: option (t_document) =>
    (NodeRe.nodeType node) == Document ? Some (DomInternalRe.cast node) : None;

  type compatMode =
  | BackCompat
  | CSS1Compat
  | Unknown;
  let decodeCompatMode = fun /* internal */
  | "BackCompat" => BackCompat
  | "CSS1Compat" => CSS1Compat
  | _            => Unknown;

  type visibilityState =
  | Visible
  | Hidden
  | Prerender
  | Unloaded
  | Unknown;
  let decodeVisibilityState = fun /* internal */
  | "visible"   => Visible
  | "hidden"    => Hidden
  | "prerender" => Prerender
  | "unloaded"  => Unloaded
  | _           => Unknown;

  external characterSet : t_document => string = "" [@@bs.get];
  external compatMode : t_document => string /* compatMode enum */ = "" [@@bs.get]; /* experimental */
  let compatMode : t_document => compatMode = fun self => decodeCompatMode (compatMode self);
  external docType : t_document => DomTypesRe.documentType = "" [@@bs.get];
  external documentElement : t_document => DomTypesRe.element = "" [@@bs.get];
  external documentURI : t_document => string = "" [@@bs.get];
  external hidden : t_document => bool = "" [@@bs.get];
  external implementation : t_document => DomTypesRe.domImplementation = "" [@@bs.get];
  external lastStyleSheetSet : t_document => string = "" [@@bs.get];
  external pointerLockElement : t_document => option DomTypesRe.element = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}]; /* experimental */

  external preferredStyleSheetSet : t_document => string = "" [@@bs.get];
  external scrollingElement : t_document => option DomTypesRe.element = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external selectedStyleSheetSet : t_document => string = "" [@@bs.get];
  external setSelectedStyleSheetSet : t_document => string => unit = "selectedStyleSheetSet" [@@bs.set];
  external styleSheets : t_document => array DomTypesRe.cssStyleSheet = "" [@@bs.get]; /* return StyleSheetList, not array */
  external styleSheetSets : t_document => array string = "" [@@bs.get];
  external visibilityState : t_document => string /* visibilityState enum */ = "" [@@bs.get];
  let visibilityState : t_document => visibilityState = fun self => decodeVisibilityState (visibilityState self);

  external adoptNode : DomTypesRe.element_like 'a => DomTypesRe.element_like 'a = "" [@@bs.send.pipe: t_document];
  external createAttribute : string => DomTypesRe.attr = "" [@@bs.send.pipe: t_document];
  external createAttributeNS : string => string => DomTypesRe.attr = "" [@@bs.send.pipe: t_document];
  external createComment : string => DomTypesRe.comment = "" [@@bs.send.pipe: t_document];
  external createDocumentFragment : DomTypesRe.documentFragment = "" [@@bs.send.pipe: t_document];
  external createElement : string => DomTypesRe.element = "" [@@bs.send.pipe: t_document];
  external createElementWithOptions : string => Js.t {..} => DomTypesRe.element = "createElement" [@@bs.send.pipe: t_document]; /* not widely supported */
  external createElementNS : string => string => DomTypesRe.element = "" [@@bs.send.pipe: t_document];
  external createElementNSWithOptions : string => string => Js.t {..} => DomTypesRe.element = "createEementNS" [@@bs.send.pipe: t_document]; /* not widely supported */
  external createEvent : string /* large enum */ => DomTypesRe.event = "" [@@bs.send.pipe: t_document]; /* discouraged (but not deprecated) in favor of Event constructors */
  external createNodeIterator : DomTypesRe.node_like 'a => DomTypesRe.nodeIterator = "" [@@bs.send.pipe: t_document];
  external createNodeIteratorWithWhatToShow : DomTypesRe.node_like 'a => NodeFilterRe.WhatToShow.t => DomTypesRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t_document];
  external createNodeIteratorWithWhatToShowFilter : DomTypesRe.node_like 'a => NodeFilterRe.WhatToShow.t => DomTypesRe.nodeFilter => DomTypesRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t_document];
  /* createProcessingInstruction */
  external createRange : DomTypesRe.range = "" [@@bs.send.pipe: t_document];
  external createText : string => DomTypesRe.textNode = "" [@@bs.send.pipe: t_document];
  external createTreeWalker : DomTypesRe.element_like 'a => DomTypesRe.treeWalker = "" [@@bs.send.pipe: t_document];
  external createTreeWalkerWithWhatToShow : DomTypesRe.element_like 'a => NodeFilterRe.WhatToShow.t => DomTypesRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: t_document];
  external createTreeWalkerWithWhatToShowFilter : DomTypesRe.element_like 'a => NodeFilterRe.WhatToShow.t => DomTypesRe.nodeFilter => DomTypesRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: t_document];
  external elementFromPoint : int => int => DomTypesRe.element = "" [@@bs.send.pipe: t_document]; /* experimental, but widely supported */
  external elementsFromPoint : int => int => array DomTypesRe.element = "" [@@bs.send.pipe: t_document]; /* experimental */
  external enableStyleSheetsForSet : string => unit = "" [@@bs.send.pipe: t_document];
  external exitPointerLock : unit = "" [@@bs.send.pipe: t_document]; /* experimental */
  external getAnimations : array DomTypesRe.animation = "" [@@bs.send.pipe: t_document]; /* experimental */
  external getElementsByClassName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: t_document];
  external getElementsByTagName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: t_document];
  external getElementsByTagNameNS : string => string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: t_document];
  external importNode : DomTypesRe.element_like 'a => DomTypesRe.element_like 'a = "" [@@bs.send.pipe: t_document];
  external importNodeDeep : DomTypesRe.element_like 'a => Js.boolean => DomTypesRe.element_like 'a = "importNode" [@@bs.send.pipe: t_document];
  let importNodeDeep : DomTypesRe.element_like 'a => t_document => DomTypesRe.element_like 'a = fun element self => importNodeDeep element Js.true_ self;
  external registerElement : string => (unit => DomTypesRe.element) = "" [@@bs.send.pipe: t_document]; /* experimental and deprecated in favor of customElements.define() */
  external registerElementWithOptions : string => Js.t {..} => (unit => DomTypesRe.element) = "registerElement" [@@bs.send.pipe: t_document]; /* experimental and deprecated in favor of customElements.define() */
  external getElementById : string => option DomTypesRe.element = "" [@@bs.send.pipe: t_document] [@@bs.return {null_to_opt: null_to_opt}];
  external querySelector : string => option DomTypesRe.element = "" [@@bs.send.pipe: t_document] [@@bs.return {null_to_opt: null_to_opt}];
  external querySelectorAll : string => DomTypesRe.nodeList = "" [@@bs.send.pipe: t_document];

  /** XPath stuff */
  /* createExpression */
  /* createNSResolver */
  /* evaluate */

  /* GlobalEventHandlers interface */
};

include NodeRe.Impl { type t = DomTypesRe.document };
include EventTargetRe.Impl { type t = DomTypesRe.document };
include Impl { type t = DomTypesRe.document };
