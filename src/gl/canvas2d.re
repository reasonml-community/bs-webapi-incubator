type ctx;

/* Canvas API, following https://simon.html5.org/dump/html5-canvas-cheat-sheet.html */

external save : ctx => unit = "save" [@@bs.send];
external restore : ctx => unit = "restore" [@@bs.send];

/* Transformation */
external scale : ctx => float => float => unit = "scale" [@@bs.send];
external rotate : ctx => float => unit = "rotate" [@@bs.send];
external translate : ctx => float => float => unit = "translate" [@@bs.send];
external transform : ctx => float => float => float => float => float => float => unit = "transform" [@@bs.send];
external setTransform : ctx => float => float => float => float => float => float => unit = "setTransform" [@@bs.send];

/* Compositing */
external globalAlpha : ctx => float => unit = "globalAlpha" [@@bs.set];
external globalCompositeOperation : ctx => string => unit = "globalCompositeOperation" [@@bs.set];

/* Line Styles */
external lineWidth : ctx => float => unit = "lineWidth" [@@bs.set];
external lineCap : ctx => string => unit = "lineCap" [@@bs.set];
external lineJoin : ctx => string => unit = "lineJoin" [@@bs.set];
external miterLimit : ctx => float => unit = "miterLimit" [@@bs.set];

/* Colors, Styles, and Shadows */
external strokeStyle : ctx => string => unit = "strokeStyle" [@@bs.set];
external fillStyle : ctx => string => unit = "fillStyle" [@@bs.set];
external shadowOffsetX : ctx => float => unit = "shadowOffsetX" [@@bs.set];
external shadowOffsetY : ctx => float => unit = "shadowOffsetY" [@@bs.set];
external shadowBlur : ctx => float => unit = "shadowBlur" [@@bs.set];
external shadowColor : ctx => string => unit = "shadowColor" [@@bs.set];

/* Gradients */
/* TODO
 * createLinearGradient
 * createRadialGradient
 * createPattern
 * gradient.addColorStop
 */

/* Paths */
external beginPath : ctx => unit = "beginPath" [@@bs.send];
external closePath : ctx => unit = "closePath" [@@bs.send];
external fill : ctx => unit = "fill" [@@bs.send];
external stroke : ctx => unit = "stroke" [@@bs.send];
external clip : ctx => unit = "clip" [@@bs.send];
external moveTo : ctx => float => float => unit = "moveTo" [@@bs.send];
external lineTo : ctx => float => float => unit = "lineTo" [@@bs.send];
external quadraticCurveTo : ctx => float => float => float => float => unit = "quadraticCurveTo" [@@bs.send];
external bezierCurveTo : ctx => float => float => float => float => float => float => unit = "bezierCurveTo" [@@bs.send];
external arcTo : ctx => float => float => float => float => float => unit = "arcTo" [@@bs.send];
external arc : ctx => float => float => float => float => float => bool => unit = "arc" [@@bs.send];
external rect : ctx => float => float => float => float => unit = "rect" [@@bs.send];
external isPointInPath : ctx => float => float => bool = "isPointInPath" [@@bs.send];

/* Text */
external font : ctx => string => unit = "font" [@@bs.set];
external textAlign : ctx => string => unit = "textAlign" [@@bs.set];
external textBaseline : ctx => string => unit = "textBaseline" [@@bs.set];
external fillText : ctx => string => float => float => unit = "fillText" [@@bs.send];
external strokeText : ctx => string => float => float => unit = "strokeText" [@@bs.send];
/* TODO: measureText(); optional maxwidth arg for fillText/strokeText */

/* Rectangles */
external fillRect : ctx => float => float => float => float => unit = "fillRect" [@@bs.send];
external strokeRect : ctx => float => float => float => float => unit = "strokeRect" [@@bs.send];
external clearRect : ctx => float => float => float => float => unit = "clearRect" [@@bs.send];

/* TODO
 * createImageData
 * getImageData
 * putImageData
 * ImageData interface: width/height/data
 * CanvasPixelArray interface: length
 */

