type promise 'a 'e = Bs_promise.t 'a 'e;

type body;
type bodyInit;
type headers;
type headersInit;
type response;
type request;
type requestInit;

/* external */
type arrayBuffer; /* TypedArray */
type blob; /* FileAPI */
type bufferSource; /* Web IDL, either an arrayBuffer or arrayBufferView */
type formData; /* XMLHttpRequest */
type readableStream; /* Streams */
type urlSearchParams; /* URL */

type requestMethod =
| Get
| Head
| Post
| Put
| Delete
| Connect
| Options
| Trace
| Patch
| Other string;
let encodeRequestMethod = fun /* internal */
| Get => "GET"
| Head => "HEAD"
| Post => "POST"
| Put => "PUT"
| Delete => "DELETE"
| Connect => "CONNECT"
| Options => "OPTIONS"
| Trace => "TRACE"
| Patch => "PATCH"
| Other method_ => method_;
let decodeRequestMethod = fun /* internal */
| "GET" => Get
| "HEAD" => Head
| "POST" => Post
| "PUT" => Put
| "DELETE" => Delete
| "CONNECT" => Connect
| "OPTIONS" => Options
| "TRACE" => Trace
| "PATCH" => Patch
| method_ => Other method_;

type referrerPolicy =
| None
| NoReferrer
| NoReferrerWhenDowngrade
| SameOrigin
| Origin
| StrictOrigin
| OriginWhenCrossOrigin
| StrictOriginWhenCrossOrigin
| UnsafeUrl;
let encodeReferrerPolicy = fun /* internal */
| None => ""
| NoReferrer => "no-referrer"
| NoReferrerWhenDowngrade => "no-referrer-when-downgrade"
| SameOrigin => "same-origin"
| Origin => "origin"
| StrictOrigin => "strict-origin"
| OriginWhenCrossOrigin => "origin-when-cross-origin"
| StrictOriginWhenCrossOrigin => "strict-origin-when-cross-origin"
| UnsafeUrl => "unsafe-url";
let decodeReferrerPolicy = fun /* internal */
| "" => None
| "no-referrer" => NoReferrer
| "no-referrer-when-downgrade" => NoReferrerWhenDowngrade
| "same-origin" => SameOrigin
| "origin" => Origin
| "strict-origin" => StrictOrigin
| "origin-when-cross-origin" => OriginWhenCrossOrigin
| "strict-origin-when-cross-origin" => StrictOriginWhenCrossOrigin
| "unsafe-url" => UnsafeUrl
| e => raise (Failure ("Unknown referrerPolicy: " ^ e));

type requestType =
| None /* default? unknown? just empty string in spec */
| Audio
| Font
| Image
| Script
| Style
| Track
| Video;
let decodeRequestType = fun /* internal */
| "" => None
| "audio" => Audio
| "font" => Font
| "image" => Image
| "script" => Script
| "style" => Style
| "track" => Track
| "video" => Video
| e => raise (Failure ("Unknown requestType: " ^ e));

type requestDestination =
| None /* default? unknown? just empty string in spec */
| Document
| Embed
| Font
| Image
| Manifest
| Media
| Object
| Report
| Script
| ServiceWorker
| SharedWorker
| Style
| Worker
| Xslt;
let decodeRequestDestination = fun /* internal */
| "" => None
| "document" => Document
| "embed" => Embed
| "font" => Font
| "image" => Image
| "manifest" => Manifest
| "media" => Media
| "object" => Object
| "report" => Report
| "script" => Script
| "serviceworker" => ServiceWorker
| "sharedworder" => SharedWorker
| "style" => Style
| "worker" => Worker
| "xslt" => Xslt
| e => raise (Failure ("Unknown requestDestination: " ^ e));

type requestMode =
| Navigate
| SameOrigin
| NoCORS
| CORS;
let encodeRequestMode = fun /* internal */
| Navigate => "navigate"
| SameOrigin => "same-origin"
| NoCORS => "no-cors"
| CORS => "cors";
let decodeRequestMode = fun /* internal */
| "navigate" => Navigate
| "same-origin" => SameOrigin
| "no-cors" => NoCORS
| "cors" => CORS
| e => raise (Failure ("Unknown requestMode: " ^ e));

type requestCredentials =
| Omit
| SameOrigin
| Include;
let encodeRequestCredentials = fun /* internal */
| Omit => "omit"
| SameOrigin => "same-origin"
| Include => "include";
let decodeRequestCredentials = fun /* internal */
| "omit" => Omit
| "same-origin" => SameOrigin
| "imclude" => Include
| e => raise (Failure ("Unknown requestCredentials: " ^ e));

type requestCache =
| Default
| NoStore
| Reload
| NoCache
| ForceCache
| OnlyIfCached;
let encodeRequestCache = fun /* internal */
| Default => "default"
| NoStore => "no-store"
| Reload => "reload"
| NoCache => "no-cache"
| ForceCache => "force-cache"
| OnlyIfCached => "only-if-cached";
let decodeRequestCache = fun /* internal */
| "default" => Default
| "no-store" => NoStore
| "reload" => Reload
| "no-cache" => NoCache
| "force-cache" => ForceCache
| "only-if-cached" => OnlyIfCached
| e => raise (Failure ("Unknown requestCache: " ^ e));

type requestRedirect =
| Follow
| Error
| Manual;
let encodeRequestRedirect = fun /* internal */
| Follow => "follow"
| Error => "error"
| Manual => "manual";
let decodeRequestRedirect = fun /* internal */
| "follow" => Follow
| "error" => Error
| "manual" => Manual
| e => raise (Failure ("Unknown requestRedirect: " ^ e));

module type Type = { /* internal */
  type t;
};

module HeadersInit = {
  type t = headersInit;

  external make : Js.t {..} => t = "%identity";
  external makeWithArray : array (string, string) => t = "%identity";
};

module Headers = {
  type t = headers;

  external make : t = "Headers" [@@bs.new];
  external makeWithInit : headersInit => t = "Headers" [@@bs.new];

  external append : string => string = "" [@@bs.send.pipe: t];
  external delete : string = "" [@@bs.send.pipe: t];
  /* entries */ /* very experimental */
  external get : string => option string = "" [@@bs.send.pipe: t] [@@bs.return {null_to_opt: null_to_opt}];
  external has : string => bool = "" [@@bs.send.pipe: t];
  /* keys */ /* very experimental */
  external set : string => string => unit = "" [@@bs.send.pipe: t];
  /* values */ /* very experimental */
};


module BodyInit = {
  type t = bodyInit;

  external make : string => t = "%identity";
  external makeWithBlob : blob => t = "%identity";
  external makeWithBufferSource : bufferSource => t = "%identity";
  external makeWithFormData : formData => t = "%identity";
  external makeWithUrlSearchParams : urlSearchParams => t = "%identity";
};

module Body = {
  module Impl (T: { type t; }) => {
    external body : T.t => readableStream = "" [@@bs.get];
    external bodyUsed : T.t => bool = "" [@@bs.get];

    external arrayBuffer : promise arrayBuffer unit = "" [@@bs.send.pipe: T.t];
    external blob : promise blob unit = "" [@@bs.send.pipe: T.t];
    external formData : promise formData unit = "" [@@bs.send.pipe: T.t];
    external json : promise (Js.t {..}) unit = "" [@@bs.send.pipe: T.t];
    external text : promise string unit = "" [@@bs.send.pipe: T.t];
  };

  include Impl { type t = body };
};

module RequestInit = {
  type t = requestInit;

  let map f => fun /* internal */
  | Some v => Some (f v)
  | None => None;
  external make :
    method_::string? =>
    headers::headersInit? =>
    body::bodyInit? =>
    referrer::string?  =>
    referrerPolicy::string? =>
    mode::string? =>
    credentials::string?  =>
    cache::string?  =>
    redirect::string? =>
    integrity::string? =>
    keepalive::Js.boolean? =>
    unit =>
    requestInit = "" [@@bs.obj];
  let make
    method_::(method_: option requestMethod)=?
    headers::(headers: option headersInit)=?
    body::(body: option bodyInit)=?
    referrer::(referrer: option string)=?
    referrerPolicy::(referrerPolicy: referrerPolicy)=None
    mode::(mode: option requestMode)=?
    credentials::(credentials: option requestCredentials)=?
    cache::(cache: option requestCache)=?
    redirect::(redirect: option requestRedirect)=?
    integrity::(integrity: string)=""
    keepalive::(keepalive: option bool)=? =>
    make
      method_::?(map encodeRequestMethod method_)
      headers::?headers
      body::?body
      referrer::?referrer
      referrerPolicy::(encodeReferrerPolicy referrerPolicy)
      mode::?(map encodeRequestMode mode)
      credentials::?(map encodeRequestCredentials credentials)
      cache::?(map encodeRequestCache cache)
      redirect::?(map encodeRequestRedirect redirect)
      integrity::integrity
      keepalive::?(map Js.Boolean.to_js_boolean keepalive);
};

module Request = {
  type t = request;

  external make : string => t = "Request" [@@bs.new];
  external makeWithInit : string => requestInit => t = "Request" [@@bs.new];
  external makeWithRequest : t => t = "Request" [@@bs.new];
  external makeWithRequestInit : t => requestInit => t = "Request" [@@bs.new];

  external method_ : t => string = "method" [@@bs.get];
  let method_ : t => requestMethod = fun self => decodeRequestMethod (method_ self);
  external url : t => string = "" [@@bs.get];
  external headers : t => headers = "" [@@bs.get];
  external type_ : t => string = "type" [@@bs.get];
  let type_ : t => requestType = fun self => decodeRequestType (type_ self);
  external destination : t => string = "" [@@bs.get];
  let destination : t => requestDestination = fun self => decodeRequestDestination (destination self);
  external referrer : t => string = "" [@@bs.get];
  external referrerPolicy : t => string = "" [@@bs.get];
  let referrerPolicy : t => referrerPolicy = fun self => decodeReferrerPolicy (referrerPolicy self);
  external mode : t => string = "" [@@bs.get];
  let mode : t => requestMode = fun self => decodeRequestMode (mode self);
  external credentials : t => string = "" [@@bs.get];
  let credentials : t => requestCredentials = fun self => decodeRequestCredentials (credentials self);
  external cache : t => string = "" [@@bs.get];
  let cache : t => requestCache = fun self => decodeRequestCache (cache self);
  external redirect : t => string = "" [@@bs.get];
  let redirect : t => requestRedirect = fun self => decodeRequestRedirect (redirect self);
  external integrity : t => string = "" [@@bs.get];
  external keepalive : t => bool = "" [@@bs.get];

  include Body.Impl { type t = body };
};

module Response = {
  type t = response;

  external error : unit => t = "" [@@bs.val];
  external redirect : string => t = "" [@@bs.val];
  external redirectWithStatus : string => int /* enum-ish */ => t = "redirect" [@@bs.val];

  external headers : t => headers = "" [@@bs.get];
  external ok : t => bool = "" [@@bs.get];
  external redirected : t => bool = "" [@@bs.get];
  external status : t => int = "" [@@bs.get];
  external statusText : t => string = "" [@@bs.get];
  external type_ : t => string = "type" [@@bs.get];
  external url : t => string = "" [@@bs.get];

  external clone : t = "" [@@bs.send.pipe: t];

  include Body.Impl { type t = response };
};

external fetch : string => promise response unit = "" [@@bs.val];
external fetchWithInit : string => requestInit => promise response unit = "fetch" [@@bs.val];
external fetchWithRequest : request => promise response unit = "fetch" [@@bs.val];
external fetchWithRequestInit : request => requestInit => promise response unit = "fetch" [@@bs.val];
