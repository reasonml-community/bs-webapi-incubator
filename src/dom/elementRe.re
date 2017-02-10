type t = DomRe.element;

external asNode : t => DomRe.node = "%identity";
external asEventTarget : t => DomRe.eventTarget = "%identity";
let asHtmlElement : t => Js.null DomRe.htmlElement = [%bs.raw {|
  function (element) {
    // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
    return element.contentEditable !== undefined ?  element : null;
  };
|}];
let asHtmlElement : t => option DomRe.htmlElement = fun self => Js.Null.to_opt (asHtmlElement self);

let ofNode node: option t =>
  (NodeRe.nodeType node) == Element ? Some (DomRe.cast node) : None;

type insertPosition =
| BeforeBegin
| AfterBegin
| BeforeEnd
| AfterEnd;
let encodeInsertPosition = fun /* internal */
| BeforeBegin => "beforebegin"
| AfterBegin  => "afterbegin"
| BeforeEnd   => "beforeemd"
| AfterEnd    => "afterend";

external assignedSlot : t => t = "" [@@bs.get]; /* experimental, returns HTMLSlotElement */
external attributes : t => array DomRe.attr = "" [@@bs.get]; /* return NameNodeMap, not array */
external classList : t => DomRe.domTokenList = "" [@@bs.get];
external className : t => string = "" [@@bs.get];
external setClassName : t => string => unit = "className" [@@bs.set];
external clientHeight : t => int = "" [@@bs.get]; /* experimental */
external clientLeft : t => int = "" [@@bs.get]; /* experimental */
external clientTop : t => int = "" [@@bs.get]; /* experimental */
external clientWidth : t => int = "" [@@bs.get]; /* experimental */
external id : t => string = "" [@@bs.get];
external setId : t => string => unit = "id" [@@bs.set];
external innerHTML : t => string = "" [@@bs.get];
external setInnerHTML : t => string => unit = "innerHTML" [@@bs.set];
external localName : t => string = "" [@@bs.get];
external namespaceURI : t => Js.null string = "" [@@bs.get];
let namespaceURI : t => option string = fun self => Js.Null.to_opt (namespaceURI self);
external nextElementSibling : t => Js.null t = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
let nextElementSibling : t => option t = fun self => Js.Null.to_opt (nextElementSibling self);
external outerHTML : t => string = "" [@@bs.get]; /* experimental, but widely supported */
external setOuterHTML : t => string => unit = "outerHTML" [@@bs.set]; /* experimental, but widely supported */
external prefix : t => Js.null string = "" [@@bs.get];
let prefix : t => option string = fun self => Js.Null.to_opt (prefix self);
external previousElementSibling : t => Js.null t = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
let previousElementSibling : t => option t = fun self => Js.Null.to_opt (previousElementSibling self);
external scrollHeight : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external scrollLeft : t => int = "" [@@bs.get]; /* experimental */
external setScrollLeft : t => int => unit = "scrollLeft" [@@bs.set]; /* experimental */
external scrollTop : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external setScrollTop : t => int => unit = "scrollTop" [@@bs.set]; /* experimental, but widely supported */
external scrollWidth : t => int = "" [@@bs.get]; /* experimental */
external shadowRoot : t => t = "" [@@bs.get]; /* experimental */
external slot : t => string = "" [@@bs.get]; /* experimental */
external setSlot : t => string => unit = "slot" [@@bs.set]; /* experimental */
external tagName : t => string = "" [@@bs.get];

external attachShadow : Js.t {..} => DomRe.shadowRoot  = "" [@@bs.send.pipe: t]; /* experimental */
external animate : Js.t {..} => Js.t {..} => DomRe.animation = "" [@@bs.send.pipe: t]; /* experimental */
external closest : string => t = "" [@@bs.send.pipe: t]; /* experimental */
external createShadowRoot : DomRe.shadowRoot = "" [@@bs.send.pipe: t]; /* experimental AND deprecated (?!) */
external getAttribute : string => Js.null string = "" [@@bs.send.pipe: t];
let getAttribute : string => t => option string = fun name self => Js.Null.to_opt (getAttribute name self);
external getAttributeNS : string => string => Js.null string = "" [@@bs.send.pipe: t];
let getAttributeNS : string => string => t => option string = fun ns name self => Js.Null.to_opt (getAttributeNS ns name self);
external getBoundingClientRect : DomRe.domRect = "" [@@bs.send.pipe: t];
external getClientRects : array DomRe.domRect = "" [@@bs.send.pipe: t];
external getElementsByClassName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t];
external getElementsByTagName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t];
external getElementsByTagNameNS : string => string => DomRe.htmlCollection = "" [@@bs.send.pipe: t];
external hasAttribute : string => Js.boolean = "" [@@bs.send.pipe: t];
let hasAttribute : string => t => bool = fun name self => Js.to_bool (hasAttribute name self);
external hasAttributeNS : string => string => Js.boolean = "" [@@bs.send.pipe: t];
let hasAttributeNS : string => string => t => bool = fun ns name self => Js.to_bool (hasAttributeNS ns name self);
external hasAttributes : Js.boolean = "" [@@bs.send.pipe: t];
let hasAttributes : t => bool = fun self => Js.to_bool (hasAttributes self);
external insertAdjacentElement : string /* insertPosition enum */ => t => unit = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
let insertAdjacentElement : insertPosition => t => t => unit = fun position element self => insertAdjacentElement (encodeInsertPosition position) element self;
external insertAdjacentHTML : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
let insertAdjacentHTML : insertPosition => string => t => unit = fun position text self => insertAdjacentHTML (encodeInsertPosition position) text self;
external insertAdjacentText : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
let insertAdjacentText : insertPosition => string => t => unit = fun position text self => insertAdjacentText (encodeInsertPosition position) text self;
external matches : string => Js.boolean = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
let matches : string => t => bool = fun selector self => Js.to_bool (matches selector self);
external querySelector : string => Js.null t = "" [@@bs.send.pipe: t];
let querySelector : string => t => option t = fun selector self => Js.Null.to_opt (querySelector selector self);
external querySelectorAll : string => DomRe.nodeList = "" [@@bs.send.pipe: t];
external releasePointerCapture : DomRe.eventPointerId => unit = "" [@@bs.send.pipe: t];
external remove : unit = "" [@@bs.send.pipe: t]; /* experimental */
external removeAttribute : string => unit = "" [@@bs.send.pipe: t];
external removeAttributeNS : string => string => unit = "" [@@bs.send.pipe: t];
external requestFullscreen : unit = "" [@@bs.send.pipe: t]; /* experimental */
external requestPointerLock : unit = "" [@@bs.send.pipe: t]; /* experimental */
external scrollIntoView : unit = "" [@@bs.send.pipe: t]; /* experimental, but widely supported */
external scrollIntoViewNoAlignToTop : Js.boolean => unit = "scrollIntoView" [@@bs.send.pipe: t]; /* experimental, but widely supported */
let scrollIntoViewNoAlignToTop : t => unit = fun self => scrollIntoViewNoAlignToTop (Js.Boolean.to_js_boolean true) self;
external scrollIntoViewWithOptions : Js.t {..} => unit = "scrollIntoView" [@@bs.send.pipe: t]; /* experimental */
external setAttribute : string => string => unit = "" [@@bs.send.pipe: t];
external setAttributeNS : string => string => string => unit = "" [@@bs.send.pipe: t];
external setPointerCapture : DomRe.eventPointerId => unit = "" [@@bs.send.pipe: t];

/* GlobalEventHandlers interface */
/* Not sure this should be exposed, since EventTarget seems like a better API */

external setOnClick : t => (DomRe.event => unit) => unit = "onclick" [@@bs.set]; /* should be MouseEvent */
