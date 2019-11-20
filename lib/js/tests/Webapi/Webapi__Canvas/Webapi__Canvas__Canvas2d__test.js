'use strict';

var List = require("bs-platform/lib/js/list.js");
var Webapi = require("../../../src/Webapi.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Webapi__Canvas__Canvas2d = require("../../../src/Webapi/Webapi__Canvas/Webapi__Canvas__Canvas2d.js");

var canvasEl = document.createElement("canvas");

var ctx = canvasEl.getContext("2d");

ctx.save();

ctx.restore();

ctx.scale(1, 2);

ctx.rotate(2);

ctx.translate(2, 3);

ctx.transform(1, 2, 1, 1, 1, 1);

ctx.globalAlpha = 0.9;

ctx.globalCompositeOperation = Webapi__Canvas__Canvas2d.Composite.sourceOver;

ctx.lineWidth = 1;

ctx.lineCap = Webapi__Canvas__Canvas2d.LineCap.butt;

ctx.lineJoin = Webapi__Canvas__Canvas2d.LineJoin.round;

ctx.miterLimit = 10;

Webapi__Canvas__Canvas2d.setStrokeStyle(ctx, /* String */0, "red");

Webapi__Canvas__Canvas2d.setFillStyle(ctx, /* String */0, "red");

var match = Webapi__Canvas__Canvas2d.fillStyle(ctx);

switch (match[0]) {
  case /* String */0 :
      console.log(match[1]);
      break;
  case /* Gradient */1 :
      match[1].addColorStop(0.0, "red");
      break;
  case /* Pattern */2 :
      break;
  
}

var match$1 = Webapi__Canvas__Canvas2d.strokeStyle(ctx);

switch (match$1[0]) {
  case /* String */0 :
      console.log(match$1[1]);
      break;
  case /* Gradient */1 :
      match$1[1].addColorStop(1.2, "blue");
      break;
  case /* Pattern */2 :
      break;
  
}

ctx.shadowOffsetX = 1;

ctx.shadowOffsetY = 1;

ctx.shadowBlur = 1;

ctx.shadowColor = "red";

ctx.beginPath();

ctx.closePath();

ctx.fill();

ctx.stroke();

ctx.clip();

ctx.moveTo(1, 1);

ctx.lineTo(1, 2);

ctx.quadraticCurveTo(1, 1, 1, 1);

ctx.bezierCurveTo(1, 1, 2, 2, 4, 4);

ctx.arcTo(1, 1, 2, 2, 4);

ctx.arc(1, 1, 4, 1, 3, true);

ctx.rect(0, 0, 10, 10);

ctx.isPointInPath(0, 0);

var linearGradient = ctx.createLinearGradient(0.0, 0.0, 0.0, 0.0);

Webapi__Canvas__Canvas2d.setStrokeStyle(ctx, /* Gradient */1, linearGradient);

ctx.createRadialGradient(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

linearGradient.addColorStop(0.0, "red");

var partial_arg = document.createElement("img");

List.map((function (param) {
        return createPattern(ctx, partial_arg, (function () {
                        switch (param) {
                          case 108828507 :
                              return "repeat";
                          case 646437021 :
                              return "repeat-x";
                          case 646437022 :
                              return "repeat-y";
                          case -695430532 :
                              return "no-repeat";
                          
                        }
                      })());
      }), /* :: */[
      /* noRepeat */-695430532,
      /* :: */[
        /* repeat */108828507,
        /* :: */[
          /* repeatX */646437021,
          /* :: */[
            /* repeatY */646437022,
            /* [] */0
          ]
        ]
      ]
    ]);

var measureText = ctx.measureText("foo");

var width = measureText.width;

ctx.fillText("foo!", 0.0, 0.0, width);

ctx.strokeText("foo!", 0.0, 0.0, width);

var imageData = ctx.createImageData(0.0, 0.0);

ctx.createImageData(imageData);

imageData.width;

imageData.height;

ctx.getImageData(0.0, 0.0, 0.0, 0.0);

ctx.putImageData(imageData, 0.0, 0.0, undefined, undefined, undefined, undefined);

ctx.putImageData(imageData, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

ctx.font = "10px Courier";

ctx.textAlign = "left";

ctx.textBaseline = "top";

((function (eta) {
        var param = undefined;
        var param$1 = eta;
        param$1.fillText("hi", 1, 0, param !== undefined ? Caml_option.valFromOption(param) : undefined);
        return /* () */0;
      })(ctx));

((function (eta) {
        var param = undefined;
        var param$1 = eta;
        param$1.strokeText("hi", 1, 0, param !== undefined ? Caml_option.valFromOption(param) : undefined);
        return /* () */0;
      })(ctx));

ctx.fillRect(1, 0, 10, 10);

ctx.strokeRect(1, 0, 10, 10);

ctx.clearRect(1, 0, 10, 10);

exports.canvasEl = canvasEl;
exports.ctx = ctx;
exports.linearGradient = linearGradient;
exports.measureText = measureText;
exports.width = width;
exports.imageData = imageData;
/* canvasEl Not a pure module */
