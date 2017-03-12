type t = DomTypesRe.webGlContextEvent;

include EventRe.Impl { type nonrec t = t };

external make : string => t = "WebGLContextEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "WebGLContextEvent" [@@bs.new];

external statusMessage : t => string = "" [@@bs.get];