
let unsafelyUnwrapOption = fun
| Some v => v
| None => assert false;
