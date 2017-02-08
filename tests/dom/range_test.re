open ReasonJs;

let el = document |> Document.createElement "strong";

let range = Range.make ();
let _ = Range.collapsed range;
let _ = Range.commonAncestorContainer range;
let _ = Range.endContainer range;
let _ = Range.endOffset range;
let _ = Range.startContainer range;
let _ = Range.startOffset range;

Range.setStart el 0 range;
Range.setEnd el 0 range;
Range.setStartBefore el range;
Range.setStartAfter el range;
Range.setEndBefore el range;
Range.setEndAfter el range;
Range.selectNode el range;
Range.selectNodeContents el range;
Range.collapse (Js.Boolean.to_js_boolean true) range;
let _ = Range.cloneContents range;
Range.deleteContents range;
let _ = Range.extractContents range;
Range.insertNode el range;
Range.surroundContents el range;
let _ = Range.compareBoundaryPoints 0 range range;
let _ = Range.cloneRange range;
Range.detach range;
let _ = Range.toString range;
let _ = Range.comparePoint el 0 range;
let _ = Range.createContextualFragment "<strong>stuff</strong>" range;
let _ = Range.getBoundingClientRect range;
let _ = Range.getClientRects range;
let _ = Range.intersectsNode el range;
let _ = Range.isPointInRange el 0 range;
