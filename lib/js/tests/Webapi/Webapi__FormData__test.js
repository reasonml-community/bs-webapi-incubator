'use strict';


var formData = new FormData(undefined);

formData.append("a", "1");

formData.delete("a");

var entry = formData.entries().next();

entry.done;

entry.value;

formData.get("a");

formData.getAll("a");

formData.has("a");

formData.keys().next();

formData.set("b", "2");

formData.values().next();

var It;

exports.It = It;
exports.formData = formData;
exports.entry = entry;
/* formData Not a pure module */
