'use strict';


var params = new URLSearchParams("key1=value1&key2=value2");

params.forEach((function (prim, prim$1) {
        console.log(prim, prim$1);
        
      }));

var entries = Array.from(params.entries());

console.log(entries);

exports.params = params;
exports.entries = entries;
/* params Not a pure module */
