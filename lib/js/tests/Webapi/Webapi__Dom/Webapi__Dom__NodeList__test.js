'use strict';


var items = document.querySelectorAll(".item");

items.forEach((function (item, param) {
        console.log(item);
        
      }));

exports.items = items;
/* items Not a pure module */
