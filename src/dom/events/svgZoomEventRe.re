type t = DomTypesRe.svgZoomEvent;

include EventRe.Impl { type nonrec t = t };
include UiEventRe.Impl { type nonrec t = t };

external make : string => t = "SVGZoomEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "SVGZoomEvent" [@@bs.new];

external zoomRectScreen : t => DomTypesRe.svgRect = "" [@@bs.get];
external previousScale : t => float = "" [@@bs.get];
external previousTranslate : t => DomTypesRe.svgPoint = "" [@@bs.get];
external newScale : t => float = "" [@@bs.get];
external newTranslate : t => DomTypesRe.svgPoint = "" [@@bs.get];