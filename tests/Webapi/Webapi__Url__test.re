open Webapi.Url;

let params = URLSearchParams.make("key1=value1&key2=value2");
URLSearchParams.forEach(Js.log2, params);
let entries: array((string, string)) = Js.Array.from(URLSearchParams.entries(params));
Js.log(entries);
