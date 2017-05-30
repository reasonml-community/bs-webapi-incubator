'use strict';

var List       = require("bs-platform/lib/js/list.js");
var Canvas2dRe = require("../../src/gl/canvas2dRe.js");

var canvasEl = document.createElement("canvas");

var ctx = canvasEl.getContext("2d");

ctx.save();

ctx.restore();

ctx.scale(1, 2);

ctx.rotate(2);

ctx.translate(2, 3);

ctx.transform(1, 2, 1, 1, 1, 1);

ctx.globalAlpha = 0.9;

ctx.globalCompositeOperation = Canvas2dRe.Composite[/* sourceOver */0];

ctx.lineWidth = 1;

ctx.lineCap = Canvas2dRe.LineCap[/* butt */0];

ctx.lineJoin = Canvas2dRe.LineJoin[/* round */0];

ctx.miterLimit = 10;

Canvas2dRe.setStrokeStyle(ctx, /* String */0, "red");

Canvas2dRe.setFillStyle(ctx, /* String */0, "red");

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

Canvas2dRe.setStrokeStyle(ctx, /* Gradient */1, linearGradient);

ctx.createRadialGradient(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

linearGradient.addColorStop(0.0, "red");

var partial_arg = document.createElement("img");

List.map(function (param) {
      return createPattern(ctx, partial_arg, function () {
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
                  }());
    }, /* :: */[
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

ctx.font = "10px Courier";

ctx.textAlign = "left";

ctx.textBaseline = "top";

(function (eta) {
      var param = /* None */0;
      var param$1 = eta;
      param$1.fillText("hi", 1, 0, param ? param[0] : undefined);
      return /* () */0;
    }(ctx));

(function (eta) {
      var param = /* None */0;
      var param$1 = eta;
      param$1.strokeText("hi", 1, 0, param ? param[0] : undefined);
      return /* () */0;
    }(ctx));

ctx.fillRect(1, 0, 10, 10);

ctx.strokeRect(1, 0, 10, 10);

ctx.clearRect(1, 0, 10, 10);

exports.canvasEl       = canvasEl;
exports.ctx            = ctx;
exports.linearGradient = linearGradient;
exports.measureText    = measureText;
exports.width          = width;
exports.imageData      = imageData;
/* canvasEl Not a pure module */
