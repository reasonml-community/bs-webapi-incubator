'use strict';


var imageData = new ImageData(0.0, 0.0);

var arr = new Uint8ClampedArray(/* int array */[]);

var withData = new ImageData(arr, 0.0, 0.0);

imageData.height;

imageData.width;

exports.imageData = imageData;
exports.arr       = arr;
exports.withData  = withData;
/* imageData Not a pure module */
