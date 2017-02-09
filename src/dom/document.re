type t = Dom.document;

external asNode : t => Dom.node = "%identity";
external asEventTarget : t => Dom.eventTarget = "%identity";

let asHtmlDocument : t => Js.null Dom.htmlDocument = [%bs.raw {|
  function (document) {
    return document.doctype.name === "html" ?  document : null;
  };
|}];
let asHtmlDocument : t => option Dom.htmlDocument = fun self => Js.Null.to_opt (asHtmlDocument self);

external characterSet : t => string = "" [@@bs.get];
external compatMode : t => string /* enum */ = "" [@@bs.get]; /* experimental */
external docType : t => Dom.documentType = "" [@@bs.get];
external documentElement : t => Dom.element = "" [@@bs.get];
external documentURI : t => string = "" [@@bs.get];
external hidden : t => Js.boolean = "" [@@bs.get];
let hidden : t => bool = fun v => Js.to_bool (hidden v);
external implementation : t => Dom.documentImplementation = "" [@@bs.get];
external lastStyleSheetSet : t => string = "" [@@bs.get];
external pointerLockElement : t => Js.null Dom.element = "" [@@bs.get]; /* experimental */
let pointerLockElement : t => option Dom.element = fun self => Js.Null.to_opt (pointerLockElement self);
external preferredStyleSheetSet : t => string = "" [@@bs.get];
external scrollingElement : t => Js.null Dom.element = "" [@@bs.get];
let scrollingElement : t => option Dom.element = fun self => Js.Null.to_opt (scrollingElement self);
external selectedStyleSheetSet : t => string = "" [@@bs.get];
external setSelectedStyleSheetSet : t => string => unit = "selectedStyleSheetSet" [@@bs.set];
external styleSheets : t => array Dom.cssStyleSheet = "" [@@bs.get]; /* return StyleSheetList, not array */
external styleSheetSets : t => array string = "" [@@bs.get];
external visibilityState : t => string /* enum */ = "" [@@bs.get];

external adoptNode : Dom.element => Dom.element = "" [@@bs.send.pipe: t];
external createAttribute : string => Dom.attr = "" [@@bs.send.pipe: t];
external createAttributeNS : string => string => Dom.attr = "" [@@bs.send.pipe: t];
external createComment : string => Dom.comment = "" [@@bs.send.pipe: t];
external createDocumentFragment : Dom.documentFragment = "" [@@bs.send.pipe: t];
external createElement : string => Dom.element = "" [@@bs.send.pipe: t];
external createElementWithOptions : string => Js.t {..} => Dom.element = "createElement" [@@bs.send.pipe: t]; /* not widely supported */
external createElementNS : string => string => Dom.element = "" [@@bs.send.pipe: t];
external createElementNSWithOptions : string => string => Js.t {..} => Dom.element = "createEementNS" [@@bs.send.pipe: t]; /* not widely supported */
external createEvent : string /* large enum */ => Dom.event = "" [@@bs.send.pipe: t]; /* discouraged (but not deprecated) in favor of Event constructors */
external createNodeIterator : Dom.node => Dom.nodeIterator = "" [@@bs.send.pipe: t];
external createNodeIteratorWithWhatToShow : Dom.node => int /* NodeFilter enum */ => Dom.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t];
external createNodeIteratorWithWhatToShowFilter : Dom.node => int /* NodeFilter enum */ => Dom.nodeFilter => Dom.nodeIterator = "createNodeIterator" [@@bs.send.pipe: t];
/* createProcessingInstruction */
external createRange : Dom.range = "" [@@bs.send.pipe: t];
external createText : string => Dom.textNode = "" [@@bs.send.pipe: t];
external createTreeWalker : Dom.element => Dom.treeWalker = "" [@@bs.send.pipe: t];
external createTreeWalkerWithWhatToShow : Dom.element => int /* NodeFilter enum */ => Dom.treeWalker = "createTreeWalker" [@@bs.send.pipe: t];
external createTreeWalkerWithWhatToShowFilter : Dom.element => int /* NodeFilter enum */ => Dom.treeWalker => Dom.nodeIterator = "createTreeWalker" [@@bs.send.pipe: t];
external elementFromPoint : int => int => Dom.element = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external elementsFromPoint : int => int => array Dom.element = "" [@@bs.send.pipe: t]; /* experimental */
external enableStyleSheetsForSet : string => unit = "" [@@bs.send.pipe: t];
external exitPointerLock : unit = "" [@@bs.send.pipe: t]; /* experimental */
external getAnimations : array Dom.animation = "" [@@bs.send.pipe: t]; /* experimental */
external getElementsByClassName : string => array Dom.element = "" [@@bs.send.pipe: t]; /* returns HTMLCollection, not array */
external getElementsByTagName : string => array Dom.element = "" [@@bs.send.pipe: t]; /* returns HTMLCollection, not array */
external getElementsByTagNameNS : string => string => array Dom.element = "" [@@bs.send.pipe: t]; /* returns HTMLCollection, not array */
external importNode : Dom.element => Dom.element = "" [@@bs.send.pipe: t];
external importNodeDeep : Dom.element => Js.boolean => Dom.element = "importNode" [@@bs.send.pipe: t];
let importNodeDeep : Dom.element => t => Dom.element = fun element self => importNodeDeep element (Js.Boolean.to_js_boolean true) self;
external registerElement : string => (unit => Dom.element) = "" [@@bs.send.pipe: t]; /* experimental and deprecated in favor of customElements.define() */
external registerElementWithOptions : string => Js.t {..} => (unit => Dom.element) = "registerElement" [@@bs.send.pipe: t]; /* experimental and deprecated in favor of customElements.define() */
external getElementById : string => Js.null Dom.element = "" [@@bs.send.pipe: t];
let getElementById : string => t => option Dom.element = fun id self => Js.Null.to_opt (getElementById id self);
external querySelector : string => Js.null Dom.element = "" [@@bs.send.pipe: t];
let querySelector : string => t => option Dom.element = fun selector self => Js.Null.to_opt (querySelector selector self);
external querySelectorAll : string => array Dom.element = "" [@@bs.send.pipe: t]; /* returns NodeList, not array */

/** XPath stuff */
/* createExpression */
/* createNSResolver */
/* evaluate */

/* GlobalEventHandlers interface */
