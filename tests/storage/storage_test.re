open ReasonJs.Storage;

let _ = localStorage |> getItem "my-item";
let _ = localStorage |> setItem "my-item" "foo";
let _ = localStorage |> removeItem "my-item";
let _ = localStorage |> clear;
let _ = localStorage |> key 42;
let _ = localStorage |> length;