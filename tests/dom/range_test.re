open ReasonJs;

let node = document
  |> Document.createElement "strong";

let range = Range.make ();
let _ = Range.collapsed range;
let _ = Range.commonAncestorContainer range;
let _ = Range.endContainer range;
let _ = Range.endOffset range;
let _ = Range.startContainer range;
let _ = Range.startOffset range;

Range.setStart node 0 range;
Range.setEnd node 0 range;
Range.setStartBefore node range;
Range.setStartAfter node range;
Range.setEndBefore node range;
Range.setEndAfter node range;
Range.selectNode node range;
Range.selectNodeContents node range;
Range.collapse range;
Range.collapseToStart range;
let _ = Range.cloneContents range;
Range.deleteContents range;
let _ = Range.extractContents range;
Range.insertNode node range;
Range.surroundContents node range;
let _ = Range.compareBoundaryPoints 0 range range;
let _ = Range.cloneRange range;
Range.detach range;
let _ = Range.toString range;
let _ = Range.comparePoint node 0 range;
let _ = Range.createContextualFragment "<strong>stuff</strong>" range;
let _ = Range.getBoundingClientRect range;
let _ = Range.getClientRects range;
let _ = Range.intersectsNode node range;
let _ = Range.isPointInRange node 0 range;
