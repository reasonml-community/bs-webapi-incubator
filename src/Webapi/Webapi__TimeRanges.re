/**
 * Spec: https://html.spec.whatwg.org/multipage/media.html#timeranges
 */

type t;

/** Properties */

[@bs.get] external length: t => int = "length";

/** Methods */

/**
 * Throws an "IndexSizeError" DOMException if the index is out of range.
 */
[@bs.send] external startExn: (t, int) => int = "start";

/**
 * Throws an "IndexSizeError" DOMException if the index is out of range.
 */
[@bs.send] external endExn: (t, int) => int = "end";
