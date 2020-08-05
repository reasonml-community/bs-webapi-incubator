open Webapi.Url;

let params = URLSearchParams.make("key1=value1&key2=value2");
URLSearchParams.forEach(Js.log2, params);
let test_entries = params => params |> URLSearchParams.entries |> Js.Array.from;
Js.log(test_entries(params));
