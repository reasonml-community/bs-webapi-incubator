/**
 * Spec: https://html.spec.whatwg.org/multipage/common-dom-interfaces.html#htmloptionscollection
 */
type t; // TODO: Dom.htmlOptionsCollection;
include Webapi__Dom__HtmlCollection.Impl({ type nonrec t = t; });

/** Properties */

[@bs.set] external setLength: (t, int) => unit = "length";
[@bs.set_index] external setItem: (t, int, Dom.element) => unit = "";
[@bs.set_index] external clearItem: (t, int, Js.null('a)) => unit = "";

[@bs.get] external selectedIndex: t => int = "selectedIndex";
[@bs.set] external setSelectedIndex: (t, int) => int = "selectedIndex";
[@bs.set] external setSelectedElement: (t, Dom.element) => Dom.element = "selectedIndex";

/** Methods */

/**
 * This method will throw a "HierarchyRequestError" DOMException if element is an ancestor of the element into which it is to be inserted.
 */
[@bs.send.pipe: t] external add: (Dom.element) => unit = "add";
[@bs.send.pipe: t] external addBefore: (Dom.element, int) => unit = "add";
[@bs.send.pipe: t] external addBeforeElement: (Dom.element, Dom.element) => unit = "add";
[@bs.send.pipe: t] external remove: int => unit = "remove";
