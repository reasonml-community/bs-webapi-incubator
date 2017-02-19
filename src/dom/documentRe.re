module Impl (Type: DomInternalRe.Type) => {
  type t_document = Type.t;

  external asDocument : t_document => DomRe.document = "%identity";

  let asHtmlDocument : t_document => Js.null DomRe.htmlDocument = [%bs.raw {|
    function (document) {
      return document.doctype.name === "html" ?  document : null;
    }
  |}];
  let asHtmlDocument : t_document => option DomRe.htmlDocument = fun self => Js.Null.to_opt (asHtmlDocument self);

  let ofNode node: option t_document =>
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
  external docType : t_document => DomRe.documentType = "" [@@bs.get];
  external documentElement : t_document => DomRe.element = "" [@@bs.get];
  external documentURI : t_document => string = "" [@@bs.get];
  external hidden : t_document => Js.boolean = "" [@@bs.get];
  let hidden : t_document => bool = fun v => Js.to_bool (hidden v);
  external implementation : t_document => DomRe.documentImplementation = "" [@@bs.get];
  external lastStyleSheetSet : t_document => string = "" [@@bs.get];
  external pointerLockElement : t_document => Js.null DomRe.element = "" [@@bs.get]; /* experimental */
  let pointerLockElement : t_document => option DomRe.element = fun self => Js.Null.to_opt (pointerLockElement self);
  external preferredStyleSheetSet : t_document => string = "" [@@bs.get];
  external scrollingElement : t_document => Js.null DomRe.element = "" [@@bs.get];
  let scrollingElement : t_document => option DomRe.element = fun self => Js.Null.to_opt (scrollingElement self);
  external selectedStyleSheetSet : t_document => string = "" [@@bs.get];
  external setSelectedStyleSheetSet : t_document => string => unit = "selectedStyleSheetSet" [@@bs.set];
  external styleSheets : t_document => array DomRe.cssStyleSheet = "" [@@bs.get]; /* return StyleSheetList, not array */
  external styleSheetSets : t_document => array string = "" [@@bs.get];
  external visibilityState : t_document => string /* visibilityState enum */ = "" [@@bs.get];
  let visibilityState : t_document => visibilityState = fun self => decodeVisibilityState (visibilityState self);

  external adoptNode : DomRe.element => DomRe.element = "" [@@bs.send.pipe: t_document];
  external createAttribute : string => DomRe.attr = "" [@@bs.send.pipe: t_document];
  external createAttributeNS : string => string => DomRe.attr = "" [@@bs.send.pipe: t_document];
  external createComment : string => DomRe.comment = "" [@@bs.send.pipe: t_document];
  external createDocumentFragment : DomRe.documentFragment = "" [@@bs.send.pipe: t_document];
  external createElement : string => DomRe.element = "" [@@bs.send.pipe: t_document];
  external createElementWithOptions : string => Js.t {..} => DomRe.element = "createElement" [@@bs.send.pipe: t_document]; /* not widely supported */
  external createElementNS : string => string => DomRe.element = "" [@@bs.send.pipe: t_document];
  external createElementNSWithOptions : string => string => Js.t {..} => DomRe.element = "createEementNS" [@@bs.send.pipe: t_document]; /* not widely supported */
  external createEvent : string /* large enum */ => DomRe.event = "" [@@bs.send.pipe: t_document]; /* discouraged (but not deprecated) in favor of Event constructors */
  external createNodeIterator : DomRe.node => DomRe.nodeIterator = "" [@@bs.send.pipe: t_document];
  external createNodeIteratorWithWhatToShow : DomRe.node => NodeFilterRe.WhatToShow.t => DomRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t_document];
  external createNodeIteratorWithWhatToShowFilter : DomRe.node => NodeFilterRe.WhatToShow.t => DomRe.nodeFilter => DomRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t_document];
  /* createProcessingInstruction */
  external createRange : DomRe.range = "" [@@bs.send.pipe: t_document];
  external createText : string => DomRe.textNode = "" [@@bs.send.pipe: t_document];
  external createTreeWalker : DomRe.element => DomRe.treeWalker = "" [@@bs.send.pipe: t_document];
  external createTreeWalkerWithWhatToShow : DomRe.element => NodeFilterRe.WhatToShow.t => DomRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: t_document];
  external createTreeWalkerWithWhatToShowFilter : DomRe.element => NodeFilterRe.WhatToShow.t => DomRe.nodeFilter => DomRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: t_document];
  external elementFromPoint : int => int => DomRe.element = "" [@@bs.send.pipe: t_document]; /* experimental, but widely supported */
  external elementsFromPoint : int => int => array DomRe.element = "" [@@bs.send.pipe: t_document]; /* experimental */
  external enableStyleSheetsForSet : string => unit = "" [@@bs.send.pipe: t_document];
  external exitPointerLock : unit = "" [@@bs.send.pipe: t_document]; /* experimental */
  external getAnimations : array DomRe.animation = "" [@@bs.send.pipe: t_document]; /* experimental */
  external getElementsByClassName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t_document];
  external getElementsByTagName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t_document];
  external getElementsByTagNameNS : string => string => DomRe.htmlCollection = "" [@@bs.send.pipe: t_document];
  external importNode : DomRe.element => DomRe.element = "" [@@bs.send.pipe: t_document];
  external importNodeDeep : DomRe.element => Js.boolean => DomRe.element = "importNode" [@@bs.send.pipe: t_document];
  let importNodeDeep : DomRe.element => t_document => DomRe.element = fun element self => importNodeDeep element (Js.Boolean.to_js_boolean true) self;
  external registerElement : string => (unit => DomRe.element) = "" [@@bs.send.pipe: t_document]; /* experimental and deprecated in favor of customElements.define() */
  external registerElementWithOptions : string => Js.t {..} => (unit => DomRe.element) = "registerElement" [@@bs.send.pipe: t_document]; /* experimental and deprecated in favor of customElements.define() */
  external getElementById : string => Js.null DomRe.element = "" [@@bs.send.pipe: t_document];
  let getElementById : string => t_document => option DomRe.element = fun id self => Js.Null.to_opt (getElementById id self);
  external querySelector : string => Js.null DomRe.element = "" [@@bs.send.pipe: t_document];
  let querySelector : string => t_document => option DomRe.element = fun selector self => Js.Null.to_opt (querySelector selector self);
  external querySelectorAll : string => DomRe.nodeList = "" [@@bs.send.pipe: t_document];

  /** XPath stuff */
  /* createExpression */
  /* createNSResolver */
  /* evaluate */

  /* GlobalEventHandlers interface */
};

include NodeRe.Impl { type t = DomRe.document };
include EventTargetRe.Impl { type t = DomRe.document };
include Impl { type t = DomRe.document };
