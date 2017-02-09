open ReasonJs;

let el = document
  |> Document.createElement "strong"
  |> Element.asHtmlElement
  |> TestHelpers.unsafelyUnwrapOption;
let el2 = document
  |> Document.createElement "small"
  |> Element.asHtmlElement
  |> TestHelpers.unsafelyUnwrapOption;
let event = document |> Document.createEvent "my-event";

let _ = HtmlElement.accessKey el;
let _ = HtmlElement.setAccessKey el "";
let _ = HtmlElement.accessKeyLabel el;
let _ = HtmlElement.contentEditable el;
let _ = HtmlElement.setContentEditable el HtmlElement.Inherit;
let _ = HtmlElement.isContentEditable el;
let _ = HtmlElement.contextMenu el;
let _ = HtmlElement.setContextMenu el el2;
let _ = HtmlElement.dataset el;
let _ = HtmlElement.dir el;
let _ = HtmlElement.setDir el DomRe.Rtl;
let _ = HtmlElement.draggable el;
let _ = HtmlElement.setDraggable el true;
let _ = HtmlElement.dropzone el;
let _ = HtmlElement.hidden el;
let _ = HtmlElement.setHidden el true;
let _ = HtmlElement.itemScope el;
let _ = HtmlElement.setItemScope el true;
let _ = HtmlElement.itemType el;
let _ = HtmlElement.itemId el;
let _ = HtmlElement.setItemId el "my-id";
let _ = HtmlElement.itemRef el;
let _ = HtmlElement.itemProp el;
let _ = HtmlElement.itemValue el;
let _ = HtmlElement.setItemValue el [%bs.raw "{}"];
let _ = HtmlElement.lang el;
let _ = HtmlElement.setLang el "en";
let _ = HtmlElement.offsetHeight el;
let _ = HtmlElement.offsetLeft el;
let _ = HtmlElement.offsetParent el;
let _ = HtmlElement.offsetTop el;
let _ = HtmlElement.offsetWidth el;
let _ = HtmlElement.spellcheck el;
let _ = HtmlElement.setSpellcheck el true;
let _ = HtmlElement.style el;
/* let _ = HtmlElement.setStyle el CSSStyleDeclaration.t; /* TODO: No way to make a CSSStyleDeclaration at the moment */*/
let _ = HtmlElement.tabIndex el;
let _ = HtmlElement.setTabIndex el 42;
let _ = HtmlElement.title el;
let _ = HtmlElement.setTitle el "hovertext!";
let _ = HtmlElement.translate el;
let _ = HtmlElement.setTranslate el true;

HtmlElement.blur el;
HtmlElement.click el;
HtmlElement.focus el;
HtmlElement.forceSpellCheck el;
