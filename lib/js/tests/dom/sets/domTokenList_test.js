'use strict';


var tlist = document.createElement("div").classList;

tlist.length;

tlist.item(3);

tlist.add("my-class");

tlist.add("my-class", "my-other-class");

tlist.contains("my-class");

tlist.forEach((function (item, param) {
        console.log(item);
        return /* () */0;
      }));

tlist.remove("my-class");

tlist.remove("my-class", "my-other-class");

tlist.replace("my-class", "my-other-class");

tlist.supports("my-class");

tlist.toggle("my-class");

tlist.toggle("my-class", true);

tlist.toString();

tlist.value;

tlist.value = "foo";

exports.tlist = tlist;
/* tlist Not a pure module */
