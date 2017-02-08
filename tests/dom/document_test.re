open ReasonJs;

let el = document |> Document.createElement "strong";

/* Document interface */
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
let _ = Document.createNodeIterator el document;
let _ = Document.createNodeIteratorWithWhatToShow el 0 document;
let _ = Document.createNodeIteratorWithWhatToShowFilter el 0 (NodeFilter.make (fun _ => 0)) document;
let _ = Document.elementFromPoint 0 0 document;
let _ = Document.elementsFromPoint 0 0 document;
let _ = Document.enableStyleSheetsForSet "my-stylesheet-set" document;
let _ = Document.exitPointerLock document;
let _ = Document.getAnimations document;
let _ = Document.getElementsByClassName "lstlisting" document;
let _ = Document.getElementsByTagName "code" document;
let _ = Document.getElementsByTagNameNS "http://..." "foo" document;
let _ = Document.importNode el document;
let _ = Document.importNodeDeep el (Js.Boolean.to_js_boolean true) document;
/* TODO: These get dead code eliminated
let _ = Document.registerElement document"my-component";
let _ = Document.registerElementWithOptions document"my-component" [%bs.raw "{}"];
*/
let _ = Document.getElementById "root" document;
let _ = Document.querySelector ".lstlisting" document;
let _ = Document.querySelectorAll ".lstlisting" document;

/* HTMLDocument interface */
let _ = Document.activeElement document;
let _ = Document.body document;
let _ = Document.setBody document el;
let _ = Document.cookie document;
let _ = Document.setCookie document "foo=bar;reason=ml";
let _ = Document.defaultView document;
let _ = Document.designMode document;
let _ = Document.setDesignMode document "on";
let _ = Document.dir document;
let _ = Document.setDir document "ltr";
let _ = Document.domain document;
let _ = Document.setDomain document "reason.ml";
let _ = Document.embeds document;
let _ = Document.forms document;
let _ = Document.head document;
let _ = Document.images document;
let _ = Document.lastModified document;
let _ = Document.links document;
let _ = Document.location document;
let _ = Document.setLocation document "http://reason.ml";
let _ = Document.plugins document;
let _ = Document.readyState document;
let _ = Document.referrer document;
let _ = Document.scripts document;
let _ = Document.title document;
let _ = Document.setTitle document "Reason: Rapid Expressive Systems Programming.";
let _ = Document.url document;

Document.close document;
let _ = Document.execCommand "copy" (Js.Boolean.to_js_boolean false) Js.Null.empty document;
let _ = Document.getElementsByName "angry-joe" document;
let _ = Document.getSelection document;
let _ = Document.hasFocus document;
Document.open_ document;
let _ = Document.queryCommandEnabled "copy" document;
let _ = Document.queryCommandIndeterm "cut" document;
let _ = Document.queryCommandSupported "paste" document;
let _ = Document.queryCommandValue "fontName" document;
Document.write "Hello World!" document;
Document.writeln "Hello Newline!" document;
