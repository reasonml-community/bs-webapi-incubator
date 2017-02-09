type t = DomRe.htmlElement;

external asNode : t => DomRe.node = "%identity";
external asEventTarget : t => DomRe.eventTarget = "%identity";
external asElement : t => DomRe.element = "%identity";

type contentEditable =
| True
| False
| Inherit
| Unknown;
let encodeContentEditable = fun /* internal */
| True    => "true"
| False   => "false"
| Inherit => "inherit"
| Unknown => "";
let decodeContentEditable = fun /* internal */
| "true"    => True
| "false"   => False
| "inherit" => Inherit
| _         => Unknown;

external accessKey : t => string = "" [@@bs.get];
external setAccessKey : t => string => unit = "accessKey" [@@bs.set];
external accessKeyLabel : t => string = "" [@@bs.get];
external contentEditable : t => string /* enum */ = "" [@@bs.get];
let contentEditable : t => contentEditable = fun self => decodeContentEditable (contentEditable self);
external setContentEditable : t => string /* enum */ => unit = "contentEditable" [@@bs.set];
let setContentEditable : t => contentEditable => unit = fun  self value => setContentEditable self (encodeContentEditable value);
external isContentEditable : t => Js.boolean = "" [@@bs.get];
let isContentEditable : t => bool = fun self => Js.to_bool (isContentEditable self);
external contextMenu : t => t = "" [@@bs.get]; /* returns HTMLMenuElement */
external setContextMenu : t => t => unit = "contextMenu" [@@bs.set]; /* accepts and returns HTMLMenuElement */
external dataset : t => DomRe.domStringMap = "" [@@bs.get];
external dir : t => string /* enum */ = "" [@@bs.get];
let dir : t => DomRe.dir = fun self => DomRe.decodeDir (dir self);
external setDir : t => string /* enum */ => unit = "dir" [@@bs.set];
let setDir : t => DomRe.dir => unit = fun self value => setDir self (DomRe.encodeDir value);
external draggable : t => Js.boolean = "" [@@bs.get];
let draggable : t => bool = fun self => Js.to_bool (draggable self);
external setDraggable : t => Js.boolean => unit = "draggable" [@@bs.set];
let setDraggable : t => bool => unit = fun self value => setDraggable self (Js.Boolean.to_js_boolean value);
external dropzone : t => DomRe.domSettableTokenList = "" [@@bs.get];
external hidden : t => Js.boolean = "" [@@bs.get];
let hidden : t => bool = fun self => Js.to_bool (hidden self);
external setHidden : t => Js.boolean => unit = "hidden" [@@bs.set];
let setHidden : t => bool => unit = fun self value => setHidden self (Js.Boolean.to_js_boolean value);
external itemScope : t => Js.boolean = "" [@@bs.get]; /* experimental */
let itemScope : t => bool = fun self => Js.to_bool (itemScope self);
external setItemScope : t => Js.boolean => unit = "itemScope" [@@bs.set]; /* experimental */
let setItemScope : t => bool => unit = fun self value => setItemScope self (Js.Boolean.to_js_boolean value);
external itemType : t => DomRe.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemId : t => string = "" [@@bs.get]; /* experimental */
external setItemId : t => string => unit = "itemId" [@@bs.set]; /* experimental */
external itemRef : t => DomRe.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemProp : t => DomRe.domSettableTokenList = "" [@@bs.get]; /* experimental */
external itemValue : t => Js.t {..} = "" [@@bs.get]; /* experimental */
external setItemValue : t => Js.t {..} => unit = "itemValue" [@@bs.set]; /* experimental */
external lang : t => string = "" [@@bs.get];
external setLang : t => string => unit = "lang" [@@bs.set];
external offsetHeight : t => int = "" [@@bs.get]; /* experimental */
external offsetLeft : t => int = "" [@@bs.get]; /* experimental */
external offsetParent : t => int = "" [@@bs.get]; /* experimental */
external offsetTop : t => int = "" [@@bs.get]; /* experimental, but widely supported */
external offsetWidth : t => int = "" [@@bs.get]; /* experimental */
/*external properties : r => HTMLPropertiesCollection.t = "properties" [@@bs.get]; /* experimental */*/
external spellcheck : t => Js.boolean = "" [@@bs.get];
let spellcheck : t => bool = fun self => Js.to_bool (spellcheck self);
external setSpellcheck : t => Js.boolean => unit = "spellcheck" [@@bs.set];
let setSpellcheck : t => bool => unit = fun self value => setSpellcheck self (Js.Boolean.to_js_boolean value);
external style : t => DomRe.cssStyleDeclaration = "" [@@bs.get];
external setStyle : t => DomRe.cssStyleDeclaration => unit = "style" [@@bs.set];
external tabIndex : t => int = "" [@@bs.get];
external setTabIndex : t => int => unit = "tabIndex" [@@bs.set];
external title : t => string = "" [@@bs.get];
external setTitle : t => string => unit = "title" [@@bs.set];
external translate : t => Js.boolean = "" [@@bs.get]; /* experimental */
let translate : t => bool = fun self => Js.to_bool (translate self);
external setTranslate : t => Js.boolean => unit = "translate" [@@bs.set]; /* experimental */
let setTranslate : t => bool => unit = fun self value => setTranslate self (Js.Boolean.to_js_boolean value);

external blur : unit = "" [@@bs.send.pipe: t];
external click : unit = "" [@@bs.send.pipe: t];
external focus : unit = "" [@@bs.send.pipe: t];
external forceSpellCheck : unit = "" [@@bs.send.pipe: t]; /* experimental */


/* TODO: element-spcific, should be pulled out */
external value : t => string = "" [@@bs.get]; /* HTMLInputElement */
external checked : t => Js.boolean = "" [@@bs.get]; /* HTMLInputElement */
let checked : t => bool = fun value => Js.to_bool (checked value);
external type_ : t => string = "" [@@bs.get]; /* HTMLStyleElement */
external setType : t => string => unit = "type" [@@bs.set]; /* HTMLStyleElement */
external rel : t => string = "" [@@bs.get]; /* HTMLLinkElement */
external setRel : t => string => unit = "rel" [@@bs.set]; /* HTMLLinkElement */
external href : t => string = "" [@@bs.get]; /* HTMLLinkElement, HTMLAnchorElement */
external setHref : t => string => unit = "href" [@@bs.set]; /* HTMLLinkElement, HTMLAnchorElement */
