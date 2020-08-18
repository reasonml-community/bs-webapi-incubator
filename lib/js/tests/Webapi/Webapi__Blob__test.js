'use strict';


function test_arrayBuffer(blob) {
  return blob.arrayBuffer().then(function (buffer) {
              return Promise.resolve((console.log(buffer.byteLength), undefined));
            });
}

function test_size(blob) {
  console.log(blob.size);
  
}

function test_slice(blob) {
  var blob$1 = blob.slice(0, undefined, undefined);
  console.log(blob$1.size);
  
}

function test_stream(blob) {
  return blob.stream();
}

function test_text(blob) {
  return blob.text().then(function (string) {
              return Promise.resolve((console.log(string), undefined));
            });
}

function test_type(blob) {
  console.log(blob.type);
  
}

exports.test_arrayBuffer = test_arrayBuffer;
exports.test_size = test_size;
exports.test_slice = test_slice;
exports.test_stream = test_stream;
exports.test_text = test_text;
exports.test_type = test_type;
/* No side effect */
