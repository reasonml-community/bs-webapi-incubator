'use strict';


var params = new URLSearchParams("key1=value1&key2=value2");

params.forEach((function (value, key) {
        console.log(value);
        console.log(key);
        return /* () */0;
      }));

exports.params = params;
/* params Not a pure module */
