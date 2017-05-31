type t;

external make : array::Js.Typed_array.Uint8ClampedArray.t? => width::float => height::float => unit => t = "ImageData" [@@bs.new];
external data : t => Js.Typed_array.Uint8ClampedArray.t = "" [@@bs.get];
external height : t => float = "" [@@bs.get];
external width : t => float = "" [@@bs.get];
