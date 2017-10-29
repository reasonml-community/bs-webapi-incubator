'use strict';

var Js_null = require("bs-platform/lib/js/js_null.js");

function createDocument(namespace, qualifiedName, docType) {
  var partial_arg = Js_null.from_opt(docType);
  var partial_arg$1 = Js_null.from_opt(namespace);
  return (function (param) {
      return param.createDocument(partial_arg$1, qualifiedName, partial_arg);
    });
}

exports.createDocument = createDocument;
/* No side effect */
