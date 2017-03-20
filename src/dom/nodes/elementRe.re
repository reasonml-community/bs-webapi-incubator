module Impl(Type: DomInternalRe.Type) => {
  type t_element = Type.t;

  /* Shouldn't be needed anymore
  external asElement : t_element => DomTypesRe.element = "%identity";
  */

  let asHtmlElement : t_element => Js.null DomTypesRe.htmlElement = [%bs.raw {|
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  |}];
  let asHtmlElement : t_element => option DomTypesRe.htmlElement = fun self => Js.Null.to_opt (asHtmlElement self);

  let ofNode node: option (t_element) =>
    (NodeRe.nodeType node) == Element ? Some (DomInternalRe.cast node) : None;

  external attributes : t_element => DomTypesRe.namedNodeMap = "" [@@bs.get];
  external classList : t_element => DomTypesRe.domTokenList = "" [@@bs.get];
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
  external namespaceURI : t_element => option string = "" [@@bs.get] [@@bs.return null_to_opt];
  external outerHTML : t_element => string = "" [@@bs.get]; /* experimental, but widely supported */
  external setOuterHTML : t_element => string => unit = "outerHTML" [@@bs.set]; /* experimental, but widely supported */
  external prefix : t_element => option string = "" [@@bs.get] [@@bs.return null_to_opt];
  external scrollHeight : t_element => int = "" [@@bs.get]; /* experimental, but widely supported */
  external scrollLeft : t_element => int = "" [@@bs.get]; /* experimental */
  external setScrollLeft : t_element => int => unit = "scrollLeft" [@@bs.set]; /* experimental */
  external scrollTop : t_element => int = "" [@@bs.get]; /* experimental, but widely supported */
  external setScrollTop : t_element => int => unit = "scrollTop" [@@bs.set]; /* experimental, but widely supported */
  external scrollWidth : t_element => int = "" [@@bs.get]; /* experimental */
  external shadowRoot : t_element => DomTypesRe.element = "" [@@bs.get]; /* experimental */
  external slot : t_element => string = "" [@@bs.get]; /* experimental */
  external setSlot : t_element => string => unit = "slot" [@@bs.set]; /* experimental */
  external tagName : t_element => string = "" [@@bs.get];

  external attachShadow : Js.t {..} => DomTypesRe.shadowRoot  = "" [@@bs.send.pipe: t_element]; /* experimental */
  external animate : Js.t {..} => Js.t {..} => DomTypesRe.animation = "" [@@bs.send.pipe: t_element]; /* experimental */
  external closest : string => DomTypesRe.element = "" [@@bs.send.pipe: t_element]; /* experimental */
  external createShadowRoot : DomTypesRe.shadowRoot = "" [@@bs.send.pipe: t_element]; /* experimental AND deprecated (?!) */
  external getAttribute : string => option string = "" [@@bs.send.pipe: t_element] [@@bs.return null_to_opt];
  external getAttributeNS : string => string => option string = "" [@@bs.send.pipe: t_element] [@@bs.return null_to_opt];
  external getBoundingClientRect : DomTypesRe.domRect = "" [@@bs.send.pipe: t_element];
  external getClientRects : array DomTypesRe.domRect = "" [@@bs.send.pipe: t_element];
  external getElementsByClassName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: t_element];
  external getElementsByTagName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: t_element];
  external getElementsByTagNameNS : string => string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: t_element];
  external hasAttribute : string => bool = "" [@@bs.send.pipe: t_element];
  external hasAttributeNS : string => string => bool = "" [@@bs.send.pipe: t_element];
  external hasAttributes : bool = "" [@@bs.send.pipe: t_element];
  external insertAdjacentElement : string /* insertPosition enum */ => DomTypesRe.element_like 'a => unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let insertAdjacentElement : DomTypesRe.insertPosition => DomTypesRe.element_like 'a => t_element => unit = fun position element self => insertAdjacentElement (DomTypesRe.encodeInsertPosition position) element self;
  external insertAdjacentHTML : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let insertAdjacentHTML : DomTypesRe.insertPosition => string => t_element => unit = fun position text self => insertAdjacentHTML (DomTypesRe.encodeInsertPosition position) text self;
  external insertAdjacentText : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let insertAdjacentText : DomTypesRe.insertPosition => string => t_element => unit = fun position text self => insertAdjacentText (DomTypesRe.encodeInsertPosition position) text self;
  external matches : string => bool = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  external releasePointerCapture : DomTypesRe.eventPointerId => unit = "" [@@bs.send.pipe: t_element];
  external removeAttribute : string => unit = "" [@@bs.send.pipe: t_element];
  external removeAttributeNS : string => string => unit = "" [@@bs.send.pipe: t_element];
  external requestFullscreen : unit = "" [@@bs.send.pipe: t_element]; /* experimental */
  external requestPointerLock : unit = "" [@@bs.send.pipe: t_element]; /* experimental */
  external scrollIntoView : unit = "" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  external scrollIntoViewNoAlignToTop : Js.boolean => unit = "scrollIntoView" [@@bs.send.pipe: t_element]; /* experimental, but widely supported */
  let scrollIntoViewNoAlignToTop : t_element => unit = fun self => scrollIntoViewNoAlignToTop Js.true_ self;
  external scrollIntoViewWithOptions : Js.t {..} => unit = "scrollIntoView" [@@bs.send.pipe: t_element]; /* experimental */
  external setAttribute : string => string => unit = "" [@@bs.send.pipe: t_element];
  external setAttributeNS : string => string => string => unit = "" [@@bs.send.pipe: t_element];
  external setPointerCapture : DomTypesRe.eventPointerId => unit = "" [@@bs.send.pipe: t_element];

  /* GlobalEventHandlers interface */
  /* Not sure this should be exposed, since EventTarget seems like a better API */

  external setOnClick : t_element => (DomTypesRe.mouseEvent => unit) => unit = "onclick" [@@bs.set];
};
/* TODO: This doesnæt work. Why?
module Tree (Type: DomInternalRe.Type) => {
  include NodeRe.Impl { type t = Type };
  include EventTargetRe.Impl { type t = Type };
  include Impl { type t = Type };
};

include Tree { type t = DomTypesRe.element };
*/

type t = DomTypesRe.element;
include EventTargetRe.Impl { type nonrec t = t };
include NodeRe.Impl { type nonrec t = t };
include ParentNodeRe.Impl { type nonrec t = t };
include NonDocumentTypeChildNodeRe.Impl { type nonrec t = t };
include ChildNodeRe.Impl { type nonrec t = t };
include SlotableRe.Impl { type nonrec t = t };
include Impl { type nonrec t = t };
