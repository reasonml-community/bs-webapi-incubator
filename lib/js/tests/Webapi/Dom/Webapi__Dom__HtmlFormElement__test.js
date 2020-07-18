'use strict';


function test_data(formElement) {
  return new FormData(formElement).get("foo");
}

exports.test_data = test_data;
/* No side effect */
