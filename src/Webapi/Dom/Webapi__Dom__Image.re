type t;

[@bs.new] external makeWithData : (~array: Js.Typed_array.Uint8ClampedArray.t, ~width: float, ~height: float) => t = "ImageData";

[@bs.new] external make : (~width: float, ~height: float) => t = "ImageData";

[@bs.get] external data : t => Js.Typed_array.Uint8ClampedArray.t = "data";
[@bs.get] external height : t => float = "height";
[@bs.get] external width : t => float = "width";
