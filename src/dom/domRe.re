type animation;
type attr;
type comment;
type cssStyleDeclaration;
type cssStyleSheet;
type document;
type documentFragment;
type documentImplementation;
type documentType;
type domRect;
type domSettableTokenList;
type domStringMap;
type domTokenList;
type element;
type event;
type eventTarget;
type history;
type htmlCollection;
type htmlDocument;
type htmlElement;
type location;
type node;
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
| _     => Unknown
