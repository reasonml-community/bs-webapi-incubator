type intervalId;
external setInterval : (unit => unit) => int => intervalId = "setInterval" [@@bs.val];
external clearInterval : intervalId => unit = "clearInterval" [@@bs.val];

type timeoutId;
external setTimeout : (unit => unit) => int => timeoutId = "setTimeout" [@@bs.val];
external clearTimeout : timeoutId => unit = "clearTimeout" [@@bs.val];

external requestAnimationFrame : (unit => unit) => unit = "requestAnimationFrame" [@@bs.val];

type document;
type element;

module Animation = {
  type t;
};

module Attr = {
  type t;
};

module CSSStyleDeclaration = {
  type t;
};

module CSSStyleSheet = {
  type t;
};

module DocumentFragment = {
  type t;
};

module DocumentImplementation = {
  type t;
};

module DocumentType = {
  type t;
};

module DOMTokenList = {
  type t;
};

module DOMRect = {
  type t;
};

module DOMSettableTokenList = {
  type t;
};

module DOMStringMap = {
  type t;
};

module Event = {
  type t;
  type pointerId;

  /* constructors */
  external make : string => t = "Event" [@@bs.new];
  external makeWithOptions : string => Js.t {..} = "Event" [@@bs.new];

  /* Event interface */
  external bubbles : t => Js.boolean = "bubbles" [@@bs.get];
  external cancelable : t => Js.boolean = "cancelable" [@@bs.get];
  external composed : t => Js.boolean = "composed" [@@bs.get];
  external currentTarget : t => element = "currentTarget" [@@bs.get];
  external defaultPrevented : t => Js.boolean = "defaultPrevented" [@@bs.get];
  external eventPhase : t => int /* enum */ = "eventPhase" [@@bs.get];
  external target : t => element = "target" [@@bs.get];
  external timeStamp : t => float = "timeStamp" [@@bs.get];
  external type_ : t => string = "type" [@@bs.get];
  external isTrusted : t => Js.boolean = "isTrusted" [@@bs.get];

  external preventDefault : t => unit = "preventDefault" [@@bs.send];
  external stopImmediatePropagation : t => unit = "stopImmediatePropagation" [@@bs.send];
  external stopPropagation : t => unit = "stopPropagation" [@@bs.send];

  /* KeyboardEvent interface */
  external altKey : t => Js.boolean = "altKey" [@@bs.get];
  external code : t => string = "code" [@@bs.get];
  external ctrlKey : t => Js.boolean = "ctrlKey" [@@bs.get];
  external isComposing : t => Js.boolean = "isComposing" [@@bs.get];
  external key : t => string = "key" [@@bs.get];
  external locale : t => string = "locale" [@@bs.get];
  external location : t => int = "location" [@@bs.get];
  external metaKey : t => Js.boolean = "metaKey" [@@bs.get];
  external repeat : t => Js.boolean = "repeat" [@@bs.get];
  external shiftKey : t => Js.boolean = "shiftKey" [@@bs.get];

  external getModifierState : t => string /* enum */ => Js.boolean = "getModifierState" [@@bs.send];

  /* MouseEvent interface */
  /* altKey */
  external button : t => int = "button" [@@bs.get];
  external buttons : t => int /* bitmask */ = "buttons" [@@bs.get];
  external clientX : t => int = "clientX" [@@bs.get];
  external clientY : t => int = "clientY" [@@bs.get];
  /* ctrlKey */
  /* metaKey */
  external movementX : t => int = "movementX" [@@bs.get];
  external movementY : t => int = "movementY" [@@bs.get];
  external offsetX : t => int = "offsetX" [@@bs.get]; /* experimental, but widely supported */
  external offsetY : t => int = "offsetY" [@@bs.get]; /* experimental, but widely supported */
  external pageX : t => int = "pageX" [@@bs.get]; /* experimental, but widely supported */
  external pageY : t => int = "pageY" [@@bs.get]; /* experimental, but widely supported */
  external region : t => Js.null string = "region" [@@bs.get];
  external relatedTarget : t => Js.null element = "relatedTarget" [@@bs.get]; /* return Js.null EventTarget */
  external screenX : t => int = "screenX" [@@bs.get];
  external screenY : t => int = "screenY" [@@bs.get];
  /* shiftKey */
  external x : t => int = "x" [@@bs.get]; /* experimental */
  external y : t => int = "y" [@@bs.get]; /* experimental */
  /* getModifierState */

  /* PointerEvent interface */
  external pointerId : t => pointerId = "pointerId" [@@bs.get];
  external width : t => int = "width" [@@bs.get];
  external height : t => int = "height" [@@bs.get];
  external pressure : t => float = "pressure" [@@bs.get];
  external tiltX : t => int = "tiltX" [@@bs.get];
  external tiltY : t => int = "tiltY" [@@bs.get];
  external pointerType : t => string /* enum */ = "pointerType" [@@bs.get];
  external isPrimary : t => Js.boolean = "isPrimary" [@@bs.get];
};

module NodeFilter = {
  type t = {
    acceptNode: element => int /* one of the enum values below */
  };

  let make f => {
    acceptNode: f
  };

  /* + a bunch of enum values */
};

module NodeIterator = {
  type t;
};

module Range = {
  type t;

  external make : unit => t = "Range" [@@bs.new]; /* experimental */

  external collapsed : t => Js.boolean = "collapsed" [@@bs.get];
  external commonAncestorContainer : t => element = "commonAncestorContainer" [@@bs.get]; /* returns Node */
  external endContainer : t => element = "endContainer" [@@bs.get]; /* returns Node */
  external endOffset : t => int = "endOffset" [@@bs.get];
  external startContainer : t => element = "startContainer" [@@bs.get]; /* returns Node */
  external startOffset : t => int = "startOffset" [@@bs.get];

  external setStart : t => element => int => unit = "setStart" [@@bs.send]; /* should accept Node */
  external setEnd : t => element => int => unit = "setEnd" [@@bs.send]; /* should accept Node */
  external setStartBefore : t => element => unit = "setStartBefore" [@@bs.send]; /* should accept Node */
  external setStartAfter : t => element => unit = "setStartAfter" [@@bs.send]; /* should accept Node */
  external setEndBefore : t => element => unit = "setEndBefore" [@@bs.send]; /* should accept Node */
  external setEndAfter : t => element => unit = "setEndAfter" [@@bs.send]; /* should accept Node */
  external selectNode : t => element => unit = "selectNode" [@@bs.send]; /* should accept Node */
  external selectNodeContents : t => element => unit = "selectNodeContents" [@@bs.send]; /* should accept Node */
  external collapse : t => Js.boolean => unit = "collapse" [@@bs.send];
  external cloneContents : t => DocumentFragment.t = "cloneContents" [@@bs.send];
  external deleteContents : t => unit = "deleteContents" [@@bs.send];
  external extractContents : t => DocumentFragment.t = "extractContents" [@@bs.send];
  external insertNode : t => element => unit = "insertNode" [@@bs.send]; /* should accept node */
  external surroundContents : t => element => unit = "surroundContents" [@@bs.send]; /* should accept Node */
  external compareBoundaryPoints : t => int /* enum */ => t => int /* enum */ = "compareBoundaryPoints" [@@bs.send];
  external cloneRange : t => t = "cloneRange" [@@bs.send];
  external detach : t => unit = "detach" [@@bs.send];
  external toString : t => string = "toString" [@@bs.send];
  external comparePoint : t => element => int => int /* enum */ = "comparePoint" [@@bs.send]; /* should accept Node */
  external createContextualFragment : t => string => DocumentFragment.t = "createContextualFragment" [@@bs.send]; /* experimental, but widely supported */
  external getBoundingClientRect : t => DOMRect.t = "getBoundingClientRect" [@@bs.send]; /* experimental, but widely supported */
  external getClientRects : t => array DOMRect.t = "getClientRects" [@@bs.send]; /* experimental, but widely supported */
  external intersectsNode : t => element => Js.boolean = "intersectsNode" [@@bs.send]; /* experimental, should accept Node */
  external isPointInRange : t => element => int => Js.boolean = "isPointInRange" [@@bs.send]; /* experimental, should accept Node */
};

module Selection = {
  type t;
};

module ShadowRoot = {
  type t;
};

module TreeWalker = {
  type t;
};

module Element = {
  type t = element;

  /*
    NOTE: Interface inheritance could be modeled by include, but how then would you check "nodeType"
    and cast it to the correct type?
  */

  /* Node interface */
  external childNodes : t => array t  = "childNodes" [@@bs.get]; /* returns a NodeList, not an array */
  external firstChild : t => Js.null t = "firstChild" [@@bs.get];
  external lastChild : t => Js.null t = "lastChild" [@@bs.get];
  external nextSibling : t => Js.null t = "nextSibling" [@@bs.get];
  external nodeName : t => string = "nodeName" [@@bs.get];
  external nodeType : t => int = "nodeType" [@@bs.get]; /* returns an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeType */
  external nodeValue : t => Js.null string = "nodeValue" [@@bs.get];
  external setNodeValue : t => Js.null string => Js.null string = "nodeValue" [@@bs.set];
  external ownerDocument : t => document = "ownerDocument" [@@bs.get];
  external parentNode : t => Js.null t = "parentNode" [@@bs.get];
  external parentElement : t => Js.null t = "parentElement" [@@bs.get];
  external previousSibling : t => Js.null t = "previousSibling" [@@bs.get];
  external rootNode : t => t = "rootNode" [@@bs.get];
  external textContent : t => string = "textContent" [@@bs.get];
  external setTextContent : t => string => string = "textContent" [@@bs.set];

  external appendChild : t => t => unit = "appendChild" [@@bs.send];
  external cloneNode : t => t = "cloneNode" [@@bs.send];
  external cloneNodeDeep : t => Js.boolean => t = "cloneNode" [@@bs.send]; /* The only sensible argument value is `Js.Boolean.to_js_boolean true` */
  external compareDocumentPosition : t => t => int = "compareDocumentPosition" [@@bs.send]; /* returns a bitmask which could also be represeneted as an enum, see https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition */
  external contains : t => t => Js.boolean = "contains" [@@bs.send];
  external getRootNode : t => t = "getRootNode" [@@bs.send];
  external getRootNodeComposed : t => Js.boolean => t = "getRootNode" [@@bs.send]; /* The only sensible argument value is `Js.Boolean.to_js_boolean true` */
  external hasChildNodes : t => Js.boolean = "hasChildNodes" [@@bs.send];
  external insertBefore : t => t => Js.null t => t = "insertBefore" [@@bs.send];
  external isDefaultNamespace : t => string => Js.boolean = "isDefaultNamespace" [@@bs.send];
  external isEqualNode : t => t => Js.boolean = "isEqualNode" [@@bs.send];
  external isSameNode : t => t => Js.boolean = "isSameNode" [@@bs.send];
  external lookupPrefix : t => string = "lookupPrefix" [@@bs.send];
  external lookupNamespaceURI : t => Js.null string => Js.null string = "lookupNamespaceURI" [@@bs.send];
  external normalize : t => unit = "normalize" [@@bs.send];
  external removeChild : t => t => t = "removeChild" [@@bs.send];

  /* Element interface */
  external assignedSlot : t => t = "assignedSlot" [@@bs.get]; /* experimental, returns HTMLSlotElement */
  external attributes : t => array Attr.t = "attributes" [@@bs.get]; /* return NameNodeMap, not array */
  external classList : t => DOMTokenList.t = "classList" [@@bs.get];
  external className : t => string = "className" [@@bs.get];
  external setClassName : t => string => string = "className" [@@bs.set];
  external clientHeight : t => int = "clientHeight" [@@bs.get]; /* experimental */
  external clientLeft : t => int = "clientLeft" [@@bs.get]; /* experimental */
  external clientTop : t => int = "clientTop" [@@bs.get]; /* experimental */
  external clientWidth : t => int = "clientWidth" [@@bs.get]; /* experimental */
  external id : t => string = "id" [@@bs.get];
  external setId : t => string => string = "id" [@@bs.set];
  external innerHTML : t => string = "innerHTML" [@@bs.get];
  external setInnerHTML : t => string => string = "innerHTML" [@@bs.set];
  external localName : t => string = "localName" [@@bs.get];
  external namespaceURI : t => Js.null string = "namespaceURI" [@@bs.get];
  external nextElementSibling : t => Js.null t = "nextElementSibling" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
  external outerHTML : t => string = "outerHTML" [@@bs.get]; /* experimental, but widely supported */
  external setOuterHTML : t => string => string = "outerHTML" [@@bs.set]; /* experimental, but widely supported */
  external prefix : t => Js.null string = "prefix" [@@bs.get];
  external previousElementSibling : t => Js.null t = "previousElementSibling" [@@bs.get]; /* strictly part of the NonDocumentTypeChildNode interface */
  external scrollHeight : t => int = "scrollHeight" [@@bs.get]; /* experimental, but widely supported */
  external scrollLeft : t => int = "scrollLeft" [@@bs.get]; /* experimental */
  external setScrollLeft : t => int => int = "scrollLeft" [@@bs.set]; /* experimental */
  external scrollTop : t => int = "scrollTop" [@@bs.get]; /* experimental, but widely supported */
  external setScrollTop : t => int => int = "scrollTop" [@@bs.set]; /* experimental, but widely supported */
  external scrollWidth : t => int = "scrollWidth" [@@bs.get]; /* experimental */
  external shadowRoot : t => t = "shadowRoot" [@@bs.get]; /* experimental */
  external slot : t => string = "slot" [@@bs.get]; /* experimental */
  external setSlot : t => string => string = "slot" [@@bs.set]; /* experimental */
  external tagName : t => string = "tagName" [@@bs.get];

  external attachShadow : t => Js.t {..} => ShadowRoot.t  = "attachShadow" [@@bs.send]; /* experimental */
  external animate : t => Js.t {..} => Js.t {..} => Animation.t = "animate" [@@bs.send]; /* experimental */
  external closest : t => string => t = "closest" [@@bs.send]; /* experimental */
  external createShadowRoot : t => ShadowRoot.t = "createShadowRoot" [@@bs.send]; /* experimental AND deprecated (?!) */
  external getAttribute : t => string => Js.null string = "getAttribute" [@@bs.send];
  external getAttributeNS : t => string => string => Js.null string = "getAttributeNS" [@@bs.send];
  external getBoundingClientRect : t => DOMRect.t = "getBoundingClientRect" [@@bs.send];
  external getClientRects : t => array DOMRect.t = "getClientRects" [@@bs.send];
  external getElementsByClassName : t => string => array t = "getElementsByClassName" [@@bs.send]; /* return HTMLCollection, not array */
  external getElementsByTagName : t => string => array t = "getElementsByTagName" [@@bs.send]; /* return HTMLCollection, not array */
  external getElementsByTagNameNS : t => string => string => array t = "getElementsByTagNameNS" [@@bs.send]; /* return HTMLCollection, not array */
  external hasAttribute : t => string => Js.boolean = "hasAttribute" [@@bs.send];
  external hasAttributeNS : t => string => string => Js.boolean = "hasAttributeNS" [@@bs.send];
  external hasAttributes : t => Js.boolean = "hasAttributes" [@@bs.send];
  external insertAdjacentElement : t => string /* enum */ => t => Js.null t = "insertAdjacentElement" [@@bs.send]; /* experimental */
  external insertAdjacentText : t => string /* enum */ => string => Js.null string = "insertAdjacentText" [@@bs.send]; /* experimental */
  external matches : t => string => Js.boolean = "matches" [@@bs.send]; /* experimental, but widely supported */
  external querySelector : t => string => Js.null t = "querySelector" [@@bs.send];
  external querySelectorAll : t => string => array t = "querySelectorAll" [@@bs.send]; /* returns NodeList, not array */
  external releasePointerCapture : t => Event.pointerId => unit = "releasePointerCapture" [@@bs.send];
  external remove : t => unit = "remove" [@@bs.send]; /* experimental */
  external removeAttribute : t => string => unit = "removeAttribute" [@@bs.send];
  external removeAttributeNS : t => string => string => unit = "removeAttributeNS" [@@bs.send];
  external requestFullscreen : t => unit = "requestFullscreen" [@@bs.send]; /* experimental */
  external requestPointerLock : t => unit = "requestPointerLock" [@@bs.send]; /* experimental */
  external scrollIntoView : t => unit = "scrollIntoView" [@@bs.send]; /* experimental, but widely supported */
  external scrollIntoViewAlignToTop : t => Js.boolean => unit = "scrollIntoView" [@@bs.send]; /* experimental, but widely supported */
  external scrollIntoViewWithOptions : t => Js.t {..} => unit = "scrollIntoView" [@@bs.send]; /* experimental */
  external setAttribute : t => string => string => unit = "setAttribute" [@@bs.send];
  external setAttributeNS : t => string => string => string => unit = "setAttributeNS" [@@bs.send];
  external setPointerCapture : t => Event.pointerId => unit = "setPointerCapture" [@@bs.send];

  /* EventTarget interface */
  external addEventListener : t => string /* enum */ => (Event.t => unit) => unit = "addEventListener" [@@bs.send];
  external addEventListenerWithOptions : t => string /* enum */ => (Event.t => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send]; /* not widely supported */
  external addEventListenerUseCapture : t => string /* enum */ => (Event.t => unit) => Js.boolean => unit = "addEventListener" [@@bs.send];
  external removeEventListener : t => string /* enum */ => (Event.t => unit) => unit = "removeEventListener" [@@bs.send];
  external removeEventListenerWithOptions : t => string /* enum */ => (Event.t => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send]; /* not widely supported */
  external removeEventListenerUseCapture : t => string /* enum */ => (Event.t => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send];
  external dispatchEvent : t => Event.t => Js.boolean = "dispatchEvent" [@@bs.send];

  /* HTMLElement interface */
  external accessKey : t => string = "accessKey" [@@bs.get];
  external setAccessKey : t => string => string = "accessKey" [@@bs.set];
  external accessKeyLabel : t => string = "accessKeyLabel" [@@bs.get];
  external contentEditable : t => string /* enum */ = "contentEditable" [@@bs.get];
  external setContentEditable : t => string /* enum */ => string /* enum */ = "contentEditable" [@@bs.set];
  external isContentEditable : t => Js.boolean = "isContentEditable" [@@bs.get];
  external contextMenu : t => t = "contextMenu" [@@bs.get]; /* returns HTMLMenuElement */
  external setContextMenu : t => t => t = "contextMenu" [@@bs.set]; /* accepts and returns HTMLMenuElement */
  external dataset : t => DOMStringMap.t = "dataset" [@@bs.get];
  external dir : t => string /* enum */ = "dir" [@@bs.get];
  external setDir : t => string /* enum */ => string /* enum */ = "dir" [@@bs.set];
  external draggable : t => Js.boolean = "draggable" [@@bs.get];
  external setDraggable : t => Js.boolean => Js.boolean = "draggable" [@@bs.set];
  external dropzone : t => DOMSettableTokenList.t = "dropzone" [@@bs.get];
  external hidden : t => Js.boolean = "hidden" [@@bs.get];
  external setHidden : t => Js.boolean => Js.boolean = "hidden" [@@bs.set];
  external itemScope : t => Js.boolean = "itemScope" [@@bs.get]; /* experimental */
  external setItemScope : t => Js.boolean => Js.boolean = "itemScope" [@@bs.set]; /* experimental */
  external itemType : t => DOMSettableTokenList.t = "itemType" [@@bs.get]; /* experimental */
  external itemId : t => string = "itemId" [@@bs.get]; /* experimental */
  external setItemId : t => string => string = "itemId" [@@bs.set]; /* experimental */
  external itemRef : t => DOMSettableTokenList.t = "itemRed" [@@bs.get]; /* experimental */
  external itemProp : t => DOMSettableTokenList.t = "itemProp" [@@bs.get]; /* experimental */
  external itemValue : t => Js.t {..} = "itemValue" [@@bs.get]; /* experimental */
  external setItemValue : t => Js.t {..} => Js.t {..} = "itemValue" [@@bs.set]; /* experimental */
  external lang : t => string = "lang" [@@bs.get];
  external setLang : t => string => string = "lang" [@@bs.set];
  external offsetHeight : t => int = "offsetHeight" [@@bs.get]; /* experimental */
  external offsetLeft : t => int = "offsetLeft" [@@bs.get]; /* experimental */
  external offsetParent : t => int = "offsetParent" [@@bs.get]; /* experimental */
  external offsetTop : t => int = "offsetTop" [@@bs.get]; /* experimental, but widely supported */
  external offsetWidth : t => int = "offsetWidth" [@@bs.get]; /* experimental */
  /*external properties : r => HTMLPropertiesCollection.t = "properties" [@@bs.get]; /* experimental */*/
  external spellcheck : t => Js.boolean = "spellcheck" [@@bs.get];
  external setSpellcheck : t => Js.boolean => Js.boolean = "spellcheck" [@@bs.set];
  external style : t => CSSStyleDeclaration.t = "style" [@@bs.get];
  external setStyle : t => CSSStyleDeclaration.t => CSSStyleDeclaration.t = "style" [@@bs.set];
  external tabIndex : t => int = "tabIndex" [@@bs.get];
  external setTabIndex : t => int => int = "tabIndex" [@@bs.set];
  external title : t => string = "title" [@@bs.get];
  external setTitle : t => string => string = "title" [@@bs.set];
  external translate : t => Js.boolean = "translate" [@@bs.get]; /* experimental */
  external setTranslate : t => Js.boolean => Js.boolean = "translate" [@@bs.set]; /* experimental */

  external blur : t => unit = "blur" [@@bs.send];
  external click : t => unit = "click" [@@bs.send];
  external focus : t => unit = "focus" [@@bs.send];
  external forceSpellCheck : t => unit = "forceSpellCheck" [@@bs.send]; /* experimental */

  /* GlobalEventHandlers interface */
  /* Not sure this should be exposed, since EventTarget seems like a better API */

  /* element-specific */
  external value : t => string = "value" [@@bs.get];
  external checked : t => Js.boolean = "checked" [@@bs.get];
};

module History = {
  type t;
  type state; /* TODO: should be "anything that can be serializable" apparently */

  /* a more ergonomic API would perhaps accept a Window.t directly instead of History.t */

  external length : t => int = "length" [@@bs.get];
  external scrollRestoration : t => Js.boolean = "scrollRestoration" [@@bs.get]; /* experimental */
  external setScrollRestoration : t => Js.boolean => Js.boolean = "scrollRestoration" [@@bs.set]; /* experimental */
  external state : t => state = "state" [@@bs.get];

  external back : t => unit = "back" [@@bs.send];
  external forward : t => unit = "forward" [@@bs.send];
  external go : t => int => unit = "go" [@@bs.send];
  external pushState : t => state => string => string => unit = "pushState" [@@bs.send];
  external replaceState : t => state => string => string => unit = "replaceState" [@@bs.send];
};

module Location = {
  type t;

  /* a more ergonomic API would perhaps accept a Window.t directly instead of Location.t */

  external href : t => string = "href" [@@bs.get];
  external setHref : t => string => string = "href" [@@bs.set];
  external protocol : t => string = "protocol" [@@bs.get];
  external setProtocol : t => string => string = "protocol" [@@bs.set];
  external host : t => string = "host" [@@bs.get];
  external setHost : t => string => string = "host" [@@bs.set];
  external hostname : t => string = "hostname" [@@bs.get];
  external setHostname : t => string => string = "hostname" [@@bs.set];
  external port : t => string = "prot" [@@bs.get];
  external setPort : t => string => string  = "port" [@@bs.set];
  external pathname : t => string = "pathname" [@@bs.get];
  external setPathname : t => string => string = "pathname" [@@bs.set];
  external search : t => string = "search" [@@bs.get];
  external setSearch : t => string => string = "search" [@@bs.set];
  external hash : t => string = "hash" [@@bs.get];
  external setHash : t => string => string = "hash" [@@bs.set];
  external username : t => string = "username" [@@bs.get];
  external setUsername : t => string => string = "username" [@@bs.set];
  external password : t => string = "password" [@@bs.get];
  external setPassword : t => string => string = "password" [@@bs.set];
  external origin : t => string = "origin" [@@bs.get];

  external assign : t => string => unit = "assign" [@@bs.send];
  external reload : t => unit = "reload" [@@bs.send];
  external reloadWithForce : t => Js.boolean => unit = "reload" [@@bs.send];
  external replace : t => string => unit = "replace" [@@bs.send];
  external toString : t => string = "toString" [@@bs.send];
};

module Window = {
  type t;

  /* This module is far from exhaustive */

  external document : t => document = "document" [@@bs.get];
  external fullScreen : t => Js.boolean = "fullScreen" [@@bs.get];
  external history : t => History.t = "history" [@@bs.get];
  external innerWidth : t => int = "innerWidth" [@@bs.get];
  external innerHeight : t => int = "innerHeight" [@@bs.get];
  external location : t => Location.t = "location" [@@bs.get];
  external setLocation : t => string => Location.t = "location" [@@bs.set]; /* Will thi return Location.t, or the string it was passed? */
  external parent : t => t = "parent" [@@bs.get];
  external top : t => t = "top" [@@bs.get];
  external window : t = "window" [@@bs.val];

  external alert : t => string => unit = "alert" [@@bs.send];
  external confirm : t => string => Js.boolean = "confirm" [@@bs.send];
  external getComputedStyle : t => Element.t => CSSStyleDeclaration.t = "getComputedStyle" [@@bs.send];
  external getComputedStyleWithPseudoElement : t => Element.t => string => CSSStyleDeclaration.t = "getComputedStyle" [@@bs.send];
  external prompt : t => string => string = "prompt" [@@bs.send];
  external promptWithDefault : t => string => string => string = "prompt" [@@bs.send];
  external scroll : t => int => int => unit = "scroll" [@@bs.send];

  external onLoad : t => (unit => unit) => unit = "onload" [@@bs.set];

  /* EventTarget interface */
  external addEventListener : t => string /* enum */ => (Event.t => unit) => unit = "addEventListener" [@@bs.send];
  external addEventListenerWithOptions : t => string /* enum */ => (Event.t => unit) => Js.t {..} => unit = "addEventListener" [@@bs.send]; /* not widely supported */
  external addEventListenerUseCapture : t => string /* enum */ => (Event.t => unit) => Js.boolean => unit = "addEventListener" [@@bs.send];
  external removeEventListener : t => string /* enum */ => (Event.t => unit) => unit = "removeEventListener" [@@bs.send];
  external removeEventListenerWithOptions : t => string /* enum */ => (Event.t => unit) => Js.t {..} => unit = "removeEventListener" [@@bs.send]; /* not widely supported */
  external removeEventListenerUseCapture : t => string /* enum */ => (Event.t => unit) => Js.boolean => unit = "removeEventListener" [@@bs.send];
  external dispatchEvent : t => Event.t => Js.boolean = "dispatchEvent" [@@bs.send];
};

module Document = {
  type t = document;
  type commentNode;
  type textNode;

  /* Node interface */

  /* Document interface */
  external characterSet : t => string = "characterSet" [@@bs.get];
  external compatMode : t => string /* enum */ = "compatMode" [@@bs.get]; /* experimental */
  external docType : t => DocumentType.t = "docType" [@@bs.get];
  external documentElement : t => Element.t = "documentElement" [@@bs.get];
  external documentURI : t => string = "documentURI" [@@bs.get];
  external hidden : t => Js.boolean = "hidden" [@@bs.get];
  external implementation : t => DocumentImplementation.t = "implementation" [@@bs.get];
  external lastStyleSheetSet : t => string = "lastStyleSheetSet" [@@bs.get];
  external pointerLockElement : t => Js.null Element.t = "pointerLockElement" [@@bs.get]; /* experimental */
  external preferredStyleSheetSet : t => string = "preferredStyleSheetSet" [@@bs.get];
  external scrollingElement : t => Js.null Element.t = "scrollingElement" [@@bs.get];
  external selectedStyleSheetSet : t => string = "selectedStyleSheetSet" [@@bs.get];
  external setSelectedStyleSheetSet : t => string => string = "selectedStyleSheetSet" [@@bs.set];
  external styleSheets : t => array CSSStyleSheet.t = "styleSheets" [@@bs.get]; /* return StyleSheetList, not array */
  external styleSheetSets : t => array string = "styleSheetSets" [@@bs.get];
  external visibilityState : t => string /* enum */ = "visibilityState" [@@bs.get];

  external adoptNode : t => Element.t => Element.t = "adoptNode" [@@bs.send];
  external createAttribute : t => string => Attr.t = "createAttribute" [@@bs.send];
  external createAttributeNS : t => string => string => Attr.t = "createAttributeNS" [@@bs.send];
  external createComment : t => string => commentNode = "createComment" [@@bs.send];
  external createDocumentFragment : t => DocumentFragment.t = "createDocumentFragment" [@@bs.send];
  external createElement : t => string => Element.t = "createElement" [@@bs.send];
  external createElementWithOptions : t => string => Js.t {..} => Element.t = "createEement" [@@bs.send]; /* not widely supported */
  external createElementNS : t => string => string => Element.t = "createElementNS" [@@bs.send];
  external createElementNSWithOptions : t => string => string => Js.t {..} => Element.t = "createEementNS" [@@bs.send]; /* not widely supported */
  external createEvent : t => string /* large enum */ => Event.t = "createEvent" [@@bs.send]; /* discouraged (but not deprecated) in favor of Event constructors */
  external createNodeIterator : t => Element.t => NodeIterator.t = "createNodeIterator" [@@bs.send];
  external createNodeIteratorWithWhatToShow : t => Element.t => int /* NodeFilter enum */ => NodeIterator.t = "createNodeIterator" [@@bs.send];
  external createNodeIteratorWithWhatToShowFilter : t => Element.t => int /* NodeFilter enum */ => NodeFilter.t => NodeIterator.t = "createNodeIterator" [@@bs.send];
  /* createProcessingInstruction */
  external createRange : t => Range.t = "createRange" [@@bs.send];
  external createText : t => string => textNode = "createText" [@@bs.send];
  external createTreeWalker : t => Element.t => TreeWalker.t = "createNodeIterator" [@@bs.send];
  external createTreeWalkerWithWhatToShow : t => Element.t => int /* NodeFilter enum */ => TreeWalker.t = "createNodeIterator" [@@bs.send];
  external createTreeWalkerWithWhatToShowFilter : t => Element.t => int /* NodeFilter enum */ => TreeWalker.t => NodeIterator.t = "createNodeIterator" [@@bs.send];
  external elementFromPoint : t => int => int => Element.t = "elementFromPoint" [@@bs.send]; /* experimental, but widely supported */
  external elementsFromPoint : t => int => int => array Element.t = "elementsFromPoint" [@@bs.send]; /* experimental */
  external enableStyleSheetsForSet : t => string => unit = "enableStyleSheetsForSet" [@@bs.send];
  external exitPointerLock : t => unit = "exitPointerLock" [@@bs.send]; /* experimental */
  external getAnimations : t => array Animation.t = "getAnimations" [@@bs.send]; /* experimental */
  external getElementsByClassName : t => string => array Element.t = "getElementsByClassName" [@@bs.send]; /* returns HTMLCollection, not array */
  external getElementsByTagName : t => string => array Element.t = "getElementsByTagName" [@@bs.send]; /* returns HTMLCollection, not array */
  external getElementsByTagNameNS : t => string => string => array Element.t = "getElementsByTagNameNS" [@@bs.send]; /* returns HTMLCollection, not array */
  external importNode : t => Element.t => Element.t = "importNode" [@@bs.send];
  external importNodeDeep : t => Element.t => Js.boolean => Element.t = "importNode" [@@bs.send];
  external registerElement : t => string => (unit => Element.t) = "registerElement" [@@bs.send]; /* experimental and deprecated in favor of customElements.define() */
  external registerElementWithOptions : t => string => Js.t {..} => (unit => Element.t) = "registerElement" [@@bs.send]; /* experimental and deprecated in favor of customElements.define() */
  external getElementById : t => string => Js.null Element.t = "getElementById" [@@bs.send];
  external querySelector : t => string => Js.null Element.t = "querySelector" [@@bs.send];
  external querySelectorAll : t => string => array Element.t = "querySelectorAll" [@@bs.send]; /* returns NodeList, not array */

  /** XPath stuff */
  /* createExpression */
  /* createNSResolver */
  /* evaluate */

  /* HTMLDocument interface */
  external activeElement : t => Js.null Element.t = "activeElement" [@@bs.get];
  external body : t => Js.null Element.t = "body" [@@bs.get]; /* returns Js.null HTMLBodyElement */
  external setBody : t => Element.t => Js.null Element.t = "body" [@@bs.set]; /* accepth HTMLBodyElement and returns Js.null HTMLBodyElement */
  external cookie : t => string = "cookie" [@@bs.get];
  external setCookie : t => string => string = "cookie" [@@bs.set];
  external defaultView : t => Js.null Window.t = "defaultView" [@@bs.get];
  external designMode : t => string /* enum */ = "designMode" [@@bs.get];
  external setDesignMode : t => string /* enum */ => string /* enum */ = "designMode" [@@bs.set];
  external dir : t => string /* enum */ = "dir" [@@bs.get];
  external setDir : t => string /* enum */ => string /* enum */ = "dir" [@@bs.set];
  external domain : t => Js.null string = "domain" [@@bs.get];
  external setDomain : t => string => Js.null string = "domain" [@@bs.set];
  external embeds : t => array Element.t = "embeds" [@@bs.get]; /* returns NodeList, not array */
  external forms : t => array Element.t = "forms" [@@bs.get]; /* return HTMLCollection, not array */
  external head : t => Element.t = "head" [@@bs.get]; /* returns HTMLHeadElement */
  external images : t => array Element.t = "images" [@@bs.get]; /* return HTMLCollection, not array */
  external lastModified : t => string = "lastModified" [@@bs.get];
  external links : t => array Element.t = "links" [@@bs.get]; /* returns NodeList, not array */
  external location : t => Location.t = "location" [@@bs.get];
  external setLocation : t => string => Location.t = "location" [@@bs.set];
  external plugins : t => array Element.t = "plugins" [@@bs.get]; /* returns HTMLCollection, not array */
  external readyState : t => string /* enum */ = "readyState" [@@bs.get];
  external referrer : t => string = "referrer" [@@bs.get];
  external scripts : t => array Element.t = "scripts" [@@bs.get]; /* returns HTMLCOllection, not array */
  external title : t => string = "title" [@@bs.get];
  external setTitle : t => string => string = "title" [@@bs.set];
  external url : t => string = "URL" [@@bs.get];

  external close : t => unit = "close" [@@bs.send];
  external execCommand : t => string => Js.boolean => Js.null string => Js.boolean = "execCommand" [@@bs.send];
  external getElementsByName : t => string => array Element.t = "getElementsByName" [@@bs.send]; /* returns NodelList, not array */
  external getSelection : t => Selection.t = "getSelection" [@@bs.send];
  external hasFocus : t => Js.boolean = "hasFocus" [@@bs.send];
  external open_ : t => unit = "open" [@@bs.send];
  external queryCommandEnabled : t => string => Js.boolean = "queryCommandEnabled" [@@bs.send];
  external queryCommandIndeterm : t => string => Js.boolean = "queryCommandIndeterm" [@@bs.send];
  external queryCommandSupported : t => string => Js.boolean = "queryCommandSupported" [@@bs.send];
  external queryCommandValue : t => string => string = "queryCommandValue" [@@bs.send];
  external write : t => string => unit = "write" [@@bs.send];
  external writeln : t => string => unit = "writeln" [@@bs.send];

  /* GlobalEventHandlers interface */
};


module JSON = {
  external stringify : 'a => string = "JSON.stringify" [@@bs.val];
  external parse : string => 'a = "JSON.parse" [@@bs.val];
};

module Date = {
  type t;

  external make : unit => t = "Date" [@@bs.new];
  external makeWithValue : float => t = "Date" [@@bs.new];
  external makeWithYearMonth : float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDate : float => float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDateHours : float => float => float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDateHoursMinutes : float => float => float => float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDateHoursMinutesSeconds : float => float => float => float => float => float => t = "Date" [@@bs.new];
  external utc : unit => float = "" [@@bs.val "Date.utc"];
  external utcWithYearMonth : float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDate : float => float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDateHours : float => float => float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDateHoursMinutes : float => float => float => float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDateHoursMinutesSeconds : float => float => float => float => float => float => t = "" [@@bs.val "Date.utc"];
  external now : unit => float = "" [@@bs.val "Date.now"];
  external parse : string => t = "Date" [@@bs.new];

  external getDate : t => float = "" [@@bs.send "getDate"];
  external getDay : t => float = "" [@@bs.send "getDay"];
  external getFullYear : t => float = "" [@@bs.send "getFullYear"];
  external getHours : t => float = "" [@@bs.send "getHours"];
  external getMilliseconds : t => float = "" [@@bs.send "getMilliseconds"];
  external getMinutes : t => float = "" [@@bs.send "getMinutes"];
  external getMonth : t => float = "" [@@bs.send "getMonth"];
  external getSeconds : t => float = "" [@@bs.send "getSeconds"];
  external getTime : t => float = "" [@@bs.send "getTime"];
  external getTimezoneOffset : t => float = "" [@@bs.send "getTimezoneOffset"];
  external getUTCDate : t => float = "" [@@bs.send "getUTCDate"];
  external getUTCDay : t => float = "" [@@bs.send "getUTCDay"];
  external getUTCFullYear : t => float = "" [@@bs.send "getUTCFullYear"];
  external getUTCHours : t => float = "" [@@bs.send "getUTCHours"];
  external getUTCMilliseconds : t => float = "" [@@bs.send "getUTCMilliseconds"];
  external getUTCMinutes : t => float = "" [@@bs.send "getUTCMinutes"];
  external getUTCMonth : t => float = "" [@@bs.send "getUTCMonth"];
  external getUTCSeconds : t => float = "" [@@bs.send "getUTCSeconds"];
  external getYear : t => float = "" [@@bs.send "getYear"]; /* deprecated */

  external setDate : t => float => float = "" [@@bs.send "setDate"];
  external setFullYear : t => float => float = "" [@@bs.send "setFullYear"];
  external setFullYearMonth : t => float => float => float = "" [@@bs.send "setFullYear"];
  external setFullYearMonthDay : t => float => float => float => float = "" [@@bs.send "setFullYear"];
  external setHours : t => float => float = "" [@@bs.send "setHours"];
  external setHoursMinutes : t => float => float => float = "" [@@bs.send "setHours"];
  external setHoursMinutesSeconds : t => float => float => float => float = "" [@@bs.send "setHours"];
  external setHoursMinutesSecondsMilliseconds : t => float => float => float => float => float = "" [@@bs.send "setHours"];
  external setMilliseconds : t => float => float = "" [@@bs.send "setMilliseconds"];
  external setMinutes : t => float => float = "" [@@bs.send "setMinutes"];
  external setMinutesSeconds : t => float => float => float = "" [@@bs.send "setMinutes"];
  external setMinutesSecondsMilliseconds : t => float => float => float => float = "" [@@bs.send "setMinutes"];
  external setMonth : t => float => float = "" [@@bs.send "setMonth"];
  external setMonthDay : t => float => float => float = "" [@@bs.send "setMonth"];
  external setSeconds : t => float => float = "" [@@bs.send "setSeconds"];
  external setSecondsMilliseconds : t => float => float => float = "" [@@bs.send "setSeconds"];
  external setTime : t => float => float = "" [@@bs.send "setTime"];
  external setUTCDate : t => float => float = "" [@@bs.send "setUTCDate"];
  external setUTCFullYear : t => float => float = "" [@@bs.send "setUTCFullYear"];
  external setUTCFullYearMonth : t => float => float => float = "" [@@bs.send "setUTCFullYear"];
  external setUTCFullYearMonthDay : t => float => float => float => float = "" [@@bs.send "setUTCFullYear"];
  external setUTCHours : t => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCHoursMinutes : t => float => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCHoursMinutesSeconds : t => float => float => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCHoursMinutesSecondsMilliseconds : t => float => float => float => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCMilliseconds : t => float => float = "" [@@bs.send "setUTCMilliseconds"];
  external setUTCMinutes : t => float => float = "" [@@bs.send "setUTCMinutes"];
  external setUTCMinutesSeconds : t => float => float => float = "" [@@bs.send "setUTCMinutes"];
  external setUTCMinutesSecondsMilliseconds : t => float => float => float => float = "" [@@bs.send "setUTCMinutes"];
  external setUTCMonth : t => float => float = "" [@@bs.send "setUTCMonth"];
  external setUTCMonthDay : t => float => float => float = "" [@@bs.send "setUTCMonth"];
  external setUTCSeconds : t => float => float = "" [@@bs.send "setUTCSeconds"];
  external setUTCSecondsMilliseconds : t => float => float => float = "" [@@bs.send "setUTCSeconds"];
  external setUTCTime : t => float => float = "" [@@bs.send "setUTCTime"];
  external setYear : t => float => float = "" [@@bs.send "setYear"]; /* deprecated */

  external toDateString : t => string = "" [@@bs.send "toDateString"];
  external toGMTString : t => string = "" [@@bs.send "toGMTString"]; /* deprecated */
  external toISOString : t => string = "" [@@bs.send "toISOString"];
  external toJSON : t => string = "" [@@bs.send "toJSON"];
  external toLocaleDateString : t => string = "" [@@bs.send "toLocaleDateString"]; /* TODO: has overloads with somewhat poor browser support */
  external toLocaleString: t => string = "" [@@bs.send "toLocaleString"]; /* TODO: has overloads with somewhat poor browser support */
  external toLocaleTimeString: t => string = "" [@@bs.send "toLocaleTimeString"]; /* TODO: has overloads with somewhat poor browser support */
  external toString : t => string = "" [@@bs.send "toString"];
  external toTimeString : t => string = "" [@@bs.send "toTimeString"];
  external toUTCString : t => string = "" [@@bs.send "toUTCString"];

  external valueOf : t => float = "" [@@bs.send "valueOf"];
};

module Object = {
  external assign : Js.t {..} => Js.t {..} => Js.t {..} => Js.t {..} = "Object.assign" [@@bs.val];
};

module Float32Array = {
  type t;
  external make : array float => t = "Float32Array" [@@bs.new];
};

module Uint16Array = {
  type t;
  external make : array int => t = "Uint16Array" [@@bs.new];
};

module GL = {
  type glT;
  type programT;
  type shaderT;
  type bufferT;
  /* ClearBufferMask */
  let _DEPTH_BUFFER_BIT: int = 256;
  let _STENCIL_BUFFER_BIT: int = 1024;
  let _COLOR_BUFFER_BIT: int = 16384;
  /* BeginMode */
  let _POINTS: int = 0;
  let _LINES: int = 1;
  let _LINE_LOOP: int = 2;
  let _LINE_STRIP: int = 3;
  let _TRIANGLES: int = 4;
  let _TRIANGLE_STRIP: int = 5;
  let _TRIANGLE_FAN: int = 6;
  /* TEXTURE_2D */
  let _CULL_FACE: int = 2884;
  let _BLEND: int = 3042;
  let _DITHER: int = 3024;
  let _STENCIL_TEST: int = 2960;
  let _DEPTH_TEST: int = 2929;
  let _SCISSOR_TEST: int = 3089;
  let _POLYGON_OFFSET_FILL: int = 32823;
  let _SAMPLE_ALPHA_TO_COVERAGE: int = 32926;
  let _SAMPLE_COVERAGE: int = 32928;
  /* BlendingFactorDest */
  let _ZERO: int = 0;
  let _ONE: int = 1;
  let _SRC_COLOR: int = 768;
  let _ONE_MINUS_SRC_COLOR: int = 769;
  let _SRC_ALPHA: int = 770;
  let _ONE_MINUS_SRC_ALPHA: int = 771;
  let _DST_ALPHA: int = 772;
  let _ONE_MINUS_DST_ALPHA: int = 773;
  /* DataType */
  let _BYTE: int = 5120;
  let _UNSIGNED_BYTE: int = 5121;
  let _SHORT: int = 5122;
  let _UNSIGNED_SHORT: int = 5123;
  let _INT: int = 5124;
  let _UNSIGNED_INT: int = 5125;
  let _FLOAT: int = 5126;
  /* CullFaceMode */
  let _FRONT: int = 1028;
  let _BACK: int = 1029;
  let _FRONT_AND_BACK: int = 1032;
  /* Shaders */
  let _FRAGMENT_SHADER: int = 35632;
  let _VERTEX_SHADER: int = 35633;
  /* Buffer Objects */
  let _ARRAY_BUFFER: int = 34962;
  let _ELEMENT_ARRAY_BUFFER: int = 34963;
  let _ARRAY_BUFFER_BINDING: int = 34964;
  let _ELEMENT_ARRAY_BUFFER_BINDING: int = 34965;
  let _STREAM_DRAW: int = 35040;
  let _STATIC_DRAW: int = 35044;
  let _DYNAMIC_DRAW: int = 35048;
  /* void clear(GLbitfield mask); */
  external clear : glT => int => unit = "clear" [@@bs.send];
  /* void clearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); */
  external clearColor : glT => float => float => float => float => unit = "clearColor" [@@bs.send];
  /* void enable(GLenum cap); */
  external enable : glT => int => unit = "enable" [@@bs.send];
  /* void disable(GLenum cap); */
  external disable : glT => int => unit = "disable" [@@bs.send];
  /* void blendFunc(GLenum sfactor, GLenum dfactor); */
  external blendFunc : glT => int => int => unit = "blendFunc" [@@bs.send];
  /* void cullFace(GLenum mode); */
  external cullFace : glT => int => unit = "cullFace" [@@bs.send];
  external createBuffer : glT => bufferT = "createBuffer" [@@bs.send];
  external deleteBuffer : glT => bufferT => unit = "createBuffer" [@@bs.send];
  external bindBuffer : glT => int => bufferT => unit = "bindBuffer" [@@bs.send];
  external bufferData : glT => int => Uint16Array.t => int => unit = "bufferData" [@@bs.send];
  external bufferFloatData : glT => int => Float32Array.t => int => unit =
    "bufferData" [@@bs.send];
  external createProgram : glT => programT = "createProgram" [@@bs.send];
  external linkProgram : glT => programT => unit = "linkProgram" [@@bs.send];
  external useProgram : glT => programT => unit = "useProgram" [@@bs.send];
  external getProgramInfoLog : glT => programT => string = "getProgramInfoLog" [@@bs.send];
  external bindAttribLocation : glT => programT => int => string => unit =
    "bindAttribLocation" [@@bs.send];
  external createShader : glT => int => shaderT = "createShader" [@@bs.send];
  external shaderSource : glT => shaderT => string => unit = "shaderSource" [@@bs.send];
  external compileShader : glT => shaderT => unit = "compileShader" [@@bs.send];
  external attachShader : glT => programT => shaderT => unit = "attachShader" [@@bs.send];
  external getShaderInfoLog : glT => shaderT => string = "getShaderInfoLog" [@@bs.send];
  /* void drawElements(GLenum mode, GLsizei count, GLenum type, GLintptr offset); */
  external drawElements : glT => int => int => int => int => unit = "drawElements" [@@bs.send];
  /* void enableVertexAttribArray(GLuint index); */
  external enableVertexAttribArray : glT => int => unit = "enableVertexAttribArray" [@@bs.send];
  /* void vertexAttribPointer(GLuint indx, GLint size, GLenum type,
     GLboolean normalized, GLsizei stride, GLintptr offset); */
  external vertexAttribPointer : glT => int => int => int => Js.boolean => int => int => unit =
    "vertexAttribPointer" [@@bs.send];
};

module CanvasElement = {
  external getContext : Element.t => string => GL.glT = "getContext" [@@bs.send];
};

module LocalStorage = {
  external getItem : string => Js.null string = "localStorage.getItem" [@@bs.val];
  external setItem : string => string => unit = "localStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "localStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "localStorage.clear" [@@bs.val];
  external key : int => 'a = "localStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|localStorage.length|}];
};

module SessionStorage = {
  external getItem : string => Js.null string = "sessionStorage.getItem" [@@bs.val];
  external setItem : string => string => unit = "sessionStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "sessionStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "sessionStorage.clear" [@@bs.val];
  external key : int => 'a = "sessionStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|sessionStorage.length|}];
};

module Promise = {
  type promiseT 'a;
  type errorT;
  external thenDo : promiseT 'a => ('a => 'b) => promiseT 'b = "then" [@@bs.send];
  external catchError : promiseT 'a => (errorT => unit) => promiseT 'a = "catch" [@@bs.send];
};

module Response = {
  type responseT;
  /* TODO: type Headers */
  external ok : responseT => Js.boolean = "ok" [@@bs.get];
  external redirected : responseT => Js.boolean = "redirected" [@@bs.get];
  external status : responseT => int = "status" [@@bs.get];
  external statusText : responseT => string = "statusText" [@@bs.get];
  external type_ : responseT => string = "type" [@@bs.get];
  external url : responseT => string = "url" [@@bs.get];

  /** body getters **/
  external json : responseT => Js.t 'a = "json" [@@bs.send];
  external text : responseT => string = "text" [@@bs.send];
};

external fetch : string => Promise.promiseT Response.responseT = "fetch" [@@bs.val];
