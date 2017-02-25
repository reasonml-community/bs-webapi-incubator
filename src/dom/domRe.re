
module CssStyleDeclaration = CssStyleDeclarationRe;
module Document = DocumentRe;
module DomTokenList = DomTokenListRe;
module Element = ElementRe;
module Event = EventRe;
module EventTarget = EventTargetRe;
module History = HistoryRe;
module HtmlCollection = HtmlCollectionRe;
module HtmlDocument = HtmlDocumentRe;
module HtmlElement = HtmlElementRe;
module Location = LocationRe;
module Node = NodeRe;
module NodeFilter = NodeFilterRe;
module NodeList = NodeListRe;
module Range = RangeRe;
module Selection = SelectionRe;
module Window = WindowRe;

include DomTypesRe;

external window : window = "window" [@@bs.val];
external document : document = "document" [@@bs.val];
external history : history = "document.history" [@@bs.val];
external location : location = "document.location" [@@bs.val];
