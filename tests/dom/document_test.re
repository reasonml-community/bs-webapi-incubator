open ReasonJs;

let el = Document.createElement document "strong";

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

let _ = Document.adoptNode document el;
let _ = Document.createAttribute document "data-foo";
let _ = Document.createAttributeNS document "http://..." "foo";
let _ = Document.createComment document "witty comment";
let _ = Document.createDocumentFragment document;
let _ = Document.createElement document "div";
let _ = Document.createElementWithOptions document "div" [%bs.raw "{}"]; /* I've no idea what this options object is supposed to be, even the spec doesn't seem to bother explaining it */
let _ = Document.createElementNS document "http://..." "foo";
let _ = Document.createElementNSWithOptions document "http://..." "div" [%bs.raw "{}"]; /* I've no idea what this options object is supposed to be, even the spec doesn't seem to bother explaining it */
let _ = Document.createEvent document "MyCustomEvent";
let _ = Document.createNodeIterator document el;
let _ = Document.createNodeIteratorWithWhatToShow document el 0;
let _ = Document.createNodeIteratorWithWhatToShowFilter document el 0 (NodeFilter.make (fun _ => 0));
let _ = Document.elementFromPoint document 0 0;
let _ = Document.elementsFromPoint document 0 0;
let _ = Document.enableStyleSheetsForSet document "my-stylesheet-set";
let _ = Document.exitPointerLock document;
let _ = Document.getAnimations document;
let _ = Document.getElementsByClassName document "lstlisting";
let _ = Document.getElementsByTagName document "code";
let _ = Document.getElementsByTagNameNS document "http://..." "foo";
let _ = Document.importNode document el;
let _ = Document.importNodeDeep document el (Js.Boolean.to_js_boolean true);
/* TODO: These get dead code eliminated
let _ = Document.registerElement document"my-component";
let _ = Document.registerElementWithOptions document"my-component" [%bs.raw "{}"];
*/
let _ = Document.getElementById document "root";
let _ = Document.querySelector document ".lstlisting";
let _ = Document.querySelectorAll document ".lstlisting";

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
let _ = Document.execCommand document "copy" (Js.Boolean.to_js_boolean false) Js.Null.empty;
let _ = Document.getElementsByName document "angry-joe";
let _ = Document.getSelection document;
let _ = Document.hasFocus document;
Document.open_ document;
let _ = Document.queryCommandEnabled document "copy";
let _ = Document.queryCommandIndeterm document "cut";
let _ = Document.queryCommandSupported document "paste";
let _ = Document.queryCommandValue document "fontName";
Document.write document "Hello World!";
Document.writeln document "Hello Newline!";
