open ReasonJs;

let el = Document.createElement document "strong";
let sel = Document.getSelection document;
let range = Range.make ();

let _ = Selection.anchorNode sel;
let _ = Selection.anchorOffset sel;
let _ = Selection.focusNode sel;
let _ = Selection.focusOffset sel;
let _ = Selection.isCollapsed sel;
let _ = Selection.rangeCount sel;

let _ = Selection.getRangeAt sel 0;
Selection.collapse sel el 0;
Selection.extend sel el 0;
Selection.collapseToStart sel;
Selection.collapseToEnd sel;
Selection.selectAllChildren sel el;
Selection.addRange sel range;
Selection.removeRange sel range;
Selection.removeAllRanges sel;
Selection.deleteFromDocument sel;
let _ = Selection.toString sel;
let _ = Selection.containsNode sel el (Js.Boolean.to_js_boolean true);
