'use strict';


function test_lastModified(file) {
  console.log(file.lastModified);
  
}

function test_name(file) {
  console.log(file.name);
  
}

function test_preview(file) {
  console.log(file.preview);
  
}

exports.test_lastModified = test_lastModified;
exports.test_name = test_name;
exports.test_preview = test_preview;
/* No side effect */
