'use strict';


var p = fetch("/greetings");

var p2 = p.then(function (res) {
        return res.text();
      }).then(function (text) {
      console.log(text);
      return /* () */0;
    });

p2.catch(function (err) {
      console.log(err);
      return /* () */0;
    });

p.then(function (res) {
        return res.json();
      }).then(function (json) {
      console.log(json);
      return /* () */0;
    });

exports.p  = p;
exports.p2 = p2;
/* p Not a pure module */
