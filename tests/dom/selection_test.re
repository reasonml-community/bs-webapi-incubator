open ReasonJs;

let el = document |> Document.createElement "strong";
let sel = document |> Document.getSelection;
let range = Range.make ();

let _ = Selection.anchorNode sel;
let _ = Selection.anchorOffset sel;
let _ = Selection.focusNode sel;
let _ = Selection.focusOffset sel;
let _ = Selection.isCollapsed sel;
let _ = Selection.rangeCount sel;

let _ = Selection.getRangeAt 0 sel;
Selection.collapse el 0 sel;
Selection.extend el 0 sel;
Selection.collapseToStart sel;
Selection.collapseToEnd sel;
Selection.selectAllChildren el sel;
Selection.addRange range sel;
Selection.removeRange range sel;
Selection.removeAllRanges sel;
Selection.deleteFromDocument sel;
let _ = Selection.toString sel;
let _ = Selection.containsNode el (Js.Boolean.to_js_boolean true) sel;
