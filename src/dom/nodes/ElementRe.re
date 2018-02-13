/* internal, moved out of Impl to reduce unnecessary code duplication */
let ofNode = (node: Dom.node) : option('a) =>
  NodeRe.nodeType(node) == Element ? Some(Obj.magic(node)) : None;

module Impl = (T: {type t;}) => {
  let asHtmlElement: T.t => Js.null(Dom.htmlElement) = [%bs.raw
    {|
    function (element) {
      // BEWARE: Assumes "contentEditable" uniquely identifies an HTMLELement
      return element.contentEditable !== undefined ?  element : null;
    }
  |}
  ];
  [@deprecated "asHtmlElement uses a weak heuristic, consider using unsafeAsHtmlElement instead"]
  let asHtmlElement: T.t => option(Dom.htmlElement) =
    (self) => Js.Null.toOption(asHtmlElement(self));

  external unsafeAsHtmlElement : T.t => Dom.htmlElement = "%identity";
  let ofNode: Dom.node => option(T.t) = ofNode;

  [@bs.get] external attributes : T.t => Dom.namedNodeMap = "";
  [@bs.get] external classList : T.t => Dom.domTokenList = "";
  [@bs.get] external className : T.t => string = "";
  [@bs.set] external setClassName : (T.t, string) => unit = "className";
  [@bs.get] external clientHeight : T.t => int = ""; /* experimental */
  [@bs.get] external clientLeft : T.t => int = ""; /* experimental */
  [@bs.get] external clientTop : T.t => int = ""; /* experimental */
  [@bs.get] external clientWidth : T.t => int = ""; /* experimental */
  [@bs.get] external id : T.t => string = "";
  [@bs.set] external setId : (T.t, string) => unit = "id";
  [@bs.get] external innerHTML : T.t => string = "";
  [@bs.set] external setInnerHTML : (T.t, string) => unit = "innerHTML";
  [@bs.get] external localName : T.t => string = "";
  [@bs.get] [@bs.return nullable] external namespaceURI : T.t => option(string) = "";
  [@bs.get] external outerHTML : T.t => string = ""; /* experimental, but widely supported */
  [@bs.set] external setOuterHTML : (T.t, string) => unit = "outerHTML"; /* experimental, but widely supported */
  [@bs.get] [@bs.return nullable] external prefix : T.t => option(string) = "";
  [@bs.get] external scrollHeight : T.t => int = ""; /* experimental, but widely supported */
  [@bs.get] external scrollLeft : T.t => int = ""; /* experimental */
  [@bs.set] external setScrollLeft : (T.t, int) => unit = "scrollLeft"; /* experimental */
  [@bs.get] external scrollTop : T.t => int = ""; /* experimental, but widely supported */
  [@bs.set] external setScrollTop : (T.t, int) => unit = "scrollTop"; /* experimental, but widely supported */
  [@bs.get] external scrollWidth : T.t => int = ""; /* experimental */
  [@bs.get] external shadowRoot : T.t => Dom.element = ""; /* experimental */
  [@bs.get] external slot : T.t => string = ""; /* experimental */
  [@bs.set] external setSlot : (T.t, string) => unit = "slot"; /* experimental */
  [@bs.get] external tagName : T.t => string = "";

  [@bs.send.pipe : T.t] external attachShadow : {. "mode": string} => Dom.shadowRoot = ""; /* experimental */
  [@bs.send.pipe : T.t] external attachShadowOpen : ([@bs.as {json|{ "mode": "open" }|json}] _) => Dom.shadowRoot = "attachShadow"; /* experimental */
  [@bs.send.pipe : T.t] external attachShadowClosed : ([@bs.as {json|{ "mode": "closed" }|json}] _) => Dom.shadowRoot = "attachShadow"; /* experimental */
  [@bs.send.pipe : T.t] external animate : (Js.t({..}), Js.t({..})) => Dom.animation = ""; /* experimental */
  [@bs.send.pipe : T.t] external closest : string => Dom.element = ""; /* experimental */
  [@bs.send.pipe : T.t] external createShadowRoot : Dom.shadowRoot = ""; /* experimental AND deprecated (?!) */
  [@bs.send.pipe : T.t] [@bs.return nullable] external getAttribute : string => option(string) = "";
  [@bs.send.pipe : T.t] [@bs.return nullable] external getAttributeNS : (string, string) => option(string) = "";
  [@bs.send.pipe : T.t] external getBoundingClientRect : Dom.domRect = "";
  [@bs.send.pipe : T.t] external getClientRects : array(Dom.domRect) = "";
  [@bs.send.pipe : T.t] external getElementsByClassName : string => Dom.htmlCollection = "";
  [@bs.send.pipe : T.t] external getElementsByTagName : string => Dom.htmlCollection = "";
  [@bs.send.pipe : T.t] external getElementsByTagNameNS : (string, string) => Dom.htmlCollection = "";
  [@bs.send.pipe : T.t] external hasAttribute : string => bool = "";
  [@bs.send.pipe : T.t] external hasAttributeNS : (string, string) => bool = "";
  [@bs.send.pipe : T.t] external hasAttributes : bool = "";
  [@bs.send.pipe : T.t] external insertAdjacentElement : (string /* insertPosition enum */, Dom.element_like('a)) => unit = ""; /* experimental, but widely supported */
  let insertAdjacentElement: (DomTypesRe.insertPosition, Dom.element_like('a), T.t) => unit =
    (position, element, self) =>
      insertAdjacentElement(DomTypesRe.encodeInsertPosition(position), element, self);
  [@bs.send.pipe : T.t] external insertAdjacentHTML : (string /* insertPosition enum */, string) => unit = ""; /* experimental, but widely supported */
  let insertAdjacentHTML: (DomTypesRe.insertPosition, string, T.t) => unit =
    (position, text, self) =>
      insertAdjacentHTML(DomTypesRe.encodeInsertPosition(position), text, self);
  [@bs.send.pipe : T.t] external insertAdjacentText : (string /* insertPosition enum */, string) => unit = ""; /* experimental, but widely supported */
  let insertAdjacentText: (DomTypesRe.insertPosition, string, T.t) => unit =
    (position, text, self) =>
      insertAdjacentText(DomTypesRe.encodeInsertPosition(position), text, self);
  [@bs.send.pipe : T.t] external matches : string => bool = ""; /* experimental, but widely supported */
  [@bs.send.pipe : T.t] external releasePointerCapture : Dom.eventPointerId => unit = "";
  [@bs.send.pipe : T.t] external removeAttribute : string => unit = "";
  [@bs.send.pipe : T.t] external removeAttributeNS : (string, string) => unit = "";
  [@bs.send.pipe : T.t] external requestFullscreen : unit = ""; /* experimental */
  [@bs.send.pipe : T.t] external requestPointerLock : unit = ""; /* experimental */
  [@bs.send.pipe : T.t] external scrollIntoView : unit = ""; /* experimental, but widely supported */
  [@bs.send.pipe : T.t] external scrollIntoViewNoAlignToTop : ([@bs.as {json|true|json}] _) => unit = "scrollIntoView"; /* experimental, but widely supported */
  [@bs.send.pipe : T.t] external scrollIntoViewWithOptions : {. "behavior": string, "block": string} => unit = "scrollIntoView"; /* experimental */
  [@bs.send.pipe : T.t] external setAttribute : (string, string) => unit = "";
  [@bs.send.pipe : T.t] external setAttributeNS : (string, string, string) => unit = "";
  [@bs.send.pipe : T.t] external setPointerCapture : Dom.eventPointerId => unit = "";

  /* GlobalEventHandlers interface */
  /* Not sure this should be exposed, since EventTarget seems like a better API */

  [@bs.set] external setOnClick : (T.t, Dom.mouseEvent => unit) => unit = "onclick";
};

/* TODO: This doesnæt work. Why?
module Tree (T: { type t; }) => {
  include NodeRe.Impl { type t = Type };
  include EventTargetRe.Impl { type t = Type };
  include Impl { type t = Type };
};

include Tree { type t = Dom.element };
*/

type t = Dom.element;

include NodeRe.Impl({ type nonrec t = t; });
include EventTargetRe.Impl({ type nonrec t = t; });
include ParentNodeRe.Impl({ type nonrec t = t; });
include NonDocumentTypeChildNodeRe.Impl({ type nonrec t = t; });
include ChildNodeRe.Impl({ type nonrec t = t; });
include SlotableRe.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });