module AnimationEvent = AnimationEventRe;
module Attr = AttrRe;
module BeforeUnloadEvent = BeforeUnloadEventRe;
module CdataSection = CdataSectionRe;
module CharacterData = CharacterDataRe;
module Comment = CommentRe;
module CssStyleDeclaration = CssStyleDeclarationRe;
module ClipboardEvent = ClipboardEventRe;
module CloseEvent = CloseEventRe;
module CompositionEvent = CompositionEventRe;
module CustomEvent = CustomEventRe;
module Document = DocumentRe;
module DocumentFragment = DocumentFragmentRe;
module DocumentType = DocumentTypeRe;
module DomImplementation = DomImplementationRe;
module DomRect = DomRectRe;
module DomTokenList = DomTokenListRe;
module DragEvent = DragEventRe;
module Element = ElementRe;
module ErrorEvent = ErrorEventRe;
module Event = EventRe;
module EventTarget = EventTargetRe;
module FocusEvent = FocusEventRe;
module History = HistoryRe;
module HtmlCollection = HtmlCollectionRe;
module HtmlDocument = HtmlDocumentRe;
module HtmlElement = HtmlElementRe;
module HtmlImageElement = HtmlImageElementRe;
module IdbVersionChangeEvent = IdbVersionChangeEventRe;
module Image = ImageRe;
module InputEvent = InputEventRe;
module KeyboardEvent = KeyboardEventRe;
module Location = LocationRe;
module MouseEvent = MouseEventRe;
module MutationObserver = MutationObserverRe;
module MutationRecord = MutationRecordRe;
module NamedNodeMap = NamedNodeMapRe;
module Node = NodeRe;
module NodeFilter = NodeFilterRe;
module NodeList = NodeListRe;
module PageTransitionEvent = PageTransitionEventRe;
module PointerEvent = PointerEventRe;
module PopStateEvent = PopStateEventRe;
module ProgressEvent = ProgressEventRe;
module Range = RangeRe;
module RelatedEvent = RelatedEventRe;
module Selection = SelectionRe;
module ShadowRoot = ShadowRootRe;
module StorageEvent = StorageEventRe;
module SvgZoomEvent = SvgZoomEventRe;
module Text = TextRe;
module TimeEvent = TimeEventRe;
module TouchEvent = TouchEventRe;
module TrackEvent = TrackEventRe;
module TransitionEvent = TransitionEventRe;
module UiEvent = UiEventRe;
module WebGlContextEvent = WebGlContextEventRe;
module WheelEvent = WheelEventRe;
module Window = WindowRe;

include DomTypesRe;

[@bs.val] external window : Dom.window = "window";
[@bs.val] external document : Dom.document = "document";
[@bs.val] [@bs.scope "window"] external history : Dom.history = "history";
[@bs.val] [@bs.scope "window"] external location : Dom.location = "location";


/* Unimplemented interfaces (aka. "The TODO list")

   Attr
   CharacterData
   ChildNode /* experimental */
   Comment
   DocumentFragment
   DocumentType
   DOMError
   DOMException
   DOMImplementation
   DOMTimeStamp
   DOMSettableTokenList /* deprecated, merged with DOMTokenList */
   DOMStringList
   MutationObserver
   MutationRecord
   NodeIterator
   ParentNode /* experimental */
   ProcessingInstruction
   Text
   TreeWalker
   URL
   Worker
   XMLDocument /* experimental */

   /* HTML Elements */
   HTMLAnchorElement
   HTMLAppletElement
   HTMLAreaElement
   HTMLAudioElement
   HTMLBaseElement
   HTMLBodyElement
   HTMLBRElement
   HTMLButtonELement
   HTMLCanvasElement
   HTMLDataElement
   HTMLDataListElement
   HTMLDialogElement
   HTMLDirectoryElement
   HTMLDivElement
   HTMLDListElement
   HTMLEmbedElement
   HTMLFieldSetElement
   HTMLFontElement
   HTMLFormElement
   HTMLFrameElement
   HTMLFrameSetElement
   HTMLHeadElement
   HTMLHeadingElement
   HTMLHtmlElement
   HTMLHRElement
   HTMLIFrameElement
   HTMLImageElement
   HTMLInputElement
   HTMLKeygenElement
   HTMLLabelElement
   HTMLLegendElement
   HTMLLIElement
   HTMLLinkElement
   HTMLMapElement
   HTMLMediaElement
   HTMLMenuElement
   HTMLMetaElement
   HTMLMeterElement
   HTMLModElement
   HTMLObjectElement
   HTMLOListElement
   HTMLOptGroupElement
   HTMLOptionElement
   HTMLOutputElement
   HTMLParagraphElement
   HTMLParamElement
   HTMLPreElement
   HTMLProgressElement
   HTMLQuoteElement
   HTMLScriptElement
   HTMLSelectElement
   HTMLSourceElement
   HTMLSpanElement
   HTMLStyleElement
   HTMLTableElement
   HTMLTableCaptionElement
   HTMLTableCellElement
   HTMLTableDataCellElement
   HTMLTableHeaderCellElement
   HTMLTableColElement
   HTMLTableRowElement
   HTMLTableSectionElement
   HTMLTextAreaElement
   HTMLTimeElement
   HTMLTitleElement
   HTMLTrackElement
   HTMLUListElement
   HTMLUnknownElement
   HTMLVideoElement

   /* Other interfaces */
   CanvasRenderingContext2D
   CanvasGradient
   CanvasPattern
   TextMetrics
   ImageData
   CanvasPixelArray
   NotifyAudioAvailableEvent
   HTMLAllCollection
   HTMLFormControlsCollection
   HTMLOptionsCollection
   HTMLPropertiesCollection
   DOMStringMap
   RadioNodeList
   MediaError

   /* SVG Element interfaces */
   SVGAElement
   SVGAltGlyphElement
   SVGAltGlyphDefElement
   SVGAltGlyphItemElement
   SVGAnimationElement
   SVGAnimateElement
   SVGAnimateColorElement
   SVGAnimateMotionElement
   SVGAnimateTransformElement
   SVGCircleElement
   SVGClipPathElement
   SVGColorProfileElement
   SVGComponentTransferFunctionElement
   SVGCursorElement
   SVGDefsElement
   SVGDescElement
   SVGElement
   SVGEllipseElement
   SVGFEBlendElement
   SVGFEColorMatrixElement
   SVGFEComponentTransferElement
   SVGFECompositeElement
   SVGFEConvolveMatrixElement
   SVGFEDiffuseLightingElement
   SVGFEDisplacementMapElement
   SVGFEDistantLightElement
   SVGFEFloodElement
   SVGFEGaussianBlurElement
   SVGFEImageElement
   SVGFEMergeElement
   SVGFEMergeNodeElement
   SVGFEMorphologyElement
   SVGFEOffsetElement
   SVGFEPointLightElement
   SVGFESpecularLightingElement
   SVGFESpotLightElement
   SVGFETileElement
   SVGFETurbulenceElement
   SVGFEFuncRElement
   SVGFEFuncGElement
   SVGFEFuncBElement
   SVGFEFuncAElement
   SVGFilterElement
   SVGFilterPrimitiveStandardAttributes
   SVGFontElement
   SVGFontFaceElement
   SVGFontFaceFormatElement
   SVGFontFaceNameElement
   SVGFontFaceSrcElement
   SVGFontFaceUriElement
   SVGForeignObjectElement
   SVGGElement
   SVGGlyphElement
   SVGGlyphRefElement
   SVGGradientElement
   SVGHKernElement
   SVGImageElement
   SVGLinearGradientElement
   SVGLineElement
   SVGMarkerElement
   SVGMaskElement
   SVGMetadataElement
   SVGMissingGlyphElement
   SVGMPathElement
   SVGPathElement
   SVGPatternElement
   SVGPolylineElement
   SVGPolygonElement
   SVGRadialGradientElement
   SVGRectElement
   SVGScriptElement
   SVGSetElement
   SVGStopElement
   SVGStyleElement
   SVGSVGElement
   SVGSwitchElement
   SVGSymbolElement
   SVGTextElement
   SVGTextPathElement
   SVGTitleElement
   SVGTRefElement
   SVGTSpanElement
   SVGUseElement
   SVGViewElement
   SVGVKernElement

   /* SVG data type interfaces */

   /* Static type */
   SVGAngle
   SVGColor
   SVGICCColor
   SVGElementInstance
   SVGElementInstanceList
   SVGLength
   SVGLengthList
   SVGMatrix
   SVGNumber
   SVGNumberList
   SVGPaint
   SVGPoint
   SVGPointList
   SVGPreserveAspectRatio
   SVGRect
   SVGStringList
   SVGTransform
   SVGTransformList

   /* Animated type */
   SVGAnimatedAngle
   SVGAnimatedBoolean
   SVGAnimatedEnumeration
   SVGAnimatedInteger
   SVGAnimatedLength
   SVGAnimatedLengthList
   SVGAnimatedNumber
   SVGAnimatedNumberList
   SVGAnimatedPreserveAspectRatio
   SVGAnimatedRect
   SVGAnimatedString
   SVGAnimatedTransformList

   /* SIML related interfaces */
   ElementTimeControl
   TimeEvent

   /* Other SVG interfaces */
   SVGAnimatedPathData
   SVGAnimatedPoints
   SVGColorProfileRule
   SVGCSSRule
   SVGExternalResourcesRequired
   SVGFitToViewBox
   SVGLangSpace
   SVGLocatable
   SVGRenderingIntent
   SVGStylable
   SVGTests
   SVGTextContentElement
   SVGTextPositioningElement
   SVGTransformable
   SVGUnitTypes
   SVGURIReference
   SVGViewSpec
   SVGZoomAndPan

   /* obsolete interfaces skipped */
   */
