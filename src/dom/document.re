type t = Dom.document;

/* Node interface */

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

external adoptNode : t => Dom.element => Dom.element = "" [@@bs.send];
external createAttribute : t => string => Dom.attr = "" [@@bs.send];
external createAttributeNS : t => string => string => Dom.attr = "" [@@bs.send];
external createComment : t => string => Dom.comment = "" [@@bs.send];
external createDocumentFragment : t => Dom.documentFragment = "" [@@bs.send];
external createElement : t => string => Dom.element = "" [@@bs.send];
external createElementWithOptions : t => string => Js.t {..} => Dom.element = "createElement" [@@bs.send]; /* not widely supported */
external createElementNS : t => string => string => Dom.element = "" [@@bs.send];
external createElementNSWithOptions : t => string => string => Js.t {..} => Dom.element = "createEementNS" [@@bs.send]; /* not widely supported */
external createEvent : t => string /* large enum */ => Dom.event = "" [@@bs.send]; /* discouraged (but not deprecated) in favor of Event constructors */
external createNodeIterator : t => Dom.element => Dom.nodeIterator = "" [@@bs.send];
external createNodeIteratorWithWhatToShow : t => Dom.element => int /* NodeFilter enum */ => Dom.nodeIterator = "createNodeIterator" [@@bs.send];
external createNodeIteratorWithWhatToShowFilter : t => Dom.element => int /* NodeFilter enum */ => Dom.nodeFilter => Dom.nodeIterator = "createNodeIterator" [@@bs.send];
/* createProcessingInstruction */
external createRange : t => Dom.range = "" [@@bs.send];
external createText : t => string => Dom.textNode = "" [@@bs.send];
external createTreeWalker : t => Dom.element => Dom.treeWalker = "" [@@bs.send];
external createTreeWalkerWithWhatToShow : t => Dom.element => int /* NodeFilter enum */ => Dom.treeWalker = "createTreeWalker" [@@bs.send];
external createTreeWalkerWithWhatToShowFilter : t => Dom.element => int /* NodeFilter enum */ => Dom.treeWalker => Dom.nodeIterator = "createTreeWalker" [@@bs.send];
external elementFromPoint : t => int => int => Dom.element = "" [@@bs.send]; /* experimental, but widely supported */
external elementsFromPoint : t => int => int => array Dom.element = "" [@@bs.send]; /* experimental */
external enableStyleSheetsForSet : t => string => unit = "" [@@bs.send];
external exitPointerLock : t => unit = "" [@@bs.send]; /* experimental */
external getAnimations : t => array Dom.animation = "" [@@bs.send]; /* experimental */
external getElementsByClassName : t => string => array Dom.element = "" [@@bs.send]; /* returns HTMLCollection, not array */
external getElementsByTagName : t => string => array Dom.element = "" [@@bs.send]; /* returns HTMLCollection, not array */
external getElementsByTagNameNS : t => string => string => array Dom.element = "" [@@bs.send]; /* returns HTMLCollection, not array */
external importNode : t => Dom.element => Dom.element = "" [@@bs.send];
external importNodeDeep : t => Dom.element => Js.boolean => Dom.element = "importNode" [@@bs.send];
external registerElement : t => string => (unit => Dom.element) = "" [@@bs.send]; /* experimental and deprecated in favor of customElements.define() */
external registerElementWithOptions : t => string => Js.t {..} => (unit => Dom.element) = "registerElement" [@@bs.send]; /* experimental and deprecated in favor of customElements.define() */
external getElementById : t => string => Js.null Dom.element = "" [@@bs.send];
external querySelector : t => string => Js.null Dom.element = "" [@@bs.send];
external querySelectorAll : t => string => array Dom.element = "" [@@bs.send]; /* returns NodeList, not array */

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

external close : t => unit = "" [@@bs.send];
external execCommand : t => string => Js.boolean => Js.null string => Js.boolean = "" [@@bs.send];
external getElementsByName : t => string => array Dom.element = "" [@@bs.send]; /* returns NodelList, not array */
external getSelection : t => Dom.selection = "" [@@bs.send];
external hasFocus : t => Js.boolean = "" [@@bs.send];
external open_ : t => unit = "open" [@@bs.send];
external queryCommandEnabled : t => string => Js.boolean = "" [@@bs.send];
external queryCommandIndeterm : t => string => Js.boolean = "" [@@bs.send];
external queryCommandSupported : t => string => Js.boolean = "" [@@bs.send];
external queryCommandValue : t => string => string = "" [@@bs.send];
external write : t => string => unit = "" [@@bs.send];
external writeln : t => string => unit = "" [@@bs.send];

/* GlobalEventHandlers interface */
