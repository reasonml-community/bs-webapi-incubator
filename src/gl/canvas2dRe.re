type t;

/* Canvas API, following https://simon.html5.org/dump/html5-canvas-cheat-sheet.html */

external save : unit = "" [@@bs.send.pipe: t];
external restore : unit = "" [@@bs.send.pipe: t];

/* Transformation */
external scale : float => float => unit = "" [@@bs.send.pipe: t];
external rotate : float => unit = "" [@@bs.send.pipe: t];
external translate : float => float => unit = "" [@@bs.send.pipe: t];
external transform : m11::float => m12::float => m21::float => m22::float => dx::float => dy::float => unit = "" [@@bs.send.pipe: t];
external setTransform : m11::float => m12::float => m21::float => m22::float => dx::float => dy::float => unit = "" [@@bs.send.pipe: t];

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

