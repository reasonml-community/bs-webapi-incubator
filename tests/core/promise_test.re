open ReasonJs;

let p = Promise.make
  (fun resolve reject =>
    true ?
      resolve 123 :
      reject "abc");

let (p2: Promise.t unit unit) = Promise.(
  p |> andThen
        (fun n =>
          (n mod 2 == 0) ?
            reject (string_of_int n) :
            resolve (float_of_int (n * 2)))
    |> then_ string_of_float
    |> then_ print_endline
);

p2 |> Promise.catch (fun error => Js.log error);

Promise.(
  p |> then_ (fun n => n * 2)
    |> then_ string_of_int
    |> then_ print_endline
);
