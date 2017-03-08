type animation;
type attr;
type comment;
type cssStyleDeclaration;
type cssStyleSheet;
type dataTransfer; /* Drag and Drop API */
type documentFragment;
type documentImplementation;
type documentType;
type domRect;
type domSettableTokenList;
type domStringMap;
type domTokenList;

type node_like 'a;
type node = node_like unit;
type element_tag 'a;
type element_like 'a = node_like (element_tag 'a);
type element = element_like unit;
type htmlElement_tag 'a;
type htmlElement_like 'a = element_like (htmlElement_tag 'a);
type htmlElement = htmlElement_like unit;
type document_tag 'a;
type document_like 'a = node_like (document_tag 'a);
type document = document_like unit;
type htmlDocument_tag;
type htmlDocument = document_like htmlDocument_tag;

type shadowRoot_tag;
type shadowRoot = node_like shadowRoot_tag;

type event_like 'a;
type event = event_like unit;
type uiEvent_tag 'a;
type uiEvent_like 'a = event_like (uiEvent_tag 'a);
type uiEvent = uiEvent_like unit;
type clipboardEvent_tag;
type clipboardEvent = event_like clipboardEvent_tag;
type compositionEvent_tag;
type compositionEvent = uiEvent_like compositionEvent_tag;
type focusEvent_tag;
type focusEvent = uiEvent_like focusEvent_tag;
type inputEvent_tag;
type inputEvent = uiEvent_like inputEvent_tag;
type keyboardEvent_tag;
type keyboardEvent = uiEvent_like keyboardEvent_tag;
type mouseEvent_tag 'a;
type mouseEvent_like 'a = uiEvent_like (mouseEvent_tag 'a);
type mouseEvent = mouseEvent_like unit;
type pointerEvent_tag;
type pointerEvent = mouseEvent_like pointerEvent_tag;
type touchEvent_tag;
type touchEvent = uiEvent_like touchEvent_tag;
type wheelEvent_tag;
type wheelEvent = uiEvent_like wheelEvent_tag;


type eventTarget;
type history;
type htmlCollection;
type location;
type nodeFilter = {
  acceptNode: element => int /* return type should be NodeFilter.action, but that would create a cycle */
};
type nodeIterator;
type nodeList;
type range;
type selection;
type textNode;
type treeWalker;
type window;

/* special */
type eventPointerId;

type dir =
| Ltr
| Rtl
| Unknown;
let encodeDir = fun /* internal */
| Ltr     => "ltr"
| Rtl     => "rtl"
| Unknown => "";
let decodeDir = fun /* internal */
| "ltr" => Ltr
| "rtl" => Rtl
| _     => Unknown;