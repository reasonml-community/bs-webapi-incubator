type t = Dom.element;

external asNode : t => Dom.node = "%identity";
external asEventTarget : t => Dom.eventTarget = "%identity";

/* Element interface */
external assignedSlot : t => t = "" [@@bs.get]; /* experimental, returns HTMLSlotElement */
external attributes : t => array Dom.attr = "" [@@bs.get]; /* return NameNodeMap, not array */
external classList : t => Dom.domTokenList = "" [@@bs.get];
external className : t => string = "" [@@bs.get];
external setClassName : t => string => string = "className" [@@bs.set];
external clientHeight : t => int = "" [@@bs.get]; /* experimental */
external clientLeft : t => int = "" [@@bs.get]; /* experimental */
external clientTop : t => int = "" [@@bs.get]; /* experimental */
external clientWidth : t => int = "" [@@bs.get]; /* experimental */
external id : t => string = "" [@@bs.get];
external setId : t => string => string = "id" [@@bs.set];
external innerHTML : t => string = "" [@@bs.get];
external setInnerHTML : t => string => string = "innerHTML" [@@bs.set];
external localName : t => string = "" [@@bs.get];
external namespaceURI : t => Js.null string = "" [@@bs.get];
external nextElementSibling : t => Js.null t = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
external outerHTML : t => string = "" [@@bs.get]; /* experimental, but widely supported */
external setOuterHTML : t => string => string = "outerHTML" [@@bs.set]; /* experimental, but widely supported */
external prefix : t => Js.null string = "" [@@bs.get];
external previousElementSibling : t => Js.null t = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
external scrollHeight : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external scrollLeft : t => int = "" [@@bs.get]; /* experimental */
external setScrollLeft : t => int => int = "scrollLeft" [@@bs.set]; /* experimental */
external scrollTop : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external setScrollTop : t => int => int = "scrollTop" [@@bs.set]; /* experimental, but widely supported */
external scrollWidth : t => int = "" [@@bs.get]; /* experimental */
external shadowRoot : t => t = "" [@@bs.get]; /* experimental */
external slot : t => string = "" [@@bs.get]; /* experimental */
external setSlot : t => string => string = "slot" [@@bs.set]; /* experimental */
external tagName : t => string = "" [@@bs.get];

external attachShadow : Js.t {..} => Dom.shadowRoot  = "" [@@bs.send.pipe: t]; /* experimental */
external animate : Js.t {..} => Js.t {..} => Dom.animation = "" [@@bs.send.pipe: t]; /* experimental */
external closest : string => t = "" [@@bs.send.pipe: t]; /* experimental */
external createShadowRoot : Dom.shadowRoot = "" [@@bs.send.pipe: t]; /* experimental AND deprecated (?!) */
external getAttribute : string => Js.null string = "" [@@bs.send.pipe: t];
external getAttributeNS : string => string => Js.null string = "" [@@bs.send.pipe: t];
external getBoundingClientRect : Dom.domRect = "" [@@bs.send.pipe: t];
external getClientRects : array Dom.domRect = "" [@@bs.send.pipe: t];
external getElementsByClassName : string => array t = "" [@@bs.send.pipe: t]; /* return HTMLCollection, not array */
external getElementsByTagName : string => array t = "" [@@bs.send.pipe: t]; /* return HTMLCollection, not array */
external getElementsByTagNameNS : string => string => array t = "" [@@bs.send.pipe: t]; /* return HTMLCollection, not array */
external hasAttribute : string => Js.boolean = "" [@@bs.send.pipe: t];
external hasAttributeNS : string => string => Js.boolean = "" [@@bs.send.pipe: t];
external hasAttributes : Js.boolean = "" [@@bs.send.pipe: t];
external insertAdjacentElement : string /* enum */ => t => Js.null t = "" [@@bs.send.pipe: t]; /* experimental */
external insertAdjacentText : string /* enum */ => string => Js.null string = "" [@@bs.send.pipe: t]; /* experimental */
external matches : string => Js.boolean = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external querySelector : string => Js.null t = "" [@@bs.send.pipe: t];
external querySelectorAll : string => array t = "" [@@bs.send.pipe: t]; /* returns NodeList, not array */
external releasePointerCapture : Dom.eventPointerId => unit = "" [@@bs.send.pipe: t];
external remove : unit = "" [@@bs.send.pipe: t]; /* experimental */
external removeAttribute : string => unit = "" [@@bs.send.pipe: t];
external removeAttributeNS : string => string => unit = "" [@@bs.send.pipe: t];
external requestFullscreen : unit = "" [@@bs.send.pipe: t]; /* experimental */
external requestPointerLock : unit = "" [@@bs.send.pipe: t]; /* experimental */
external scrollIntoView : unit = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external scrollIntoViewAlignToTop : Js.boolean => unit = "scrollIntoView" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external scrollIntoViewWithOptions : Js.t {..} => unit = "scrollIntoView" [@@bs.send.pipe: t]; /* experimental */
external setAttribute : string => string => unit = "" [@@bs.send.pipe: t];
external setAttributeNS : string => string => string => unit = "" [@@bs.send.pipe: t];
external setPointerCapture : Dom.eventPointerId => unit = "" [@@bs.send.pipe: t];

/* HTMLElement interface */
external accessKey : t => string = "" [@@bs.get];
external setAccessKey : t => string => string = "accessKey" [@@bs.set];
external accessKeyLabel : t => string = "" [@@bs.get];
external contentEditable : t => string /* enum */ = "" [@@bs.get];
external setContentEditable : t => string /* enum */ => string /* enum */ = "contentEditable" [@@bs.set];
external isContentEditable : t => Js.boolean = "" [@@bs.get];
external contextMenu : t => t = "" [@@bs.get]; /* returns HTMLMenuElement */
external setContextMenu : t => t => t = "contextMenu" [@@bs.set]; /* accepts and returns HTMLMenuElement */
external dataset : t => Dom.domStringMap = "" [@@bs.get];
external dir : t => string /* enum */ = "" [@@bs.get];
external setDir : t => string /* enum */ => string /* enum */ = "dir" [@@bs.set];
external draggable : t => Js.boolean = "" [@@bs.get];
external setDraggable : t => Js.boolean => Js.boolean = "draggable" [@@bs.set];
external dropzone : t => Dom.domSettableTokenList = "" [@@bs.get];
external hidden : t => Js.boolean = "" [@@bs.get];
external setHidden : t => Js.boolean => Js.boolean = "hidden" [@@bs.set];
external itemScope : t => Js.boolean = "" [@@bs.get]; /* experimental */
external setItemScope : t => Js.boolean => Js.boolean = "itemScope" [@@bs.set]; /* experimental */
external itemType : t => Dom.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemId : t => string = "" [@@bs.get]; /* experimental */
external setItemId : t => string => string = "itemId" [@@bs.set]; /* experimental */
external itemRef : t => Dom.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemProp : t => Dom.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemValue : t => Js.t {..} = "" [@@bs.get]; /* experimental */
external setItemValue : t => Js.t {..} => Js.t {..} = "itemValue" [@@bs.set]; /* experimental */
external lang : t => string = "" [@@bs.get];
external setLang : t => string => string = "lang" [@@bs.set];
external offsetHeight : t => int = "" [@@bs.get]; /* experimental */
external offsetLeft : t => int = "" [@@bs.get]; /* experimental */
external offsetParent : t => int = "" [@@bs.get]; /* experimental */
external offsetTop : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external offsetWidth : t => int = "" [@@bs.get]; /* experimental */
/*external properties : r => HTMLPropertiesCollection.t = "properties" [@@bs.get]; /* experimental */*/
external spellcheck : t => Js.boolean = "" [@@bs.get];
external setSpellcheck : t => Js.boolean => Js.boolean = "spellcheck" [@@bs.set];
external style : t => Dom.cssStyleDeclaration = "" [@@bs.get];
external setStyle : t => Dom.cssStyleDeclaration => Dom.cssStyleDeclaration = "style" [@@bs.set];
external tabIndex : t => int = "" [@@bs.get];
external setTabIndex : t => int => int = "tabIndex" [@@bs.set];
external title : t => string = "" [@@bs.get];
external setTitle : t => string => string = "title" [@@bs.set];
external translate : t => Js.boolean = "" [@@bs.get]; /* experimental */
external setTranslate : t => Js.boolean => Js.boolean = "translate" [@@bs.set]; /* experimental */

external blur : unit = "" [@@bs.send.pipe: t];
external click : unit = "" [@@bs.send.pipe: t];
external focus : unit = "" [@@bs.send.pipe: t];
external forceSpellCheck : unit = "" [@@bs.send.pipe: t]; /* experimental */

/* GlobalEventHandlers interface */
/* Not sure this should be exposed, since EventTarget seems like a better API */

/* element-specific */
external value : t => string = "" [@@bs.get];
external checked : t => Js.boolean = "" [@@bs.get];
