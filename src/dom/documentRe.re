type t = DomRe.document;

external asNode : t => DomRe.node = "%identity";
external asEventTarget : t => DomRe.eventTarget = "%identity";
let asHtmlDocument : t => Js.null DomRe.htmlDocument = [%bs.raw {|
  function (document) {
    return document.doctype.name === "html" ?  document : null;
  }
|}];
let asHtmlDocument : t => option DomRe.htmlDocument = fun self => Js.Null.to_opt (asHtmlDocument self);

let ofNode node: option t =>
  (NodeRe.nodeType node) == Document ? Some (DomRe.cast node) : None;

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

external characterSet : t => string = "" [@@bs.get];
external compatMode : t => string /* compatMode enum */ = "" [@@bs.get]; /* experimental */
let compatMode : t => compatMode = fun self => decodeCompatMode (compatMode self);
external docType : t => DomRe.documentType = "" [@@bs.get];
external documentElement : t => DomRe.element = "" [@@bs.get];
external documentURI : t => string = "" [@@bs.get];
external hidden : t => Js.boolean = "" [@@bs.get];
let hidden : t => bool = fun v => Js.to_bool (hidden v);
external implementation : t => DomRe.documentImplementation = "" [@@bs.get];
external lastStyleSheetSet : t => string = "" [@@bs.get];
external pointerLockElement : t => Js.null DomRe.element = "" [@@bs.get]; /* experimental */
let pointerLockElement : t => option DomRe.element = fun self => Js.Null.to_opt (pointerLockElement self);
external preferredStyleSheetSet : t => string = "" [@@bs.get];
external scrollingElement : t => Js.null DomRe.element = "" [@@bs.get];
let scrollingElement : t => option DomRe.element = fun self => Js.Null.to_opt (scrollingElement self);
external selectedStyleSheetSet : t => string = "" [@@bs.get];
external setSelectedStyleSheetSet : t => string => unit = "selectedStyleSheetSet" [@@bs.set];
external styleSheets : t => array DomRe.cssStyleSheet = "" [@@bs.get]; /* return StyleSheetList, not array */
external styleSheetSets : t => array string = "" [@@bs.get];
external visibilityState : t => string /* visibilityState enum */ = "" [@@bs.get];
let visibilityState : t => visibilityState = fun self => decodeVisibilityState (visibilityState self);

external adoptNode : DomRe.element => DomRe.element = "" [@@bs.send.pipe: t];
external createAttribute : string => DomRe.attr = "" [@@bs.send.pipe: t];
external createAttributeNS : string => string => DomRe.attr = "" [@@bs.send.pipe: t];
external createComment : string => DomRe.comment = "" [@@bs.send.pipe: t];
external createDocumentFragment : DomRe.documentFragment = "" [@@bs.send.pipe: t];
external createElement : string => DomRe.element = "" [@@bs.send.pipe: t];
external createElementWithOptions : string => Js.t {..} => DomRe.element = "createElement" [@@bs.send.pipe: t]; /* not widely supported */
external createElementNS : string => string => DomRe.element = "" [@@bs.send.pipe: t];
external createElementNSWithOptions : string => string => Js.t {..} => DomRe.element = "createEementNS" [@@bs.send.pipe: t]; /* not widely supported */
external createEvent : string /* large enum */ => DomRe.event = "" [@@bs.send.pipe: t]; /* discouraged (but not deprecated) in favor of Event constructors */
external createNodeIterator : DomRe.node => DomRe.nodeIterator = "" [@@bs.send.pipe: t];
external createNodeIteratorWithWhatToShow : DomRe.node => NodeFilterRe.WhatToShow.t => DomRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t];
external createNodeIteratorWithWhatToShowFilter : DomRe.node => NodeFilterRe.WhatToShow.t => DomRe.nodeFilter => DomRe.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t];
/* createProcessingInstruction */
external createRange : DomRe.range = "" [@@bs.send.pipe: t];
external createText : string => DomRe.textNode = "" [@@bs.send.pipe: t];
external createTreeWalker : DomRe.element => DomRe.treeWalker = "" [@@bs.send.pipe: t];
external createTreeWalkerWithWhatToShow : DomRe.element => NodeFilterRe.WhatToShow.t => DomRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: t];
external createTreeWalkerWithWhatToShowFilter : DomRe.element => NodeFilterRe.WhatToShow.t => DomRe.nodeFilter => DomRe.treeWalker = "createTreeWalker" [@@bs.send.pipe: t];
external elementFromPoint : int => int => DomRe.element = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external elementsFromPoint : int => int => array DomRe.element = "" [@@bs.send.pipe: t]; /* experimental */
external enableStyleSheetsForSet : string => unit = "" [@@bs.send.pipe: t];
external exitPointerLock : unit = "" [@@bs.send.pipe: t]; /* experimental */
external getAnimations : array DomRe.animation = "" [@@bs.send.pipe: t]; /* experimental */
external getElementsByClassName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t];
external getElementsByTagName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t];
external getElementsByTagNameNS : string => string => DomRe.htmlCollection = "" [@@bs.send.pipe: t];
external importNode : DomRe.element => DomRe.element = "" [@@bs.send.pipe: t];
external importNodeDeep : DomRe.element => Js.boolean => DomRe.element = "importNode" [@@bs.send.pipe: t];
let importNodeDeep : DomRe.element => t => DomRe.element = fun element self => importNodeDeep element (Js.Boolean.to_js_boolean true) self;
external registerElement : string => (unit => DomRe.element) = "" [@@bs.send.pipe: t]; /* experimental and deprecated in favor of customElements.define() */
external registerElementWithOptions : string => Js.t {..} => (unit => DomRe.element) = "registerElement" [@@bs.send.pipe: t]; /* experimental and deprecated in favor of customElements.define() */
external getElementById : string => Js.null DomRe.element = "" [@@bs.send.pipe: t];
let getElementById : string => t => option DomRe.element = fun id self => Js.Null.to_opt (getElementById id self);
external querySelector : string => Js.null DomRe.element = "" [@@bs.send.pipe: t];
let querySelector : string => t => option DomRe.element = fun selector self => Js.Null.to_opt (querySelector selector self);
external querySelectorAll : string => DomRe.nodeList = "" [@@bs.send.pipe: t];

/** XPath stuff */
/* createExpression */
/* createNSResolver */
/* evaluate */

/* GlobalEventHandlers interface */
