type t;

/* Canvas API, following https://simon.html5.org/dump/html5-canvas-cheat-sheet.html */

external save : unit = "" [@@bs.send.pipe: t];
external restore : unit = "" [@@bs.send.pipe: t];

/* Transformation */
external scale : float => float => unit = "" [@@bs.send.pipe: t];
external rotate : float => unit = "" [@@bs.send.pipe: t];
external translate : float => float => unit = "" [@@bs.send.pipe: t];
external transform : float => float => float => float => float => float => unit = "" [@@bs.send.pipe: t];
external setTransform : float => float => float => float => float => float => unit = "" [@@bs.send.pipe: t];

/* Compositing */
external globalAlpha : t => float => unit = "" [@@bs.set];
external globalCompositeOperation : t => string => unit = "" [@@bs.set];

/* Line Styles */
external lineWidth : t => float => unit = "" [@@bs.set];
external lineCap : t => string => unit = "" [@@bs.set];
external lineJoin : t => string => unit = "" [@@bs.set];
external miterLimit : t => float => unit = "" [@@bs.set];

/* Colors, Styles, and Shadows */
external strokeStyle : t => string => unit = "" [@@bs.set];
external fillStyle : t => string => unit = "" [@@bs.set];
external shadowOffsetX : t => float => unit = "" [@@bs.set];
external shadowOffsetY : t => float => unit = "" [@@bs.set];
external shadowBlur : t => float => unit = "" [@@bs.set];
external shadowColor : t => string => unit = "" [@@bs.set];

/* Gradients */
/* TODO
 * createLinearGradient
 * createRadialGradient
 * createPattern
 * gradient.addColorStop
 */

/* Paths */
external beginPath : unit = "" [@@bs.send.pipe: t];
external closePath : unit = "" [@@bs.send.pipe: t];
external fill : unit = "" [@@bs.send.pipe: t];
external stroke : unit = "" [@@bs.send.pipe: t];
external clip : unit = "" [@@bs.send.pipe: t];
external moveTo : float => float => unit = "" [@@bs.send.pipe: t];
external lineTo : float => float => unit = "" [@@bs.send.pipe: t];
external quadraticCurveTo : float => float => float => float => unit = "" [@@bs.send.pipe: t];
external bezierCurveTo : float => float => float => float => float => float => unit = "" [@@bs.send.pipe: t];
external arcTo : float => float => float => float => float => unit = "" [@@bs.send.pipe: t];
external arc : float => float => float => float => float => bool => unit = "" [@@bs.send.pipe: t];
external rect : float => float => float => float => unit = "" [@@bs.send.pipe: t];
external isPointInPath : float => float => bool = "" [@@bs.send.pipe: t];

/* Text */
external font : t => string => unit = "" [@@bs.set];
external textAlign : t => string => unit = "" [@@bs.set];
external textBaseline : t => string => unit = "" [@@bs.set];
external fillText : string => float => float => unit = "" [@@bs.send.pipe: t];
external strokeText : string => float => float => unit = "" [@@bs.send.pipe: t];
/* TODO: measureText(); optional maxwidth arg for fillText/strokeText */

/* Rectangles */
external fillRect : float => float => float => float => unit = "" [@@bs.send.pipe: t];
external strokeRect : float => float => float => float => unit = "" [@@bs.send.pipe: t];
external clearRect : float => float => float => float => unit = "" [@@bs.send.pipe: t];

/* TODO
 * createImageData
 * getImageData
 * putImageData
 * ImageData interface: width/height/data
 * CanvasPixelArray interface: length
 */

