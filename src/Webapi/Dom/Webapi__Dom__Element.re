/* internal, moved out of Impl to reduce unnecessary code duplication */
let ofNode = (node: Dom.node) : option('a) =>
  Webapi__Dom__Node.nodeType(node) == Webapi__Dom__Types.Element ?
    Some(Obj.magic(node)) :
    None;

module Impl = (T: {type t;}) => {
  let asHtmlElement: T.t => option(Dom.htmlElement) = [%raw {|
    function(element) {
      var ownerDocument = element.ownerDocument;

      if (ownerDocument != null) {
        var defaultView = ownerDocument.defaultView;

        if (defaultView != null) {
          var HTMLElement = defaultView.HTMLElement;

          if (HTMLElement != null && element instanceof HTMLElement) {
            return element;
          }
        }
      }
    }
  |}];

  /** Unsafe cast, use [asHtmlElement] instead */
  external unsafeAsHtmlElement : T.t => Dom.htmlElement = "%identity";

  let ofNode: Dom.node => option(T.t) = ofNode;

  [@bs.get] external attributes : T.t => Dom.namedNodeMap = "attributes";
  [@bs.get] external classList : T.t => Dom.domTokenList = "classList";
  [@bs.get] external className : T.t => string = "className";
  [@bs.set] external setClassName : (T.t, string) => unit = "className";
  [@bs.get] external clientHeight : T.t => int = "clientHeight"; /* experimental */
  [@bs.get] external clientLeft : T.t => int = "clientLeft"; /* experimental */
  [@bs.get] external clientTop : T.t => int = "clientTop"; /* experimental */
  [@bs.get] external clientWidth : T.t => int = "clientWidth"; /* experimental */
  [@bs.get] external id : T.t => string = "id";
  [@bs.set] external setId : (T.t, string) => unit = "id";
  [@bs.get] external innerHTML : T.t => string = "innerHTML";
  [@bs.set] external setInnerHTML : (T.t, string) => unit = "innerHTML";
  [@bs.get] external localName : T.t => string = "localName";
  [@bs.get] [@bs.return nullable] external namespaceURI : T.t => option(string) = "namespaceURI";
  [@bs.get] external outerHTML : T.t => string = "outerHTML"; /* experimental, but widely supported */
  [@bs.set] external setOuterHTML : (T.t, string) => unit = "outerHTML"; /* experimental, but widely supported */
  [@bs.get] [@bs.return nullable] external prefix : T.t => option(string) = "prefix";
  [@bs.get] external scrollHeight : T.t => int = "scrollHeight"; /* experimental, but widely supported */
  [@bs.get] external scrollLeft : T.t => float = "scrollLeft"; /* experimental */
  [@bs.set] external setScrollLeft : (T.t, float) => unit = "scrollLeft"; /* experimental */
  [@bs.get] external scrollTop : T.t => float = "scrollTop"; /* experimental, but widely supported */
  [@bs.set] external setScrollTop : (T.t, float) => unit = "scrollTop"; /* experimental, but widely supported */
  [@bs.get] external scrollWidth : T.t => int = "scrollWidth"; /* experimental */
  [@bs.get] external shadowRoot : T.t => Dom.element = "shadowRoot"; /* experimental */
  [@bs.get] external slot : T.t => string = "slot"; /* experimental */
  [@bs.set] external setSlot : (T.t, string) => unit = "slot"; /* experimental */
  [@bs.get] external tagName : T.t => string = "tagName";

  [@bs.send.pipe : T.t] external attachShadow : {. "mode": string} => Dom.shadowRoot = "attachShadow"; /* experimental */
  [@bs.send.pipe : T.t] external attachShadowOpen : ([@bs.as {json|{ "mode": "open" }|json}] _) => Dom.shadowRoot = "attachShadow"; /* experimental */
  [@bs.send.pipe : T.t] external attachShadowClosed : ([@bs.as {json|{ "mode": "closed" }|json}] _) => Dom.shadowRoot = "attachShadow"; /* experimental */
  [@bs.send.pipe : T.t] external animate : (Js.t({..}), Js.t({..})) => Dom.animation = "animate"; /* experimental */
  [@bs.send.pipe : T.t] [@bs.return nullable] external closest : string => option(Dom.element) = "closest"; /* experimental */
  [@bs.send.pipe : T.t] external createShadowRoot : Dom.shadowRoot = "createShadowRoot"; /* experimental AND deprecated (?!) */
  [@bs.send.pipe : T.t] [@bs.return nullable] external getAttribute : string => option(string) = "getAttribute";
  [@bs.send.pipe : T.t] [@bs.return nullable] external getAttributeNS : (string, string) => option(string) = "getAttributeNS";
  [@bs.send.pipe : T.t] external getBoundingClientRect : Dom.domRect = "getBoundingClientRect";
  [@bs.send.pipe : T.t] external getClientRects : array(Dom.domRect) = "getClientRects";
  [@bs.send.pipe : T.t] external getElementsByClassName : string => Dom.htmlCollection = "getElementsByClassName";
  [@bs.send.pipe : T.t] external getElementsByTagName : string => Dom.htmlCollection = "getElementsByTagName";
  [@bs.send.pipe : T.t] external getElementsByTagNameNS : (string, string) => Dom.htmlCollection = "getElementsByTagNameNS";
  [@bs.send.pipe : T.t] external hasAttribute : string => bool = "hasAttribute";
  [@bs.send.pipe : T.t] external hasAttributeNS : (string, string) => bool = "hasAttributeNS";
  [@bs.send.pipe : T.t] external hasAttributes : bool = "hasAttributes";
  [@bs.send.pipe : T.t] external insertAdjacentElement : (string /* insertPosition enum */, Dom.element_like('a)) => unit = "insertAdjacentElement"; /* experimental, but widely supported */
  let insertAdjacentElement: (Webapi__Dom__Types.insertPosition, Dom.element_like('a), T.t) => unit =
    (position, element, self) =>
      insertAdjacentElement(Webapi__Dom__Types.encodeInsertPosition(position), element, self);
  [@bs.send.pipe : T.t] external insertAdjacentHTML : (string /* insertPosition enum */, string) => unit = "insertAdjacentHTML"; /* experimental, but widely supported */
  let insertAdjacentHTML: (Webapi__Dom__Types.insertPosition, string, T.t) => unit =
    (position, text, self) =>
      insertAdjacentHTML(Webapi__Dom__Types.encodeInsertPosition(position), text, self);
  [@bs.send.pipe : T.t] external insertAdjacentText : (string /* insertPosition enum */, string) => unit = "insertAdjacentText"; /* experimental, but widely supported */
  let insertAdjacentText: (Webapi__Dom__Types.insertPosition, string, T.t) => unit =
    (position, text, self) =>
      insertAdjacentText(Webapi__Dom__Types.encodeInsertPosition(position), text, self);
  [@bs.send.pipe : T.t] external matches : string => bool = "matches"; /* experimental, but widely supported */
  [@bs.send.pipe : T.t] external releasePointerCapture : Dom.eventPointerId => unit = "releasePointerCapture";
  [@bs.send.pipe : T.t] external removeAttribute : string => unit = "removeAttribute";
  [@bs.send.pipe : T.t] external removeAttributeNS : (string, string) => unit = "removeAttributeNS";
  [@bs.send.pipe : T.t] external requestFullscreen : unit = "requestFullscreen"; /* experimental */
  [@bs.send.pipe : T.t] external requestPointerLock : unit = "requestPointerLock"; /* experimental */
  [@bs.send.pipe : T.t] external scrollIntoView : unit = "scrollIntoView"; /* experimental, but widely supported */
  [@bs.send.pipe : T.t] external scrollIntoViewNoAlignToTop : ([@bs.as {json|true|json}] _) => unit = "scrollIntoView"; /* experimental, but widely supported */
  [@bs.send.pipe : T.t] external scrollIntoViewWithOptions : {. "behavior": string, "block": string} => unit = "scrollIntoView"; /* experimental */
  [@bs.send.pipe : T.t] external scrollBy : (float, float) => unit = "scrollBy";
  [@bs.send.pipe : T.t] external scrollByWithOptions : {. "top": float, "left": float, "behavior": string} => unit = "scrollBy";
  [@bs.send.pipe : T.t] external scrollTo : (float, float) => unit = "scrollTo";
  [@bs.send.pipe : T.t] external scrollToWithOptions : {. "top": float, "left": float, "behavior": string} => unit = "scrollTo";
  [@bs.send.pipe : T.t] external setAttribute : (string, string) => unit = "setAttribute";
  [@bs.send.pipe : T.t] external setAttributeNS : (string, string, string) => unit = "setAttributeNS";
  [@bs.send.pipe : T.t] external setPointerCapture : Dom.eventPointerId => unit = "setPointerCapture";

  /* GlobalEventHandlers interface */
  /* Not sure this should be exposed, since EventTarget seems like a better API */

  [@bs.set] external setOnClick : (T.t, Dom.mouseEvent => unit) => unit = "onclick";
};

/* TODO: This doesn't work. Why?
module Tree (T: { type t; }) => {
  include NodeRe.Impl { type t = Type };
  include EventTargetRe.Impl { type t = Type };
  include Impl { type t = Type };
};

include Tree { type t = Dom.element };
*/

type t = Dom.element;

include Webapi__Dom__Node.Impl({ type nonrec t = t; });
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t; });
include Webapi__Dom__GlobalEventHandlers.Impl({ type nonrec t = t; });
include Webapi__Dom__ParentNode.Impl({ type nonrec t = t; });
include Webapi__Dom__NonDocumentTypeChildNode.Impl({ type nonrec t = t; });
include Webapi__Dom__ChildNode.Impl({ type nonrec t = t; });
include Webapi__Dom__Slotable.Impl({ type nonrec t = t; });
include Impl({ type nonrec t = t; });
