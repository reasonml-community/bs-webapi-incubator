open ReasonJs.Dom;

let tlist = document
  |> Document.createElement "div"
  |> Element.classList;

let _ = DomTokenList.length tlist;

let _ = DomTokenList.item 3 tlist;

DomTokenList.add "my-class" tlist;
DomTokenList.addMany [| "my-class", "my-other-class" |] tlist;
let _ = DomTokenList.contains "my-class" tlist;
DomTokenList.forEach (fun item _ => print_endline item) tlist;
DomTokenList.remove "my-class" tlist;
DomTokenList.removeMany [| "my-class", "my-other-class" |] tlist;
DomTokenList.replace "my-class" "my-other-class" tlist;
let _ = DomTokenList.supports "my-class" tlist;
let _ = DomTokenList.toggle "my-class" tlist;
let _ = DomTokenList.toggleForced "my-class" tlist;
let _ = DomTokenList.toString tlist;
