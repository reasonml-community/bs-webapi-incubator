open ReasonJs;

let el = Document.createElement document "strong";

let range = Range.make ();
let _ = Range.collapsed range;
let _ = Range.commonAncestorContainer range;
let _ = Range.endContainer range;
let _ = Range.endOffset range;
let _ = Range.startContainer range;
let _ = Range.startOffset range;

Range.setStart range el 0;
Range.setEnd range el 0;
Range.setStartBefore range el;
Range.setStartAfter range el;
Range.setEndBefore range el;
Range.setEndAfter range el;
Range.selectNode range el;
Range.selectNodeContents range el;
Range.collapse range (Js.Boolean.to_js_boolean true);
let _ = Range.cloneContents range;
Range.deleteContents range;
let _ = Range.extractContents range;
Range.insertNode range el;
Range.surroundContents range el;
let _ = Range.compareBoundaryPoints range 0 range;
let _ = Range.cloneRange range;
Range.detach range;
let _ = Range.toString range;
let _ = Range.comparePoint range el 0;
let _ = Range.createContextualFragment range "<strong>stuff</strong>";
let _ = Range.getBoundingClientRect range;
let _ = Range.getClientRects range;
let _ = Range.intersectsNode range el;
let _ = Range.isPointInRange range el 0;
