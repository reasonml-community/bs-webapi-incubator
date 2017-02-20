'use strict';

var Curry      = require("bs-platform/lib/js/curry");
var Pervasives = require("bs-platform/lib/js/pervasives");

var p = new Promise(function (resolve, _) {
      return Curry._1(resolve, 123);
    });

var p2 = p.then(function (n) {
          var match = +(n % 2 === 0);
          if (match !== 0) {
            return Promise.reject(Pervasives.string_of_int(n));
          }
          else {
            return Promise.resolve((n << 1));
          }
        }).then(Pervasives.string_of_float).then(Pervasives.print_endline);

p2.catch(function (error) {
      console.log(error);
      return /* () */0;
    });

p.then(function (n) {
          return (n << 1);
        }).then(Pervasives.string_of_int).then(Pervasives.print_endline);

exports.p  = p;
exports.p2 = p2;
/* p Not a pure module */
