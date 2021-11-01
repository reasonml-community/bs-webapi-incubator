type t; /* Main type, representing the 2d canvas rendering context object */
type gradient;
type pattern;
type measureText;

/* Sub-modules (and their interfaces) for string enum arguments: */
module type CompositeType = {
  type t = pri string;

  let sourceOver: t;
  let sourceIn: t;
  let sourceOut: t;
  let sourceAtop: t;
  let destinationOver: t;
  let destinationIn: t;
  let destinationOut: t;
  let destinationAtop: t;
  let lighter: t;
  let copy: t;
  let xor: t;
};

module Composite: CompositeType = {
  type t = string;

  let sourceOver: t = "source-over";
  let sourceIn: t = "source-in";
  let sourceOut: t = "source-out";
  let sourceAtop: t = "source-atop";
  let destinationOver: t = "destination-over";
  let destinationIn: t = "destination-in";
  let destinationOut: t = "destination-out";
  let destinationAtop: t = "destination-atop";
  let lighter: t = "lighter";
  let copy: t = "copy";
  let xor: t = "xor";
};

module type LineCapType = {
  type t = pri string;

  let butt: t;
  let round: t;
  let square: t;
};

module LineCap: LineCapType = {
  type t = string;

  let butt: t = "butt";
  let round: t = "round";
  let square: t = "square";
};

module type LineJoinType = {
  type t = pri string;

  let round: t;
  let bevel: t;
  let miter: t;
};

module LineJoin: LineJoinType = {
  type t = string;

  let round: t = "round";
  let bevel: t = "bevel";
  let miter: t = "miter";
};

type image('a) =
  | Number: image(float)
  | ImageData: image(Webapi__Dom__Image.t);

type style(_) =
  | String: style(string)
  | Gradient: style(gradient)
  | Pattern: style(pattern);

/* 2d Canvas API, following https://simon.html5.org/dump/html5-canvas-cheat-sheet.html */
[@bs.send.pipe : t] external save : unit = "save";
[@bs.send.pipe : t] external restore : unit = "restore";

/* Transformation */
[@bs.send.pipe : t] external scale : (~x: float, ~y: float) => unit = "scale";
[@bs.send.pipe : t] external rotate : float => unit = "rotate";
[@bs.send.pipe : t] external translate : (~x: float, ~y: float) => unit = "translate";
[@bs.send.pipe : t] external transform : (~m11: float, ~m12: float, ~m21: float, ~m22: float, ~dx: float, ~dy: float) => unit = "transform";
[@bs.send.pipe : t] external setTransform : (~m11: float, ~m12: float, ~m21: float, ~m22: float, ~dx: float, ~dy: float) => unit = "setTransform";

/* Compositing */
[@bs.set] external globalAlpha : (t, float) => unit = "globalAlpha";
[@bs.set] external globalCompositeOperation : (t, Composite.t) => unit = "globalCompositeOperation";

/* Line Styles */
[@bs.set] external lineWidth : (t, float) => unit = "lineWidth";
[@bs.set] external lineCap : (t, LineCap.t) => unit = "lineCap";
[@bs.set] external lineJoin : (t, LineJoin.t) => unit = "lineJoin";
[@bs.set] external miterLimit : (t, float) => unit = "miterLimit";

/* Colors, Styles, and Shadows */
[@bs.set] external setFillStyle : (t, 'a) => unit = "fillStyle";
[@bs.set] external setStrokeStyle : (t, 'a) => unit = "strokeStyle";

/* in re unused warnings
   awaiting release of https://github.com/bloomberg/bucklescript/issues/1656
   to just use [@@bs.set] directly with an ignored (style a) */
let setStrokeStyle = (type a, ctx: t, _: style(a), v: a) =>
  setStrokeStyle(ctx, v);

let setFillStyle = (type a, ctx: t, _: style(a), v: a) =>
  setFillStyle(ctx, v);

let reifyStyle = (type a, x: 'a) : (style(a), a) => {
  let isCanvasGradient: 'a => bool = [%raw {|
    function(x) { return x instanceof CanvasGradient; }
  |}];

  let isCanvasPattern: 'a => bool = [%raw {|
    function(x) { return x instanceof CanvasPattern; }
  |}];

  (
    if (Js.typeof(x) == "string") Obj.magic(String)
    else if (isCanvasGradient(x)) Obj.magic(Gradient)
    else if (isCanvasPattern(x)) Obj.magic(Pattern)
    else invalid_arg(
      "Unknown canvas style kind. Known values are: String, CanvasGradient, CanvasPattern"),
    Obj.magic(x)
  );
};

[@bs.get] external fillStyle : t => 'a = "fillStyle";
[@bs.get] external strokeStyle : t => 'a = "strokeStyle";

let fillStyle = (ctx: t) =>
  ctx |> fillStyle |> reifyStyle;

let strokeStyle = (ctx: t) =>
  ctx |> strokeStyle |> reifyStyle;

[@bs.set] external shadowOffsetX : (t, float) => unit = "shadowOffsetX";
[@bs.set] external shadowOffsetY : (t, float) => unit = "shadowOffsetY";
[@bs.set] external shadowBlur : (t, float) => unit = "shadowBlur";
[@bs.set] external shadowColor : (t, string) => unit = "shadowColor";

/* Gradients */
[@bs.send.pipe : t] external createLinearGradient : (~x0: float, ~y0: float, ~x1: float, ~y1: float) => gradient = "createLinearGradient";
[@bs.send.pipe : t] external createRadialGradient : (~x0: float, ~y0: float, ~x1: float, ~y1: float, ~r0: float, ~r1: float) => gradient = "createRadialGradient";
[@bs.send.pipe : gradient] external addColorStop : (float, string) => unit = "addColorStop";
[@bs.val] external createPattern : (
    t,
    Dom.element,
    [@bs.string] [
      | `repeat
      [@bs.as "repeat-x"] | `repeatX
      [@bs.as "repeat-y"] | `repeatY
      [@bs.as "no-repeat"] | `noRepeat
    ]
  )
  => pattern = "createPattern";

/* Paths */
[@bs.send.pipe : t] external beginPath : unit = "beginPath";
[@bs.send.pipe : t] external closePath : unit = "closePath";
[@bs.send.pipe : t] external fill : unit = "fill";
[@bs.send.pipe : t] external stroke : unit = "stroke";
[@bs.send.pipe : t] external clip : unit = "clip";
[@bs.send.pipe : t] external moveTo : (~x: float, ~y: float) => unit = "moveTo";
[@bs.send.pipe : t] external lineTo : (~x: float, ~y: float) => unit = "lineTo";
[@bs.send.pipe : t] external quadraticCurveTo : (~cp1x: float, ~cp1y: float, ~x: float, ~y: float) => unit = "quadraticCurveTo";
[@bs.send.pipe : t] external bezierCurveTo : (~cp1x: float, ~cp1y: float, ~cp2x: float, ~cp2y: float, ~x: float, ~y: float) => unit = "bezierCurveTo";
[@bs.send.pipe : t] external arcTo : (~x1: float, ~y1: float, ~x2: float, ~y2: float, ~r: float) => unit = "arcTo";
[@bs.send.pipe : t] external arc : (~x: float, ~y: float, ~r: float, ~startAngle: float, ~endAngle: float, ~anticw: bool) => unit = "arc";
[@bs.send.pipe : t] external rect : (~x: float, ~y: float, ~w: float, ~h: float) => unit = "rect";
[@bs.send.pipe : t] external isPointInPath : (~x: float, ~y: float) => bool = "isPointInPath";

/* Text */
[@bs.set] external font : (t, string) => unit = "font";
[@bs.set] external textAlign : (t, string) => unit = "textAlign";
[@bs.set] external textBaseline : (t, string) => unit = "textBaseline";
[@bs.send.pipe : t] external fillText : (string, ~x: float, ~y: float, ~maxWidth: float=?) => unit = "fillText";
[@bs.send.pipe : t] external strokeText : (string, ~x: float, ~y: float, ~maxWidth: float=?) => unit = "strokeText";
[@bs.send.pipe : t] external measureText : string => measureText = "measureText";
[@bs.get] external width : measureText => float = "measureText";

/* Rectangles */
[@bs.send.pipe : t] external fillRect : (~x: float, ~y: float, ~w: float, ~h: float) => unit = "fillRect";
[@bs.send.pipe : t] external strokeRect : (~x: float, ~y: float, ~w: float, ~h: float) => unit = "strokeRect";
[@bs.send.pipe : t] external clearRect : (~x: float, ~y: float, ~w: float, ~h: float) => unit = "clearRect";

[@bs.send] external createImageDataCoords : (t, ~width: float, ~height: float) => Webapi__Dom__Image.t = "createImageData";
[@bs.send] external createImageDataFromImage : (t, Webapi__Dom__Image.t) => Webapi__Dom__Image.t = "createImageData";

[@bs.send] external getImageData : (t, ~sx: float, ~sy: float, ~sw: float, ~sh: float) => Webapi__Dom__Image.t = "getImageData";

[@bs.send] external putImageData : (
    t,
    ~imageData: Webapi__Dom__Image.t,
    ~dx: float,
    ~dy: float
  )
  => unit = "putImageData";

[@bs.send] external putImageDataWithDirtyRect : (
    t,
    ~imageData: Webapi__Dom__Image.t,
    ~dx: float,
    ~dy: float,
    ~dirtyX: float,
    ~dirtyY: float,
    ~dirtyWidth: float,
    ~dirtyHeight: float
  )
  => unit = "putImageData";
