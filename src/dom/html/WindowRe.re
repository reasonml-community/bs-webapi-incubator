type console; /* Console API, should maybe be defined in Js stdlib */
type crypto; /* Web Cryptography API */
type frameList; /* array-like, WindowProxy? */
type idleDeadline; /* Cooperative Scheduling of Background Tasks */
type locationbar; /* "bar object" */
type menubar; /* "bar object" */
type navigator;
type performance; /* Web Performance API */
type personalbar; /* "bar object" */
type screen;
type scrollbars; /* "bar object" */
type speechSynthesis;
type statusbar; /* "bar object" */
type toolbar; /* "bar object" */
type mediaQueryList; /* CSSOM View module */
type transferable;

type idleCallbackId; /* used by requestIdleCallback and cancelIdleCallback */

module Impl (T: { type t; }) => {
  type t_window = T.t;

  /* A lot of this isn't really "dom", but rather global exports */

  external console : t_window => console = "" [@@bs.get];
  external crypto : t_window => crypto = "" [@@bs.get];
  external document : t_window => Dom.document = "" [@@bs.get];
  external frameElement : t_window => option Dom.element = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}]; /* experimental? */
  external frames : t_window => frameList = "" [@@bs.get];
  external fullScreen : t_window => bool = "" [@@bs.get];
  external history : t_window => Dom.history = "" [@@bs.get];
  external innerWidth : t_window => int = "" [@@bs.get];
  external innerHeight : t_window => int = "" [@@bs.get];
  external isSecureContext : t_window => bool = "" [@@bs.get];
  external length : t_window => int = "" [@@bs.get];
  external location : t_window => Dom.location = "" [@@bs.get];
  external setLocation : t_window => string => unit = "location" [@@bs.set];
  external locationbar : t_window => locationbar = "" [@@bs.get];
  /* localStorage: accessed directly via Dom.Storage.localStorage */
  external menubar : t_window => menubar = "" [@@bs.get];
  external name : t_window => string = "" [@@bs.get];
  external setName : t_window => string => unit = "name" [@@bs.set];
  external navigator : t_window => navigator = "" [@@bs.get];
  external opener : t_window => option Dom.window = "" [@@bs.get] [@@bs.return {null_to_opt: null_to_opt}];
  external outerWidth : t_window => int = "" [@@bs.get];
  external outerHeight : t_window => int = "" [@@bs.get];
  external pageXOffset : t_window => int = "" [@@bs.get]; /* alias for screenX */
  external pageYOffset : t_window => int = "" [@@bs.get]; /* alias for screenY */
  external parent : t_window => Dom.window = "" [@@bs.get];
  external performance : t_window => performance = "" [@@bs.get];
  external personalbar : t_window => personalbar = "" [@@bs.get];
  external screen : t_window => screen = "" [@@bs.get];
  external screenX : t_window => int = "" [@@bs.get];
  external screenY : t_window => int = "" [@@bs.get];
  external scrollbars : t_window => scrollbars = "" [@@bs.get];
  external scrollX : t_window => int = "" [@@bs.get];
  external scrollY : t_window => int = "" [@@bs.get];
  external self : t_window => Dom.window = "" [@@bs.get]; /* alias for window, but apparently convenient because self (stand-alone) resolves to WorkerGlobalScope in a web worker. Probably poitnless here though */
  /* sessionStorage: accessed directly via Dom.Storage.sessionStorage */
  external speechSynthesis : t_window => speechSynthesis = "" [@@bs.get]; /* experimental */
  external status : t_window => string = "" [@@bs.get];
  external setStatus : t_window => string => unit = "status" [@@bs.set];
  external statusbar : t_window => statusbar = "" [@@bs.get];
  external toolbar : t_window => toolbar = "" [@@bs.get];
  external top : t_window => Dom.window = "" [@@bs.get];
  external window : t_window => t_window = "" [@@bs.get]; /* This is pointless I think, it's just here because window is the implicit global scope, and it's needed to be able to get a reference to it */

  external alert : string => unit = "" [@@bs.send.pipe: t_window];
  external blur : unit = "" [@@bs.send.pipe: t_window];
  external cancelIdleCallback : idleCallbackId => unit = "" [@@bs.send.pipe: t_window]; /* experimental, Cooperative Scheduling of Background Tasks */
  external close : unit = "" [@@bs.send.pipe: t_window];
  external confirm : string => bool = "" [@@bs.send.pipe: t_window];
  external focus : unit = "" [@@bs.send.pipe: t_window];
  external getComputedStyle : Dom.element => Dom.cssStyleDeclaration = "" [@@bs.send.pipe: t_window];
  external getComputedStyleWithPseudoElement : Dom.element => string => Dom.cssStyleDeclaration = "getComputedStyle" [@@bs.send.pipe: t_window];
  external getSelection : Dom.selection = "" [@@bs.send.pipe: t_window];
  external matchMedia : string => mediaQueryList = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external moveBy : int => int => unit = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external moveTo : int => int => unit = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external open_ : url::string => name::string => features::string => option Dom.window = "open" [@@bs.send.pipe: t_window] [@@bs.return {null_to_opt: null_to_opt}]; /* yes, features is a stringly typed list of key value pairs, sigh */
  external postMessage : 'a => string => unit = "" [@@bs.send.pipe: t_window]; /* experimental-ish?, Web Messaging */
  external postMessageWithTransfers : 'a => string => array transferable => unit = "postMessage" [@@bs.send.pipe: t_window]; /* experimental-ish?, Web Messaging */
  external print : unit = "" [@@bs.send.pipe: t_window];
  external prompt : string => string = "" [@@bs.send.pipe: t_window];
  external promptWithDefault : string => string => string = "prompt" [@@bs.send.pipe: t_window];
  /* requestAnimationFrame: accessed directly via Bs_webapi */
  external requestIdleCallback : (idleDeadline => unit) => idleCallbackId = "" [@@bs.send.pipe: t_window]; /* experimental, Cooperative Scheduling of Background Tasks */
  external requestIdleCallbackWithOptions : (idleDeadline => unit) => Js.t {. timeout: int } => idleCallbackId = "requestIdleCallback" [@@bs.send.pipe: t_window]; /* experimental, Cooperative Scheduling of Background Tasks */
  external resizeBy : int => int => unit = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external resizeTo : int => int => unit = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external scroll : int => int => unit = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external scrollBy : int => int => unit = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external scrollTo : int => int => unit = "" [@@bs.send.pipe: t_window]; /* experimental, CSSOM View module */
  external stop : unit = "" [@@bs.send.pipe: t_window];


  external setOnLoad : t_window => (unit => unit) => unit = "onload" [@@bs.set]; /* use addEventListener instead? */
};

/* include WindowOrWorkerGlobalScope? not really "dom" though */
include EventTargetRe.Impl { type t = Dom.window };
include Impl { type t = Dom.window };
