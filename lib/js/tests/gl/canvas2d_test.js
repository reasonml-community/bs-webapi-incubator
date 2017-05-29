'use strict';

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

ctx.font = "10px Courier";

ctx.textAlign = "left";

ctx.textBaseline = "top";

ctx.fillText("hi", 1, 0);

ctx.strokeText("hi", 1, 0);

ctx.fillRect(1, 0, 10, 10);

ctx.strokeRect(1, 0, 10, 10);

ctx.clearRect(1, 0, 10, 10);

exports.canvasEl       = canvasEl;
exports.ctx            = ctx;
exports.linearGradient = linearGradient;
/* canvasEl Not a pure module */
