open ReasonJs;

let el = document |> Document.createElement "strong";

let _ = Document.characterSet document;
let _ = Document.compatMode document;
let _ = Document.docType document;
let _ = Document.documentElement document;
let _ = Document.documentURI document;
let _ = Document.hidden document;
let _ = Document.implementation document;
let _ = Document.lastStyleSheetSet document;
let _ = Document.pointerLockElement document;
let _ = Document.preferredStyleSheetSet document;
let _ = Document.scrollingElement document;
let _ = Document.selectedStyleSheetSet document;
let _ = Document.setSelectedStyleSheetSet document"muh-stylesheet";
let _ = Document.styleSheets document;
let _ = Document.styleSheetSets document;
let _ = Document.visibilityState document;

let _ = Document.adoptNode el document;
let _ = Document.createAttribute "data-foo" document;
let _ = Document.createAttributeNS "http://..." "foo" document;
let _ = Document.createComment "witty comment" document;
let _ = Document.createDocumentFragment document;
let _ = Document.createElement "div" document;
let _ = Document.createElementWithOptions "div" [%bs.raw "{}"] document; /* I've no idea what this options object is supposed to be, even the spec doesn't seem to bother explaining it */
let _ = Document.createElementNS "http://..." "foo" document;
let _ = Document.createElementNSWithOptions "http://..." "div" [%bs.raw "{}"] document; /* I've no idea what this options object is supposed to be, even the spec doesn't seem to bother explaining it */
let _ = Document.createEvent "MyCustomEvent" document;
let _ = Document.createNodeIterator (el |> Element.asNode) document;
let _ = Document.createNodeIteratorWithWhatToShow (el |> Element.asNode) 0 document;
let _ = Document.createNodeIteratorWithWhatToShowFilter (el |> Element.asNode) 0 (NodeFilter.make (fun _ => 0)) document;
let _ = Document.elementFromPoint 0 0 document;
let _ = Document.elementsFromPoint 0 0 document;
let _ = Document.enableStyleSheetsForSet "my-stylesheet-set" document;
let _ = Document.exitPointerLock document;
let _ = Document.getAnimations document;
let _ = Document.getElementsByClassName "lstlisting" document;
let _ = Document.getElementsByTagName "code" document;
let _ = Document.getElementsByTagNameNS "http://..." "foo" document;
let _ = Document.importNode el document;
let _ = Document.importNodeDeep el document;
/* TODO: These get dead code eliminated
let _ = Document.registerElement document"my-component";
let _ = Document.registerElementWithOptions document"my-component" [%bs.raw "{}"];
*/
let _ = Document.getElementById "root" document;
let _ = Document.querySelector ".lstlisting" document;
let _ = Document.querySelectorAll ".lstlisting" document;
