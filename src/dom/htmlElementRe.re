module Impl (Type: DomInternalRe.Type) => {
  type t_htmlElement = Type.t;

  let ofElement element: (option t_htmlElement) =>
    (ElementRe.tagName element) == "html" ? Some (DomInternalRe.cast element) : None;

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

  external accessKey : t_htmlElement => string = "" [@@bs.get];
  external setAccessKey : t_htmlElement => string => unit = "accessKey" [@@bs.set];
  external accessKeyLabel : t_htmlElement => string = "" [@@bs.get];
  external contentEditable : t_htmlElement => string /* enum */ = "" [@@bs.get];
  let contentEditable : t_htmlElement => contentEditable = fun self => decodeContentEditable (contentEditable self);
  external setContentEditable : t_htmlElement => string /* enum */ => unit = "contentEditable" [@@bs.set];
  let setContentEditable : t_htmlElement => contentEditable => unit = fun  self value => setContentEditable self (encodeContentEditable value);
  external isContentEditable : t_htmlElement => Js.boolean = "" [@@bs.get];
  let isContentEditable : t_htmlElement => bool = fun self => Js.to_bool (isContentEditable self);
  external contextMenu : t_htmlElement => DomRe.htmlElement = "" [@@bs.get]; /* returns HTMLMenuElement */
  external setContextMenu : t_htmlElement => DomRe.htmlElement => unit = "contextMenu" [@@bs.set]; /* accepts and returns HTMLMenuElement */
  external dataset : t_htmlElement => DomRe.domStringMap = "" [@@bs.get];
  external dir : t_htmlElement => string /* enum */ = "" [@@bs.get];
  let dir : t_htmlElement => DomRe.dir = fun self => DomRe.decodeDir (dir self);
  external setDir : t_htmlElement => string /* enum */ => unit = "dir" [@@bs.set];
  let setDir : t_htmlElement => DomRe.dir => unit = fun self value => setDir self (DomRe.encodeDir value);
  external draggable : t_htmlElement => Js.boolean = "" [@@bs.get];
  let draggable : t_htmlElement => bool = fun self => Js.to_bool (draggable self);
  external setDraggable : t_htmlElement => Js.boolean => unit = "draggable" [@@bs.set];
  let setDraggable : t_htmlElement => bool => unit = fun self value => setDraggable self (Js.Boolean.to_js_boolean value);
  external dropzone : t_htmlElement => DomRe.domSettableTokenList = "" [@@bs.get];
  external hidden : t_htmlElement => Js.boolean = "" [@@bs.get];
  let hidden : t_htmlElement => bool = fun self => Js.to_bool (hidden self);
  external setHidden : t_htmlElement => Js.boolean => unit = "hidden" [@@bs.set];
  let setHidden : t_htmlElement => bool => unit = fun self value => setHidden self (Js.Boolean.to_js_boolean value);
  external itemScope : t_htmlElement => Js.boolean = "" [@@bs.get]; /* experimental */
  let itemScope : t_htmlElement => bool = fun self => Js.to_bool (itemScope self);
  external setItemScope : t_htmlElement => Js.boolean => unit = "itemScope" [@@bs.set]; /* experimental */
  let setItemScope : t_htmlElement => bool => unit = fun self value => setItemScope self (Js.Boolean.to_js_boolean value);
  external itemType : t_htmlElement => DomRe.domSettableTokenList = "" [@@bs.get]; /* experimental */
  external itemId : t_htmlElement => string = "" [@@bs.get]; /* experimental */
  external setItemId : t_htmlElement => string => unit = "itemId" [@@bs.set]; /* experimental */
  external itemRef : t_htmlElement => DomRe.domSettableTokenList = "" [@@bs.get]; /* experimental */
  external itemProp : t_htmlElement => DomRe.domSettableTokenList = "" [@@bs.get]; /* experimental */
  external itemValue : t_htmlElement => Js.t {..} = "" [@@bs.get]; /* experimental */
  external setItemValue : t_htmlElement => Js.t {..} => unit = "itemValue" [@@bs.set]; /* experimental */
  external lang : t_htmlElement => string = "" [@@bs.get];
  external setLang : t_htmlElement => string => unit = "lang" [@@bs.set];
  external offsetHeight : t_htmlElement => int = "" [@@bs.get]; /* experimental */
  external offsetLeft : t_htmlElement => int = "" [@@bs.get]; /* experimental */
  external offsetParent : t_htmlElement => int = "" [@@bs.get]; /* experimental */
  external offsetTop : t_htmlElement => int = "" [@@bs.get]; /* experimental, but widely supported */
  external offsetWidth : t_htmlElement => int = "" [@@bs.get]; /* experimental */
  /*external properties : r => HTMLPropertiesCollection.t = "properties" [@@bs.get]; /* experimental */*/
  external spellcheck : t_htmlElement => Js.boolean = "" [@@bs.get];
  let spellcheck : t_htmlElement => bool = fun self => Js.to_bool (spellcheck self);
  external setSpellcheck : t_htmlElement => Js.boolean => unit = "spellcheck" [@@bs.set];
  let setSpellcheck : t_htmlElement => bool => unit = fun self value => setSpellcheck self (Js.Boolean.to_js_boolean value);
  external style : t_htmlElement => DomRe.cssStyleDeclaration = "" [@@bs.get];
  external setStyle : t_htmlElement => DomRe.cssStyleDeclaration => unit = "style" [@@bs.set];
  external tabIndex : t_htmlElement => int = "" [@@bs.get];
  external setTabIndex : t_htmlElement => int => unit = "tabIndex" [@@bs.set];
  external title : t_htmlElement => string = "" [@@bs.get];
  external setTitle : t_htmlElement => string => unit = "title" [@@bs.set];
  external translate : t_htmlElement => Js.boolean = "" [@@bs.get]; /* experimental */
  let translate : t_htmlElement => bool = fun self => Js.to_bool (translate self);
  external setTranslate : t_htmlElement => Js.boolean => unit = "translate" [@@bs.set]; /* experimental */
  let setTranslate : t_htmlElement => bool => unit = fun self value => setTranslate self (Js.Boolean.to_js_boolean value);

  external blur : unit = "" [@@bs.send.pipe: t_htmlElement];
  external click : unit = "" [@@bs.send.pipe: t_htmlElement];
  external focus : unit = "" [@@bs.send.pipe: t_htmlElement];
  external forceSpellCheck : unit = "" [@@bs.send.pipe: t_htmlElement]; /* experimental */


  /* TODO: element-spcific, should be pulled out */
  external value : t_htmlElement => string = "" [@@bs.get]; /* HTMLInputElement */
  external checked : t_htmlElement => Js.boolean = "" [@@bs.get]; /* HTMLInputElement */
  let checked : t_htmlElement => bool = fun value => Js.to_bool (checked value);
  external type_ : t_htmlElement => string = "" [@@bs.get]; /* HTMLStyleElement */
  external setType : t_htmlElement => string => unit = "type" [@@bs.set]; /* HTMLStyleElement */
  external rel : t_htmlElement => string = "" [@@bs.get]; /* HTMLLinkElement */
  external setRel : t_htmlElement => string => unit = "rel" [@@bs.set]; /* HTMLLinkElement */
  external href : t_htmlElement => string = "" [@@bs.get]; /* HTMLLinkElement, HTMLAnchorElement */
  external setHref : t_htmlElement => string => unit = "href" [@@bs.set]; /* HTMLLinkElement, HTMLAnchorElement */
};

/* TODO
module Tree (Type: DomInternalRe.Type) => {
  include ElementRe.Tree { type t = Type };
  include Impl { type t = Type };
};

include Tree { type t = DomRe.htmlElement };
*/

include NodeRe.Impl { type t = DomRe.htmlElement };
include EventTargetRe.Impl { type t = DomRe.htmlElement };
include ElementRe.Impl { type t = DomRe.htmlElement };
include Impl { type t = DomRe.htmlElement };
