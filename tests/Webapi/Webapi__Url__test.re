open Webapi.Url;

let params = URLSearchParams.make("key1=value1&key2=value2");
URLSearchParams.forEach(
   (value, key) => {
      print_endline(value);
      print_endline(key);
   },
   params
);