type intervalId;
external setInterval : (unit => unit) => int => intervalId = "setInterval" [@@bs.val];
external clearInterval : intervalId => unit = "clearInterval" [@@bs.val];

type timeoutId;
external setTimeout : (unit => unit) => int => timeoutId = "setTimeout" [@@bs.val];
external clearTimeout : timeoutId => unit = "clearTimeout" [@@bs.val];

external requestAnimationFrame : (unit => unit) => unit = "requestAnimationFrame" [@@bs.val];

external window : DomRe.window = "window" [@@bs.val];
external document : DomRe.document = "document" [@@bs.val];
external history : DomRe.history = "document.history" [@@bs.val];
external location : DomRe.location = "document.location" [@@bs.val];

module Base64 = Base64Re;
module Date = DateRe;
module Json = JsonRe;
module Math = MathRe;
module Object = ObjectRe;
module Promise = PromiseRe;
module RegExp = RegExpRe;

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
module Style = StyleRe;
module Window = WindowRe;

module Fetch = FetchRe;
module Response = ResponseRe;

module Float32Array = Float32ArrayRe;
module Gl = GlRe;
module Uint16Array = Uint16ArrayRe;

module LocalStorage = LocalStorageRe;
module SessionStorage = SessionStorageRe;

module CanvasElement = {
  external getContext : DomRe.element => string => Gl.glT = "getContext" [@@bs.send];
};

let fetch = Fetch.fetch;
