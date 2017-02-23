type animation;
type attr;
type comment;
type cssStyleDeclaration;
type cssStyleSheet;
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

type event;
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
type shadowRoot;
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
