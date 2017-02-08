type t = Dom.element;

include Dom.AsEventTarget;
include Dom.AsNode;
include EventTarget.Interface;

/* Node interface */

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

external attachShadow : t => Js.t {..} => Dom.shadowRoot  = "" [@@bs.send]; /* experimental */
external animate : t => Js.t {..} => Js.t {..} => Dom.animation = "" [@@bs.send]; /* experimental */
external closest : t => string => t = "" [@@bs.send]; /* experimental */
external createShadowRoot : t => Dom.shadowRoot = "" [@@bs.send]; /* experimental AND deprecated (?!) */
external getAttribute : t => string => Js.null string = "" [@@bs.send];
external getAttributeNS : t => string => string => Js.null string = "" [@@bs.send];
external getBoundingClientRect : t => Dom.domRect = "" [@@bs.send];
external getClientRects : t => array Dom.domRect = "" [@@bs.send];
external getElementsByClassName : t => string => array t = "" [@@bs.send]; /* return HTMLCollection, not array */
external getElementsByTagName : t => string => array t = "" [@@bs.send]; /* return HTMLCollection, not array */
external getElementsByTagNameNS : t => string => string => array t = "" [@@bs.send]; /* return HTMLCollection, not array */
external hasAttribute : t => string => Js.boolean = "" [@@bs.send];
external hasAttributeNS : t => string => string => Js.boolean = "" [@@bs.send];
external hasAttributes : t => Js.boolean = "" [@@bs.send];
external insertAdjacentElement : t => string /* enum */ => t => Js.null t = "" [@@bs.send]; /* experimental */
external insertAdjacentText : t => string /* enum */ => string => Js.null string = "" [@@bs.send]; /* experimental */
external matches : t => string => Js.boolean = "" [@@bs.send]; /* experimental, but widely supported */
external querySelector : t => string => Js.null t = "" [@@bs.send];
external querySelectorAll : t => string => array t = "" [@@bs.send]; /* returns NodeList, not array */
external releasePointerCapture : t => Dom.eventPointerId => unit = "" [@@bs.send];
external remove : t => unit = "" [@@bs.send]; /* experimental */
external removeAttribute : t => string => unit = "" [@@bs.send];
external removeAttributeNS : t => string => string => unit = "" [@@bs.send];
external requestFullscreen : t => unit = "" [@@bs.send]; /* experimental */
external requestPointerLock : t => unit = "" [@@bs.send]; /* experimental */
external scrollIntoView : t => unit = "" [@@bs.send]; /* experimental, but widely supported */
external scrollIntoViewAlignToTop : t => Js.boolean => unit = "scrollIntoView" [@@bs.send]; /* experimental, but widely supported */
external scrollIntoViewWithOptions : t => Js.t {..} => unit = "scrollIntoView" [@@bs.send]; /* experimental */
external setAttribute : t => string => string => unit = "" [@@bs.send];
external setAttributeNS : t => string => string => string => unit = "" [@@bs.send];
external setPointerCapture : t => Dom.eventPointerId => unit = "" [@@bs.send];

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

external blur : t => unit = "" [@@bs.send];
external click : t => unit = "" [@@bs.send];
external focus : t => unit = "" [@@bs.send];
external forceSpellCheck : t => unit = "" [@@bs.send]; /* experimental */

/* GlobalEventHandlers interface */
/* Not sure this should be exposed, since EventTarget seems like a better API */

/* element-specific */
external value : t => string = "" [@@bs.get];
external checked : t => Js.boolean = "" [@@bs.get];
