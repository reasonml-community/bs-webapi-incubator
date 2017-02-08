type t = Dom.document;

external asNode : t => Dom.node = "%identity";
external asEventTarget : t => Dom.eventTarget = "%identity";

/* Document interface */
external characterSet : t => string = "" [@@bs.get];
external compatMode : t => string /* enum */ = "" [@@bs.get]; /* experimental */
external docType : t => Dom.documentType = "" [@@bs.get];
external documentElement : t => Dom.element = "" [@@bs.get];
external documentURI : t => string = "" [@@bs.get];
external hidden : t => Js.boolean = "" [@@bs.get];
external implementation : t => Dom.documentImplementation = "" [@@bs.get];
external lastStyleSheetSet : t => string = "" [@@bs.get];
external pointerLockElement : t => Js.null Dom.element = "" [@@bs.get]; /* experimental */
external preferredStyleSheetSet : t => string = "" [@@bs.get];
external scrollingElement : t => Js.null Dom.element = "" [@@bs.get];
external selectedStyleSheetSet : t => string = "" [@@bs.get];
external setSelectedStyleSheetSet : t => string => string = "selectedStyleSheetSet" [@@bs.set];
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
external registerElement : string => (unit => Dom.element) = "" [@@bs.send.pipe: t]; /* experimental and deprecated in favor of customElements.define() */
external registerElementWithOptions : string => Js.t {..} => (unit => Dom.element) = "registerElement" [@@bs.send.pipe: t]; /* experimental and deprecated in favor of customElements.define() */
external getElementById : string => Js.null Dom.element = "" [@@bs.send.pipe: t];
external querySelector : string => Js.null Dom.element = "" [@@bs.send.pipe: t];
external querySelectorAll : string => array Dom.element = "" [@@bs.send.pipe: t]; /* returns NodeList, not array */

/** XPath stuff */
/* createExpression */
/* createNSResolver */
/* evaluate */

/* HTMLDocument interface */
external activeElement : t => Js.null Dom.element = "" [@@bs.get];
external body : t => Js.null Dom.element = "" [@@bs.get]; /* returns Js.null HTMLBodyElement */
external setBody : t => Dom.element => Js.null Element.t = "body" [@@bs.set]; /* accepth HTMLBodyElement and returns Js.null HTMLBodyElement */
external cookie : t => string = "" [@@bs.get];
external setCookie : t => string => string = "cookie" [@@bs.set];
external defaultView : t => Js.null Dom.window = "" [@@bs.get];
external designMode : t => string /* enum */ = "" [@@bs.get];
external setDesignMode : t => string /* enum */ => string /* enum */ = "designMode" [@@bs.set];
external dir : t => string /* enum */ = "" [@@bs.get];
external setDir : t => string /* enum */ => string /* enum */ = "dir" [@@bs.set];
external domain : t => Js.null string = "" [@@bs.get];
external setDomain : t => string => Js.null string = "domain" [@@bs.set];
external embeds : t => array Dom.element = "" [@@bs.get]; /* returns NodeList, not array */
external forms : t => array Dom.element = "" [@@bs.get]; /* return HTMLCollection, not array */
external head : t => Dom.element = "" [@@bs.get]; /* returns HTMLHeadElement */
external images : t => array Dom.element = "" [@@bs.get]; /* return HTMLCollection, not array */
external lastModified : t => string = "" [@@bs.get];
external links : t => array Dom.element = "" [@@bs.get]; /* returns NodeList, not array */
external location : t => Dom.location = "" [@@bs.get];
external setLocation : t => string => Dom.location = "location" [@@bs.set];
external plugins : t => array Dom.element = "" [@@bs.get]; /* returns HTMLCollection, not array */
external readyState : t => string /* enum */ = "" [@@bs.get];
external referrer : t => string = "" [@@bs.get];
external scripts : t => array Dom.element = "" [@@bs.get]; /* returns HTMLCOllection, not array */
external title : t => string = "" [@@bs.get];
external setTitle : t => string => string = "title" [@@bs.set];
external url : t => string = "URL" [@@bs.get];

external close : unit = "" [@@bs.send.pipe: t];
external execCommand : string => Js.boolean => Js.null string => Js.boolean = "" [@@bs.send.pipe: t];
external getElementsByName : string => array Dom.element = "" [@@bs.send.pipe: t]; /* returns NodelList, not array */
external getSelection : Dom.selection = "" [@@bs.send.pipe: t];
external hasFocus : Js.boolean = "" [@@bs.send.pipe: t];
external open_ : unit = "open" [@@bs.send.pipe: t];
external queryCommandEnabled : string => Js.boolean = "" [@@bs.send.pipe: t];
external queryCommandIndeterm : string => Js.boolean = "" [@@bs.send.pipe: t];
external queryCommandSupported : string => Js.boolean = "" [@@bs.send.pipe: t];
external queryCommandValue : string => string = "" [@@bs.send.pipe: t];
external write : string => unit = "" [@@bs.send.pipe: t];
external writeln : string => unit = "" [@@bs.send.pipe: t];

/* GlobalEventHandlers interface */
