module Impl(Type: DomInternalRe.Type) => {
  type t_element = Type.t;

  external asElement : t_element => DomRe.element = "%identity";

  let asHtmlElement : t_element => Js.null DomRe.htmlElement = [%bs.raw {|
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  |}];
  let asHtmlElement : t_element => option DomRe.htmlElement = fun self => Js.Null.to_opt (asHtmlElement self);

  let ofNode node: option t_element =>
    (NodeRe.nodeType node) == Element ? Some (DomInternalRe.cast node) : None;

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

  external assignedSlot : t_element => DomRe.element = "" [@@bs.get]; /* experimental, returns HTMLSlotElement */
  external attributes : t_element => array DomRe.attr = "" [@@bs.get]; /* return NameNodeMap, not array */
  external classList : t_element => DomRe.domTokenList = "" [@@bs.get];
  external className : t_element => string = "" [@@bs.get];
  external setClassName : t_element => string => unit = "className" [@@bs.set];
  external clientHeight : t_element => int = "" [@@bs.get]; /* experimental */
  external clientLeft : t_element => int = "" [@@bs.get]; /* experimental */
  external clientTop : t_element => int = "" [@@bs.get]; /* experimental */
  external clientWidth : t_element => int = "" [@@bs.get]; /* experimental */
  external id : t_element => string = "" [@@bs.get];
  external setId : t_element => string => unit = "id" [@@bs.set];
  external innerHTML : t_element => string = "" [@@bs.get];
  external setInnerHTML : t_element => string => unit = "innerHTML" [@@bs.set];
  external localName : t_element => string = "" [@@bs.get];
  external namespaceURI : t_element => Js.null string = "" [@@bs.get];
  let namespaceURI : t_element => option string = fun self => Js.Null.to_opt (namespaceURI self);
  external nextElementSibling : t_element => Js.null DomRe.element = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
  let nextElementSibling : t_element => option DomRe.element = fun self => Js.Null.to_opt (nextElementSibling self);
  external outerHTML : t_element => string = "" [@@bs.get]; /* experimental, but widely supported */
  external setOuterHTML : t_element => string => unit = "outerHTML" [@@bs.set]; /* experimental, but widely supported */
  external prefix : t_element => Js.null string = "" [@@bs.get];
  let prefix : t_element => option string = fun self => Js.Null.to_opt (prefix self);
  external previousElementSibling : t_element => Js.null DomRe.element = "" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
  let previousElementSibling : t_element => option DomRe.element = fun self => Js.Null.to_opt (previousElementSibling self);
  external scrollHeight : t_element => int = "" [@@bs.get]; /* experimental, but widely supported */
  external scrollLeft : t_element => int = "" [@@bs.get]; /* experimental */
  external setScrollLeft : t_element => int => unit = "scrollLeft" [@@bs.set]; /* experimental */
  external scrollTop : t_element => int = "" [@@bs.get]; /* experimental, but widely supported */
  external setScrollTop : t_element => int => unit = "scrollTop" [@@bs.set]; /* experimental, but widely supported */
  external scrollWidth : t_element => int = "" [@@bs.get]; /* experimental */
  external shadowRoot : t_element => DomRe.element = "" [@@bs.get]; /* experimental */
  external slot : t_element => string = "" [@@bs.get]; /* experimental */
  external setSlot : t_element => string => unit = "slot" [@@bs.set]; /* experimental */
  external tagName : t_element => string = "" [@@bs.get];

  external attachShadow : Js.t {..} => DomRe.shadowRoot  = "" [@@bs.send.pipe: t_element]; /* experimental */
  external animate : Js.t {..} => Js.t {..} => DomRe.animation = "" [@@bs.send.pipe: t_element]; /* experimental */
  external closest : string => DomRe.element = "" [@@bs.send.pipe: t_element]; /* experimental */
  external createShadowRoot : DomRe.shadowRoot = "" [@@bs.send.pipe: t_element]; /* experimental AND deprecated (?!) */
  external getAttribute : string => Js.null string = "" [@@bs.send.pipe: t_element];
  let getAttribute : string => t_element => option string = fun name self => Js.Null.to_opt (getAttribute name self);
  external getAttributeNS : string => string => Js.null string = "" [@@bs.send.pipe: t_element];
  let getAttributeNS : string => string => t_element => option string = fun ns name self => Js.Null.to_opt (getAttributeNS ns name self);
  external getBoundingClientRect : DomRe.domRect = "" [@@bs.send.pipe: t_element];
  external getClientRects : array DomRe.domRect = "" [@@bs.send.pipe: t_element];
  external getElementsByClassName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t_element];
  external getElementsByTagName : string => DomRe.htmlCollection = "" [@@bs.send.pipe: t_element];
  external getElementsByTagNameNS : string => string => DomRe.htmlCollection = "" [@@bs.send.pipe: t_element];
  external hasAttribute : string => Js.boolean = "" [@@bs.send.pipe: t_element];
  let hasAttribute : string => t_element => bool = fun name self => Js.to_bool (hasAttribute name self);
  external hasAttributeNS : string => string => Js.boolean = "" [@@bs.send.pipe: t_element];
  let hasAttributeNS : string => string => t_element => bool = fun ns name self => Js.to_bool (hasAttributeNS ns name self);
  external hasAttributes : Js.boolean = "" [@@bs.send.pipe: t_element];
  let hasAttributes : t_element => bool = fun self => Js.to_bool (hasAttributes self);
  external insertAdjacentElement : string /* insertPosition enum */ => DomRe.element => unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let insertAdjacentElement : insertPosition => DomRe.element => t_element => unit = fun position element self => insertAdjacentElement (encodeInsertPosition position) element self;
  external insertAdjacentHTML : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let insertAdjacentHTML : insertPosition => string => t_element => unit = fun position text self => insertAdjacentHTML (encodeInsertPosition position) text self;
  external insertAdjacentText : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let insertAdjacentText : insertPosition => string => t_element => unit = fun position text self => insertAdjacentText (encodeInsertPosition position) text self;
  external matches : string => Js.boolean = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let matches : string => t_element => bool = fun selector self => Js.to_bool (matches selector self);
  external querySelector : string => Js.null DomRe.element = "" [@@bs.send.pipe: t_element];
  let querySelector : string => t_element => option DomRe.element = fun selector self => Js.Null.to_opt (querySelector selector self);
  external querySelectorAll : string => DomRe.nodeList = "" [@@bs.send.pipe: t_element];
  external releasePointerCapture : DomRe.eventPointerId => unit = "" [@@bs.send.pipe: t_element];
  external remove : unit = "" [@@bs.send.pipe: t_element]; /* experimental */
  external removeAttribute : string => unit = "" [@@bs.send.pipe: t_element];
  external removeAttributeNS : string => string => unit = "" [@@bs.send.pipe: t_element];
  external requestFullscreen : unit = "" [@@bs.send.pipe: t_element]; /* experimental */
  external requestPointerLock : unit = "" [@@bs.send.pipe: t_element]; /* experimental */
  external scrollIntoView : unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  external scrollIntoViewNoAlignToTop : Js.boolean => unit = "scrollIntoView" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let scrollIntoViewNoAlignToTop : t_element => unit = fun self => scrollIntoViewNoAlignToTop (Js.Boolean.to_js_boolean true) self;
  external scrollIntoViewWithOptions : Js.t {..} => unit = "scrollIntoView" [@@bs.send.pipe: t_element]; /* experimental */
  external setAttribute : string => string => unit = "" [@@bs.send.pipe: t_element];
  external setAttributeNS : string => string => string => unit = "" [@@bs.send.pipe: t_element];
  external setPointerCapture : DomRe.eventPointerId => unit = "" [@@bs.send.pipe: t_element];

  /* GlobalEventHandlers interface */
  /* Not sure this should be exposed, since EventTarget seems like a better API */

  external setOnClick : t_element => (DomRe.event => unit) => unit = "onclick" [@@bs.set]; /* should be MouseEvent */
};
/* TODO: This doesnæt work. Why?
module Tree (Type: DomInternalRe.Type) => {
  include NodeRe.Impl { type t = Type };
  include EventTargetRe.Impl { type t = Type };
  include Impl { type t = Type };
};

include Tree { type t = DomRe.element };
*/

include NodeRe.Impl { type t = DomRe.element };
include EventTargetRe.Impl { type t = DomRe.element };
include Impl { type t = DomRe.element };
