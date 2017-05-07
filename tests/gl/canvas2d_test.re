open ReasonJs.Canvas2d;
open ReasonJs.CanvasElement;
open ReasonJs.Dom;

let canvasEl = Document.createElement "canvas" document;
let ctx = getContext2d canvasEl;

ctx |> save;
ctx |> restore;

ctx |> scale 1. 2.;
ctx |> rotate 2.;
ctx |> translate 2. 3.;
ctx |> transform m11::1. m12::2. m21::1. m22::1. dx::1. dy::1.;

globalAlpha ctx 0.9;
globalCompositeOperation ctx "source-over";

lineWidth ctx 1.;
lineCap ctx "round";
lineJoin ctx "round";
miterLimit ctx 10.;

strokeStyle ctx "red";
fillStyle ctx "red";
shadowOffsetX ctx 1.;
shadowOffsetY ctx 1.;
shadowBlur ctx 1.;
shadowColor ctx "red";

ctx |> beginPath;
ctx |> closePath;
ctx |> fill;
ctx |> stroke;
ctx |> clip;
ctx |> moveTo 1. 1.;
ctx |> lineTo 1. 1.;
ctx |> quadraticCurveTo cp1x::1. cp1y::1. x::1. y::1.;
ctx |> bezierCurveTo cp1x::1. cp1y::1. cp2x::2. cp2y::2. x::4. y::4.;
ctx |> arcTo x1::1. y1::1. x2::2. y2::2. r::4.;
ctx |> arc x::1. y::1. r::4. startAngle::1. endAngle::3. anticw::Js.true_;
ctx |> rect x::0. y::0. w::10. h::10.;
let _ = ctx |> isPointInPath x::0. y::0.;

font ctx "10px Courier";
textAlign ctx "left";
textBaseline ctx "top";
ctx |> fillText "hi" x::1. y::0.;
ctx |> strokeText "hi" x::1. y::0.;

ctx |> fillRect x::1. y::0. w::10. h::10.;
ctx |> strokeRect x::1. y::0. w::10. h::10.;
ctx |> clearRect x::1. y::0. w::10. h::10.;
