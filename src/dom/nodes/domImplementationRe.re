  type t = Dom.domImplementation;

  external createDocumentType : qualifiedName::string => publicId::string => systemId::string => Dom.documentType = "" [@@bs.send.pipe: t];
  external createDocument : Js.null string => string => Js.null Dom.documentType => Dom.xmlDocument = "" [@@bs.send.pipe: t];
  let createDocument namespace::(namespace:option string)=? qualifiedName::(qualifiedName:string) docType::(docType:option Dom.documentType)=? =>
    createDocument (Js.Null.from_opt namespace) qualifiedName (Js.Null.from_opt docType);
  external createHTMLDocument : Dom.htmlDocument = "" [@@bs.send.pipe: t];
  external createHTMLDocumentWithTitle : string => Dom.htmlDocument = "createHTMLDocument" [@@bs.send.pipe: t];

  external hasFeature : bool = "" [@@bs.send.pipe: t]; /* useless; always returns true (this is exact wording from the actual spec) */