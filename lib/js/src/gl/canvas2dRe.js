'use strict';

var Curry                   = require("bs-platform/lib/js/curry.js");
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

function setStrokeStyle(ctx, _, v) {
  ctx.setStrokeStyle = v;
  return /* () */0;
}

function setFillStyle(ctx, _, v) {
  ctx.setFillStyle = v;
  return /* () */0;
}

function instanceOf(a, cxr) {
  return Curry._2((function(x,y) {return x instanceof y}), a, cxr);
}

function reifyStyle(x) {
  var $js;
  if (typeof x === "string") {
    $js = /* String */0;
  } else {
    var cxr = CanvasGradient;
    if (Curry._2((function(x,y) {return x instanceof y}), x, cxr)) {
      $js = /* Gradient */1;
    } else {
      var cxr$1 = CanvasPattern;
      if (Curry._2((function(x,y) {return x instanceof y}), x, cxr$1)) {
        $js = /* Pattern */2;
      } else {
        throw [
              Caml_builtin_exceptions.invalid_argument,
              "Unknown canvas style kind. Known values are: String, CanvasGradient, CanvasPattern"
            ];
      }
    }
  }
  return /* tuple */[
          $js,
          x
        ];
}

function fillStyle(ctx) {
  return reifyStyle(ctx.fillStyle);
}

function strokeStyle(ctx) {
  return reifyStyle(ctx.strokeStyle);
}

exports.Composite      = Composite;
exports.LineCap        = LineCap;
exports.LineJoin       = LineJoin;
exports.setStrokeStyle = setStrokeStyle;
exports.setFillStyle   = setFillStyle;
exports.instanceOf     = instanceOf;
exports.reifyStyle     = reifyStyle;
exports.fillStyle      = fillStyle;
exports.strokeStyle    = strokeStyle;
/* No side effect */
