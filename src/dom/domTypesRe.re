type animation; /* Web Animations API */

/* TODO: Should we bother with this indirection?
/* core */
type domString = string;
type domTimestamp = float;
*/

/* css */
type cssStyleDeclaration;
type cssStyleSheet;

/* events (early) */
type eventTarget_like 'a;
type eventTarget = eventTarget_like unit; 

/* nodes */
type node_tag 'a;
type node_like 'a = eventTarget_like (node_tag 'a);
type node = node_like unit;
type attr_tag;
type attr = node_like attr_tag;
type characterData_tag 'a;
type characterData_like 'a = node_like (characterData_tag 'a);
type characterData = characterData_like unit;
type cdataSection_tag;
type cdataSection = characterData_like cdataSection_tag;
type comment_tag;
type comment = characterData_like comment_tag;
type document_tag 'a;
type document_like 'a = node_like (document_tag 'a);
type document = document_like unit;
type documentFragment_tag;
type documentFragment = node_like documentFragment_tag;
type documentType_tag;
type documentType = node_like documentType_tag;
type domImplementation;
type element_tag 'a;
type element_like 'a = node_like (element_tag 'a);
type element = element_like unit;
type htmlCollection;
type mutationObserver;
type mutationRecord;
type namedNodeMap;
type nodeList;
type processingInstruction;
type shadowRoot_tag;
type shadowRoot = node_like shadowRoot_tag;
type text_tag;
type text = characterData_like text_tag;

/* geometry */
type domRect;

/* html */
type dataTransfer; /* Drag and Drop API */
type domStringMap;
type history;
type htmlDocument_tag;
type htmlDocument = document_like htmlDocument_tag;
type htmlElement_tag 'a;
type htmlElement_like 'a = element_like (htmlElement_tag 'a);
type htmlElement = htmlElement_like unit;
type htmlSlotElement_tag;
type htmlSlotElement = htmlElement_like htmlSlotElement_tag;
type location;
type window;
type xmlDocument_tag;
type xmlDocument = document_like xmlDocument_tag;


/* events */
type event_like 'a;
type event = event_like unit;
type uiEvent_tag 'a;
type uiEvent_like 'a = event_like (uiEvent_tag 'a);
type uiEvent = uiEvent_like unit;
type animationEvent_tag;
type animationEvent = event_like animationEvent_tag;
type beforeUnloadEvent_tag;
type beforeUnloadEvent = event_like beforeUnloadEvent_tag;
type clipboardEvent_tag;
type clipboardEvent = event_like clipboardEvent_tag;
type closeEvent_tag;
type closeEvent = event_like closeEvent_tag;
type compositionEvent_tag;
type compositionEvent = uiEvent_like compositionEvent_tag;
type customEvent_tag;
type customEvent = event_like customEvent_tag;
type dragEvent_tag;
type dragEvent = event_like dragEvent_tag;
type errorEvent_tag;
type errorEvent = event_like errorEvent_tag;
type focusEvent_tag;
type focusEvent = uiEvent_like focusEvent_tag;
type idbVersionChangeEvent_tag;
type idbVersionChangeEvent = event_like idbVersionChangeEvent_tag;
type inputEvent_tag;
type inputEvent = uiEvent_like inputEvent_tag;
type keyboardEvent_tag;
type keyboardEvent = uiEvent_like keyboardEvent_tag;
type mouseEvent_tag 'a;
type mouseEvent_like 'a = uiEvent_like (mouseEvent_tag 'a);
type mouseEvent = mouseEvent_like unit;
type pageTransitionEvent_tag;
type pageTransitionEvent = event_like pageTransitionEvent_tag;
type pointerEvent_tag;
type pointerEvent = mouseEvent_like pointerEvent_tag;
type popStateEvent_tag;
type popStateEvent = event_like popStateEvent_tag;
type progressEvent_tag;
type progressEvent = event_like progressEvent_tag;
type relatedEvent_tag;
type relatedEvent = event_like relatedEvent_tag;
type storageEvent_tag;
type storageEvent = event_like storageEvent_tag;
type svgZoomEvent_tag;
type svgZoomEvent = event_like svgZoomEvent_tag;
type timeEvent_tag;
type timeEvent = event_like timeEvent_tag;
type touchEvent_tag;
type touchEvent = uiEvent_like touchEvent_tag;
type trackEvent_tag;
type trackEvent = event_like trackEvent_tag;
type transitionEvent_tag;
type transitionEvent = event_like transitionEvent_tag;
type webGlContextEvent_tag;
type webGlContextEvent = event_like webGlContextEvent_tag;
type wheelEvent_tag;
type wheelEvent = uiEvent_like wheelEvent_tag;

/* ranges */
type range;

/* selection (TODO: move out of dom?) */
type selection;

/* sets */
type domTokenList;
type domSettableTokenList;

/* traversal */
type nodeFilter = {
  acceptNode: element => int /* return type should be NodeFilter.action, but that would create a cycle */
};
type nodeIterator;
type treeWalker;

/* SVG */
type svgRect;
type svgPoint;

/* special */
type eventPointerId;

/*** enums, bitmaks and constants ***/

type compareHow =
| StartToStart
| StartToEnd
| EndToEnd
| EndToStart;
let encodeCompareHow = fun /* internal */
| StartToStart  => 0
| StartToEnd    => 1
| EndToEnd      => 2
| EndToStart    => 3;

type compareResult =
| Before
| Equal
| After
| Unknown;
let decodeCompareResult = fun /* internal */
| -1 => Before
|  0 => Equal
|  1 => After
|  _ => Unknown;

type compatMode =
| BackCompat
| CSS1Compat
| Unknown;
let decodeCompatMode = fun /* internal */
| "BackCompat" => BackCompat
| "CSS1Compat" => CSS1Compat
| _            => Unknown;

type contentEditable =
| True
| False
| Inherit
| Unknown;
let encodeContentEditable = fun /* internal */
| True    => "true"
| False   => "false"
| Inherit => "inherit"
| Unknown => "";
let decodeContentEditable = fun /* internal */
| "true"    => True
| "false"   => False
| "inherit" => Inherit
| _         => Unknown;

type deltaMode =
| Pixel
| Line
| Page;
let decodeDeltaMode = fun /* internal */
| 0 => Pixel
| 1 => Line
| 2 => Page
| _ => raise (Invalid_argument "invalid deltaMode");

type designMode =
| On
| Off
| Unknown;
let encodeDesignMode = fun /* internal */
| On      => "on"
| Off     => "off"
| Unknown => "";
let decodeDesignMode = fun /* internal */
| "on"  => On
| "off" => Off
| _     => Unknown;

type dir =
| Ltr
| Rtl
| Unknown;
let encodeDir = fun /* internal */
| Ltr     => "ltr"
| Rtl     => "rtl"
| Unknown => "";
let decodeDir = fun /* internal */
| "ltr" => Ltr
| "rtl" => Rtl
| _     => Unknown;

type eventPhase =
| None
| CapturingPhase
| AtTarget
| BubblingPhase
| Unknown;
let decodeEventPhase = fun /* internal */
| 0 => None
| 1 => CapturingPhase
| 2 => AtTarget
| 3 => BubblingPhase
| _ => Unknown;

type filterAction =
| Accept
| Reject
| Skip;
let encodeFilterAction = fun
| Accept => 1
| Reject => 2
| Skip   => 3;

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

type modifierKey =
| Alt
| AltGraph
| CapsLock
| Control
| Fn
| FnLock
| Hyper
| Meta
| NumLock
| ScrollLock
| Shift
| Super
| Symbol
| SymbolLock;
let encodeModifierKey = fun /* internal */
| Alt => "Alt"
| AltGraph    => "AltGraph"
| CapsLock    => "CapsLock"
| Control     => "Control"
| Fn          => "Fn"
| FnLock      => "FnLock"
| Hyper       => "Hyper"
| Meta        => "Meta"
| NumLock     => "NumLock"
| ScrollLock  => "ScrollLock"
| Shift       => "Shift"
| Super       => "Super"
| Symbol      => "Symbol"
| SymbolLock  => "SymbolLock";

type nodeType =
| Element
| Attribute /* deprecated */
| Text
| CDATASection /* deprecated */
| EntityReference /* deprecated */
| Entity /* deprecated */
| ProcessingInstruction
| Comment
| Document
| DocumentType
| DocumentFragment
| Notation /* deprecated */
| Unknown;
let decodeNodeType = fun /* internal */
|  1 => Element
|  2 => Attribute
|  3 => Text
|  4 => CDATASection
|  5 => EntityReference
|  6 => Entity
|  7 => ProcessingInstruction
|  8 => Comment
|  9 => Document
| 10 => DocumentType
| 11 => DocumentFragment
| 12 => Notation
|  _ => Unknown;

type pointerType =
| Mouse
| Pen
| Touch
| Unknown;
let decodePointerType = fun /* itnernal */
| "mouse"   => Mouse
| "pen"     => Pen
| "touch|"  => Touch
| _         => Unknown;

type readyState =
| Loading
| Interactive
| Complete
| Unknown;
let decodeReadyState = fun /* internal */
| "loading"     => Loading
| "interactive" => Interactive
| "complete"    => Complete
| _             => Unknown;

type shadowRootMode =
| Open
| Closed;
let decodeShadowRootMode = fun /* internal */
| "open" => Open
| "closed" => Closed
| _ => raise (Invalid_argument "Unknown shadowRootMode");

type visibilityState =
| Visible
| Hidden
| Prerender
| Unloaded
| Unknown;
let decodeVisibilityState = fun /* internal */
| "visible"   => Visible
| "hidden"    => Hidden
| "prerender" => Prerender
| "unloaded"  => Unloaded
| _           => Unknown;

module type WhatToShowT = {
  type t;

  let _All: t;
  let _Element: t;
  let _Attribute: t;
  let _Text: t;
  let _CDATASection: t;
  let _EntityReference: t;
  let _Entity: t;
  let _ProcessingInstruction: t;
  let _Comment: t;
  let _Document: t;
  let _DocumentType: t;
  let _DocumentFragment: t;
  let _Notation: t;

  let many: list t => t;
};
module WhatToShow: WhatToShowT = {
  type t = int;

  let _All                    = -1;
  let _Element                = 1;
  let _Attribute              = 2;
  let _Text                   = 4;
  let _CDATASection           = 8;
  let _EntityReference        = 16;
  let _Entity                 = 32;
  let _ProcessingInstruction  = 64;
  let _Comment                = 128;
  let _Document               = 256;
  let _DocumentType           = 512;
  let _DocumentFragment       = 1024;
  let _Notation               = 2048;

  let rec many = fun
    | [] => 0
    | [hd, ...rest] => hd lor (many rest);
};