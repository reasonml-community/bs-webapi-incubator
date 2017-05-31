type t;     /* Main type, representing the 2d canvas rendering context object */
type gradient;


/* Sub-modules (and their interfaces) for string enum arguments: */
module type CompositeType = {
  type t = pri string;

  let sourceOver : t;
  let sourceIn : t;
  let sourceOut : t;
  let sourceAtop : t;
  let destinationOver : t;
  let destinationIn : t;
  let destinationOut : t;
  let destinationAtop : t;
  let lighter : t;
  let copy : t;
  let xor : t;
};

module Composite: CompositeType = {
  type t = string;

  let sourceOver : t = "source-over";
  let sourceIn : t = "source-in";
  let sourceOut : t = "source-out";
  let sourceAtop : t = "source-atop";
  let destinationOver : t = "destination-over";
  let destinationIn : t = "destination-in";
  let destinationOut : t = "destination-out";
  let destinationAtop : t = "destination-atop";
  let lighter : t = "lighter";
  let copy : t = "copy";
  let xor : t = "xor";
};

module type LineCapType = {
  type t = pri string;
  let butt : t;
  let round : t;
  let square : t;
};

module LineCap: LineCapType = {
  type t = string;

  let butt : t = "butt";
  let round : t = "round";
  let square : t = "square";
};

module type LineJoinType = {
  type t = pri string;

  let round : t;
  let bevel : t;
  let miter : t;
};

module LineJoin: LineJoinType = {
  type t = string;

  let round : t = "round";
  let bevel : t = "bevel";
  let miter : t = "miter";
};

type style _ =
  | String string: style string
  | Gradient gradient: style gradient;

/* 2d Canvas API, following https://simon.html5.org/dump/html5-canvas-cheat-sheet.html */
external save : unit = "" [@@bs.send.pipe: t];
external restore : unit = "" [@@bs.send.pipe: t];

/* Transformation */
external scale : x::float => y::float => unit = "" [@@bs.send.pipe: t];
external rotate : float => unit = "" [@@bs.send.pipe: t];
external translate : x::float => y::float => unit = "" [@@bs.send.pipe: t];
external transform : m11::float => m12::float => m21::float => m22::float => dx::float => dy::float => unit = "" [@@bs.send.pipe: t];
external setTransform : m11::float => m12::float => m21::float => m22::float => dx::float => dy::float => unit = "" [@@bs.send.pipe: t];

/* Compositing */
external globalAlpha : t => float => unit = "" [@@bs.set];
external globalCompositeOperation : t => Composite.t => unit = "" [@@bs.set];

/* Line Styles */
external lineWidth : t => float => unit = "" [@@bs.set];
external lineCap : t => LineCap.t => unit = "" [@@bs.set];
external lineJoin : t => LineJoin.t => unit = "" [@@bs.set];
external miterLimit : t => float => unit = "" [@@bs.set];

/* Colors, Styles, and Shadows */
external setFillStyle : t => 'a => unit = "" [@@bs.set];
external setStrokeStyle: t => 'a => unit = "" [@@bs.set];

let setStrokeStyle (type a) (ctx: t) (s: style a) => switch (s) {
  | (Gradient v) => setStrokeStyle ctx v
  | (String v) => setStrokeStyle ctx v
};

let setFillStyle (type a) (ctx: t) (s: style a) => switch (s) {
  | (Gradient v) => setFillStyle ctx v
  | (String v) => setFillStyle ctx v
};

let reifyStyle x => {
  if (Js.typeof x == "string") {
    String (Obj.magic x)
  } else {
    (Obj.magic (Gradient (Obj.magic x)))
  };
};

external fillStyle : t => 'a = "" [@@bs.get];
external strokeStyle : t => 'a = "" [@@bs.get];

let fillStyle (ctx: t): style 'a =>
  ctx |> fillStyle |> reifyStyle;
let strokeStyle (ctx: t): style 'a =>
  ctx |> strokeStyle |> reifyStyle;

external shadowOffsetX : t => float => unit = "" [@@bs.set];
external shadowOffsetY : t => float => unit = "" [@@bs.set];
external shadowBlur : t => float => unit = "" [@@bs.set];
external shadowColor : t => string => unit = "" [@@bs.set];

/* Gradients */
external createLinearGradient : x0::float => y0::float => x1::float => y1::float => gradient = "" [@@bs.send.pipe: t];
external createRadialGradient : x0::float => y0::float => x1::float => y1::float => r0::float => r1::float => gradient = "" [@@bs.send.pipe: t];
external addColorStop: float => string => unit = "" [@@bs.send.pipe: gradient];
/* TODO
 * createPattern
 */

/* Paths */
external beginPath : unit = "" [@@bs.send.pipe: t];
external closePath : unit = "" [@@bs.send.pipe: t];
external fill : unit = "" [@@bs.send.pipe: t];
external stroke : unit = "" [@@bs.send.pipe: t];
external clip : unit = "" [@@bs.send.pipe: t];
external moveTo : x::float => y::float => unit = "" [@@bs.send.pipe: t];
external lineTo : x::float => y::float => unit = "" [@@bs.send.pipe: t];
external quadraticCurveTo : cp1x::float => cp1y::float => x::float => y::float => unit = "" [@@bs.send.pipe: t];
external bezierCurveTo : cp1x::float => cp1y::float => cp2x::float => cp2y::float => x::float => y::float => unit = "" [@@bs.send.pipe: t];
external arcTo : x1::float => y1::float => x2::float => y2::float => r::float => unit = "" [@@bs.send.pipe: t];
external arc : x::float => y::float => r::float => startAngle::float => endAngle::float => anticw::Js.boolean => unit = "" [@@bs.send.pipe: t];
external rect : x::float => y::float => w::float => h::float => unit = "" [@@bs.send.pipe: t];
external isPointInPath : x::float => y::float => Js.boolean = "" [@@bs.send.pipe: t];

/* Text */
external font : t => string => unit = "" [@@bs.set];
external textAlign : t => string => unit = "" [@@bs.set];
external textBaseline : t => string => unit = "" [@@bs.set];
external fillText : string => x::float => y::float => unit = "" [@@bs.send.pipe: t];
external strokeText : string => x::float => y::float => unit = "" [@@bs.send.pipe: t];
/* TODO: measureText(); optional maxwidth arg for fillText/strokeText */

/* Rectangles */
external fillRect : x::float => y::float => w::float => h::float => unit = "" [@@bs.send.pipe: t];
external strokeRect : x::float => y::float => w::float => h::float => unit = "" [@@bs.send.pipe: t];
external clearRect : x::float => y::float => w::float => h::float => unit = "" [@@bs.send.pipe: t];

/* TODO
 * createImageData
 * getImageData
 * putImageData
 * ImageData interface: width/height/data
 * CanvasPixelArray interface: length
 */
