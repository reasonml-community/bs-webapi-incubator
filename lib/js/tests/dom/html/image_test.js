'use strict';


var imageData = new ImageData(undefined, 0.0, 0.0);

var arr = new Uint8ClampedArray(/* int array */[]);

var partial_arg = /* Some */[arr];

function withData() {
  return new ImageData(partial_arg ? partial_arg[0] : undefined, 0.0, 0.0);
}

imageData.height;

imageData.width;

exports.imageData = imageData;
exports.arr       = arr;
exports.withData  = withData;
/* imageData Not a pure module */
