/* internal, moved out of Impl to reduce unnecessary code duplication */
let ofNode node: option 'a =>
  (NodeRe.nodeType node) == Element ? Some (DomInternalRe.cast node) : None;

module Impl(T: { type t; }) => {
  let asHtmlElement : T.t => Js.null DomTypesRe.htmlElement = [%bs.raw {|
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  |}];
  let asHtmlElement : T.t => option DomTypesRe.htmlElement = fun self => Js.Null.to_opt (asHtmlElement self);

  let ofNode : DomTypesRe.node => option T.t = ofNode;

  external attributes : T.t => DomTypesRe.namedNodeMap = "" [@@bs.get];
  external classList : T.t => DomTypesRe.domTokenList = "" [@@bs.get];
  external className : T.t => string = "" [@@bs.get];
  external setClassName : T.t => string => unit = "className" [@@bs.set];
  external clientHeight : T.t => int = "" [@@bs.get]; /* experimental */
  external clientLeft : T.t => int = "" [@@bs.get]; /* experimental */
  external clientTop : T.t => int = "" [@@bs.get]; /* experimental */
  external clientWidth : T.t => int = "" [@@bs.get]; /* experimental */
  external id : T.t => string = "" [@@bs.get];
  external setId : T.t => string => unit = "id" [@@bs.set];
  external innerHTML : T.t => string = "" [@@bs.get];
  external setInnerHTML : T.t => string => unit = "innerHTML" [@@bs.set];
  external localName : T.t => string = "" [@@bs.get];
  external namespaceURI : T.t => option string = "" [@@bs.get] [@@bs.return null_to_opt];
  external outerHTML : T.t => string = "" [@@bs.get]; /* experimental, but widely supported */
  external setOuterHTML : T.t => string => unit = "outerHTML" [@@bs.set]; /* experimental, but widely supported */
  external prefix : T.t => option string = "" [@@bs.get] [@@bs.return null_to_opt];
  external scrollHeight : T.t => int = "" [@@bs.get]; /* experimental, but widely supported */
  external scrollLeft : T.t => int = "" [@@bs.get]; /* experimental */
  external setScrollLeft : T.t => int => unit = "scrollLeft" [@@bs.set]; /* experimental */
  external scrollTop : T.t => int = "" [@@bs.get]; /* experimental, but widely supported */
  external setScrollTop : T.t => int => unit = "scrollTop" [@@bs.set]; /* experimental, but widely supported */
  external scrollWidth : T.t => int = "" [@@bs.get]; /* experimental */
  external shadowRoot : T.t => DomTypesRe.element = "" [@@bs.get]; /* experimental */
  external slot : T.t => string = "" [@@bs.get]; /* experimental */
  external setSlot : T.t => string => unit = "slot" [@@bs.set]; /* experimental */
  external tagName : T.t => string = "" [@@bs.get];

  external attachShadow : Js.t {..} => DomTypesRe.shadowRoot  = "" [@@bs.send.pipe: T.t]; /* experimental */
  external animate : Js.t {..} => Js.t {..} => DomTypesRe.animation = "" [@@bs.send.pipe: T.t]; /* experimental */
  external closest : string => DomTypesRe.element = "" [@@bs.send.pipe: T.t]; /* experimental */
  external createShadowRoot : DomTypesRe.shadowRoot = "" [@@bs.send.pipe: T.t]; /* experimental AND deprecated (?!) */
  external getAttribute : string => option string = "" [@@bs.send.pipe: T.t] [@@bs.return null_to_opt];
  external getAttributeNS : string => string => option string = "" [@@bs.send.pipe: T.t] [@@bs.return null_to_opt];
  external getBoundingClientRect : DomTypesRe.domRect = "" [@@bs.send.pipe: T.t];
  external getClientRects : array DomTypesRe.domRect = "" [@@bs.send.pipe: T.t];
  external getElementsByClassName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: T.t];
  external getElementsByTagName : string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: T.t];
  external getElementsByTagNameNS : string => string => DomTypesRe.htmlCollection = "" [@@bs.send.pipe: T.t];
  external hasAttribute : string => bool = "" [@@bs.send.pipe: T.t];
  external hasAttributeNS : string => string => bool = "" [@@bs.send.pipe: T.t];
  external hasAttributes : bool = "" [@@bs.send.pipe: T.t];
  external insertAdjacentElement : string /* insertPosition enum */ => DomTypesRe.element_like 'a => unit = "" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  let insertAdjacentElement : DomTypesRe.insertPosition => DomTypesRe.element_like 'a => T.t => unit = fun position element self => insertAdjacentElement (DomTypesRe.encodeInsertPosition position) element self;
  external insertAdjacentHTML : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  let insertAdjacentHTML : DomTypesRe.insertPosition => string => T.t => unit = fun position text self => insertAdjacentHTML (DomTypesRe.encodeInsertPosition position) text self;
  external insertAdjacentText : string /* insertPosition enum */ => string => unit = "" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  let insertAdjacentText : DomTypesRe.insertPosition => string => T.t => unit = fun position text self => insertAdjacentText (DomTypesRe.encodeInsertPosition position) text self;
  external matches : string => bool = "" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  external releasePointerCapture : DomTypesRe.eventPointerId => unit = "" [@@bs.send.pipe: T.t];
  external removeAttribute : string => unit = "" [@@bs.send.pipe: T.t];
  external removeAttributeNS : string => string => unit = "" [@@bs.send.pipe: T.t];
  external requestFullscreen : unit = "" [@@bs.send.pipe: T.t]; /* experimental */
  external requestPointerLock : unit = "" [@@bs.send.pipe: T.t]; /* experimental */
  external scrollIntoView : unit = "" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  external scrollIntoViewNoAlignToTop : Js.boolean => unit = "scrollIntoView" [@@bs.send.pipe: T.t]; /* experimental, but widely supported */
  /* let scrollIntoViewNoAlignToTop : T.t => unit = fun self => scrollIntoViewNoAlignToTop Js.true_ self; */ /* temporarily removed to reduce codegen size */
  external scrollIntoViewWithOptions : Js.t {..} => unit = "scrollIntoView" [@@bs.send.pipe: T.t]; /* experimental */
  external setAttribute : string => string => unit = "" [@@bs.send.pipe: T.t];
  external setAttributeNS : string => string => string => unit = "" [@@bs.send.pipe: T.t];
  external setPointerCapture : DomTypesRe.eventPointerId => unit = "" [@@bs.send.pipe: T.t];

  /* GlobalEventHandlers interface */
  /* Not sure this should be exposed, since EventTarget seems like a better API */

  external setOnClick : T.t => (DomTypesRe.mouseEvent => unit) => unit = "onclick" [@@bs.set];
};
/* TODO: This doesnæt work. Why?
module Tree (T: { type t; }) => {
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
