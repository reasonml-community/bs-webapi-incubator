'use strict';


var params = new URLSearchParams("key1=value1&key2=value2");

params.forEach(function (prim, prim$1) {
      console.log(prim, prim$1);
      
    });

function test_entries(params) {
  return Array.from(params.entries());
}

console.log(Array.from(params.entries()));

exports.params = params;
exports.test_entries = test_entries;
/* params Not a pure module */
