type t = DomRe.cssStyleDeclaration;

external cssText : t => string = "" [@@bs.get];
external setCssText : t => string => unit = "cssText" [@@bs.set];
external length : t => int = "" [@@bs.get];
/* parentRule */

external getPropertyPriority : string = "" [@@bs.send.pipe: t];
external getPropertyValue : string = "" [@@bs.send.pipe: t];
external item : int => string = "" [@@bs.send.pipe: t];
external removeProperty : string => string = "" [@@bs.send.pipe: t];
external setProperty : string => string => string => unit = "" [@@bs.send.pipe: t];
external setPropertyValue : string => string => unit = "" [@@bs.send.pipe: t];
