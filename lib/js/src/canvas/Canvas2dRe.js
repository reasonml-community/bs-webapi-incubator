'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Caml_builtin_exceptions = require("bs-platform/lib/js/caml_builtin_exceptions.js");

var Composite = /* module */[
  /* sourceOver */"source-over",
  /* sourceIn */"source-in",
  /* sourceOut */"source-out",
  /* sourceAtop */"source-atop",
  /* destinationOver */"destination-over",
  /* destinationIn */"destination-in",
  /* destinationOut */"destination-out",
  /* destinationAtop */"destination-atop",
  /* lighter */"lighter",
  /* copy */"copy",
  /* xor */"xor"
];

var LineCap = /* module */[
  /* butt */"butt",
  /* round */"round",
  /* square */"square"
];

var LineJoin = /* module */[
  /* round */"round",
  /* bevel */"bevel",
  /* miter */"miter"
];

function setStrokeStyle(ctx, param, v) {
  ctx.strokeStyle = v;
  return /* () */0;
}

function setFillStyle(ctx, param, v) {
  ctx.fillStyle = v;
  return /* () */0;
}

function reifyStyle(x) {
  var instanceOf = (function(x,y) {return +(x instanceof y)});
  var tmp;
  if (typeof x === "string") {
    tmp = /* String */0;
  } else if (Curry._2(instanceOf, x, CanvasGradient)) {
    tmp = /* Gradient */1;
  } else if (Curry._2(instanceOf, x, CanvasPattern)) {
    tmp = /* Pattern */2;
  } else {
    throw [
          Caml_builtin_exceptions.invalid_argument,
          "Unknown canvas style kind. Known values are: String, CanvasGradient, CanvasPattern"
        ];
  }
  return /* tuple */[
          tmp,
          x
        ];
}

function fillStyle(ctx) {
  return reifyStyle(ctx.fillStyle);
}

function strokeStyle(ctx) {
  return reifyStyle(ctx.strokeStyle);
}

exports.Composite = Composite;
exports.LineCap = LineCap;
exports.LineJoin = LineJoin;
exports.setStrokeStyle = setStrokeStyle;
exports.setFillStyle = setFillStyle;
exports.reifyStyle = reifyStyle;
exports.fillStyle = fillStyle;
exports.strokeStyle = strokeStyle;
/* No side effect */
