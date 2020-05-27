'use strict';

var Webapi__Dom__Attr = require("./Webapi__Dom/Webapi__Dom__Attr.js");
var Webapi__Dom__Node = require("./Webapi__Dom/Webapi__Dom__Node.js");
var Webapi__Dom__Text = require("./Webapi__Dom/Webapi__Dom__Text.js");
var Webapi__Dom__Types = require("./Webapi__Dom/Webapi__Dom__Types.js");
var Webapi__Dom__Window = require("./Webapi__Dom/Webapi__Dom__Window.js");
var Webapi__Dom__Comment = require("./Webapi__Dom/Webapi__Dom__Comment.js");
var Webapi__Dom__Element = require("./Webapi__Dom/Webapi__Dom__Element.js");
var Webapi__Dom__UiEvent = require("./Webapi__Dom/Webapi__Dom__UiEvent.js");
var Webapi__Dom__Document = require("./Webapi__Dom/Webapi__Dom__Document.js");
var Webapi__Dom__DragEvent = require("./Webapi__Dom/Webapi__Dom__DragEvent.js");
var Webapi__Dom__TimeEvent = require("./Webapi__Dom/Webapi__Dom__TimeEvent.js");
var Webapi__Dom__CloseEvent = require("./Webapi__Dom/Webapi__Dom__CloseEvent.js");
var Webapi__Dom__ErrorEvent = require("./Webapi__Dom/Webapi__Dom__ErrorEvent.js");
var Webapi__Dom__FocusEvent = require("./Webapi__Dom/Webapi__Dom__FocusEvent.js");
var Webapi__Dom__InputEvent = require("./Webapi__Dom/Webapi__Dom__InputEvent.js");
var Webapi__Dom__MouseEvent = require("./Webapi__Dom/Webapi__Dom__MouseEvent.js");
var Webapi__Dom__ShadowRoot = require("./Webapi__Dom/Webapi__Dom__ShadowRoot.js");
var Webapi__Dom__TouchEvent = require("./Webapi__Dom/Webapi__Dom__TouchEvent.js");
var Webapi__Dom__TrackEvent = require("./Webapi__Dom/Webapi__Dom__TrackEvent.js");
var Webapi__Dom__WheelEvent = require("./Webapi__Dom/Webapi__Dom__WheelEvent.js");
var Webapi__Dom__CustomEvent = require("./Webapi__Dom/Webapi__Dom__CustomEvent.js");
var Webapi__Dom__HtmlElement = require("./Webapi__Dom/Webapi__Dom__HtmlElement.js");
var Webapi__Dom__CdataSection = require("./Webapi__Dom/Webapi__Dom__CdataSection.js");
var Webapi__Dom__DocumentType = require("./Webapi__Dom/Webapi__Dom__DocumentType.js");
var Webapi__Dom__DomStringMap = require("./Webapi__Dom/Webapi__Dom__DomStringMap.js");
var Webapi__Dom__HtmlDocument = require("./Webapi__Dom/Webapi__Dom__HtmlDocument.js");
var Webapi__Dom__PointerEvent = require("./Webapi__Dom/Webapi__Dom__PointerEvent.js");
var Webapi__Dom__RelatedEvent = require("./Webapi__Dom/Webapi__Dom__RelatedEvent.js");
var Webapi__Dom__StorageEvent = require("./Webapi__Dom/Webapi__Dom__StorageEvent.js");
var Webapi__Dom__SvgZoomEvent = require("./Webapi__Dom/Webapi__Dom__SvgZoomEvent.js");
var Webapi__Dom__CharacterData = require("./Webapi__Dom/Webapi__Dom__CharacterData.js");
var Webapi__Dom__KeyboardEvent = require("./Webapi__Dom/Webapi__Dom__KeyboardEvent.js");
var Webapi__Dom__PopStateEvent = require("./Webapi__Dom/Webapi__Dom__PopStateEvent.js");
var Webapi__Dom__ProgressEvent = require("./Webapi__Dom/Webapi__Dom__ProgressEvent.js");
var Webapi__Dom__AnimationEvent = require("./Webapi__Dom/Webapi__Dom__AnimationEvent.js");
var Webapi__Dom__ClipboardEvent = require("./Webapi__Dom/Webapi__Dom__ClipboardEvent.js");
var Webapi__Dom__HtmlFormElement = require("./Webapi__Dom/Webapi__Dom__HtmlFormElement.js");
var Webapi__Dom__TransitionEvent = require("./Webapi__Dom/Webapi__Dom__TransitionEvent.js");
var Webapi__Dom__CompositionEvent = require("./Webapi__Dom/Webapi__Dom__CompositionEvent.js");
var Webapi__Dom__DocumentFragment = require("./Webapi__Dom/Webapi__Dom__DocumentFragment.js");
var Webapi__Dom__HtmlImageElement = require("./Webapi__Dom/Webapi__Dom__HtmlImageElement.js");
var Webapi__Dom__HtmlInputElement = require("./Webapi__Dom/Webapi__Dom__HtmlInputElement.js");
var Webapi__Dom__BeforeUnloadEvent = require("./Webapi__Dom/Webapi__Dom__BeforeUnloadEvent.js");
var Webapi__Dom__WebGlContextEvent = require("./Webapi__Dom/Webapi__Dom__WebGlContextEvent.js");
var Webapi__Dom__PageTransitionEvent = require("./Webapi__Dom/Webapi__Dom__PageTransitionEvent.js");
var Webapi__Dom__IdbVersionChangeEvent = require("./Webapi__Dom/Webapi__Dom__IdbVersionChangeEvent.js");
var Webapi__Dom__ProcessingInstruction = require("./Webapi__Dom/Webapi__Dom__ProcessingInstruction.js");

var $$AnimationEvent = 0;

var $$Attr = 0;

var $$BeforeUnloadEvent = 0;

var CdataSection = 0;

var $$CharacterData = 0;

var $$Comment = 0;

var CssStyleDeclaration = 0;

var $$ClipboardEvent = 0;

var $$CloseEvent = 0;

var $$CompositionEvent = 0;

var $$CustomEvent = 0;

var $$Document = 0;

var $$DocumentFragment = 0;

var $$DocumentType = 0;

var DomImplementation = 0;

var DomRect = 0;

var DomStringMap = 0;

var DomTokenList = 0;

var $$DragEvent = 0;

var $$Element = 0;

var $$ErrorEvent = 0;

var $$Event = 0;

var $$EventTarget = 0;

var $$FocusEvent = 0;

var $$History = 0;

var HtmlCollection = 0;

var HtmlDocument = 0;

var HtmlElement = 0;

var HtmlFormElement = 0;

var HtmlImageElement = 0;

var HtmlInputElement = 0;

var IdbVersionChangeEvent = 0;

var $$Image = 0;

var $$InputEvent = 0;

var $$KeyboardEvent = 0;

var $$Location = 0;

var $$MouseEvent = 0;

var $$MutationObserver = 0;

var $$MutationRecord = 0;

var $$NamedNodeMap = 0;

var $$Node = 0;

var $$NodeFilter = 0;

var $$NodeIterator = 0;

var $$NodeList = 0;

var $$PageTransitionEvent = 0;

var $$PointerEvent = 0;

var $$PopStateEvent = 0;

var $$ProcessingInstruction = 0;

var $$ProgressEvent = 0;

var $$Range = 0;

var RelatedEvent = 0;

var $$Selection = 0;

var $$ShadowRoot = 0;

var $$StorageEvent = 0;

var SvgZoomEvent = 0;

var $$Text = 0;

var TimeEvent = 0;

var $$TouchEvent = 0;

var $$TrackEvent = 0;

var $$TransitionEvent = 0;

var $$TreeWalker = 0;

var UiEvent = 0;

var $$ValidityState = 0;

var WebGlContextEvent = 0;

var $$WheelEvent = 0;

var $$Window = 0;

var encodeCompareHow = Webapi__Dom__Types.encodeCompareHow;

var decodeCompareResult = Webapi__Dom__Types.decodeCompareResult;

var decodeCompatMode = Webapi__Dom__Types.decodeCompatMode;

var encodeContentEditable = Webapi__Dom__Types.encodeContentEditable;

var decodeContentEditable = Webapi__Dom__Types.decodeContentEditable;

var decodeDeltaMode = Webapi__Dom__Types.decodeDeltaMode;

var encodeDesignMode = Webapi__Dom__Types.encodeDesignMode;

var decodeDesignMode = Webapi__Dom__Types.decodeDesignMode;

var encodeDir = Webapi__Dom__Types.encodeDir;

var decodeDir = Webapi__Dom__Types.decodeDir;

var decodeEventPhase = Webapi__Dom__Types.decodeEventPhase;

var encodeFilterAction = Webapi__Dom__Types.encodeFilterAction;

var encodeInsertPosition = Webapi__Dom__Types.encodeInsertPosition;

var encodeModifierKey = Webapi__Dom__Types.encodeModifierKey;

var decodeNodeType = Webapi__Dom__Types.decodeNodeType;

var decodePointerType = Webapi__Dom__Types.decodePointerType;

var decodeReadyState = Webapi__Dom__Types.decodeReadyState;

var decodeShadowRootMode = Webapi__Dom__Types.decodeShadowRootMode;

var decodeVisibilityState = Webapi__Dom__Types.decodeVisibilityState;

var WhatToShow = Webapi__Dom__Types.WhatToShow;

exports.$$AnimationEvent = $$AnimationEvent;
exports.$$Attr = $$Attr;
exports.$$BeforeUnloadEvent = $$BeforeUnloadEvent;
exports.CdataSection = CdataSection;
exports.$$CharacterData = $$CharacterData;
exports.$$Comment = $$Comment;
exports.CssStyleDeclaration = CssStyleDeclaration;
exports.$$ClipboardEvent = $$ClipboardEvent;
exports.$$CloseEvent = $$CloseEvent;
exports.$$CompositionEvent = $$CompositionEvent;
exports.$$CustomEvent = $$CustomEvent;
exports.$$Document = $$Document;
exports.$$DocumentFragment = $$DocumentFragment;
exports.$$DocumentType = $$DocumentType;
exports.DomImplementation = DomImplementation;
exports.DomRect = DomRect;
exports.DomStringMap = DomStringMap;
exports.DomTokenList = DomTokenList;
exports.$$DragEvent = $$DragEvent;
exports.$$Element = $$Element;
exports.$$ErrorEvent = $$ErrorEvent;
exports.$$Event = $$Event;
exports.$$EventTarget = $$EventTarget;
exports.$$FocusEvent = $$FocusEvent;
exports.$$History = $$History;
exports.HtmlCollection = HtmlCollection;
exports.HtmlDocument = HtmlDocument;
exports.HtmlElement = HtmlElement;
exports.HtmlFormElement = HtmlFormElement;
exports.HtmlImageElement = HtmlImageElement;
exports.HtmlInputElement = HtmlInputElement;
exports.IdbVersionChangeEvent = IdbVersionChangeEvent;
exports.$$Image = $$Image;
exports.$$InputEvent = $$InputEvent;
exports.$$KeyboardEvent = $$KeyboardEvent;
exports.$$Location = $$Location;
exports.$$MouseEvent = $$MouseEvent;
exports.$$MutationObserver = $$MutationObserver;
exports.$$MutationRecord = $$MutationRecord;
exports.$$NamedNodeMap = $$NamedNodeMap;
exports.$$Node = $$Node;
exports.$$NodeFilter = $$NodeFilter;
exports.$$NodeIterator = $$NodeIterator;
exports.$$NodeList = $$NodeList;
exports.$$PageTransitionEvent = $$PageTransitionEvent;
exports.$$PointerEvent = $$PointerEvent;
exports.$$PopStateEvent = $$PopStateEvent;
exports.$$ProcessingInstruction = $$ProcessingInstruction;
exports.$$ProgressEvent = $$ProgressEvent;
exports.$$Range = $$Range;
exports.RelatedEvent = RelatedEvent;
exports.$$Selection = $$Selection;
exports.$$ShadowRoot = $$ShadowRoot;
exports.$$StorageEvent = $$StorageEvent;
exports.SvgZoomEvent = SvgZoomEvent;
exports.$$Text = $$Text;
exports.TimeEvent = TimeEvent;
exports.$$TouchEvent = $$TouchEvent;
exports.$$TrackEvent = $$TrackEvent;
exports.$$TransitionEvent = $$TransitionEvent;
exports.$$TreeWalker = $$TreeWalker;
exports.UiEvent = UiEvent;
exports.$$ValidityState = $$ValidityState;
exports.WebGlContextEvent = WebGlContextEvent;
exports.$$WheelEvent = $$WheelEvent;
exports.$$Window = $$Window;
exports.encodeCompareHow = encodeCompareHow;
exports.decodeCompareResult = decodeCompareResult;
exports.decodeCompatMode = decodeCompatMode;
exports.encodeContentEditable = encodeContentEditable;
exports.decodeContentEditable = decodeContentEditable;
exports.decodeDeltaMode = decodeDeltaMode;
exports.encodeDesignMode = encodeDesignMode;
exports.decodeDesignMode = decodeDesignMode;
exports.encodeDir = encodeDir;
exports.decodeDir = decodeDir;
exports.decodeEventPhase = decodeEventPhase;
exports.encodeFilterAction = encodeFilterAction;
exports.encodeInsertPosition = encodeInsertPosition;
exports.encodeModifierKey = encodeModifierKey;
exports.decodeNodeType = decodeNodeType;
exports.decodePointerType = decodePointerType;
exports.decodeReadyState = decodeReadyState;
exports.decodeShadowRootMode = decodeShadowRootMode;
exports.decodeVisibilityState = decodeVisibilityState;
exports.WhatToShow = WhatToShow;
/* Webapi__Dom__Attr Not a pure module */
