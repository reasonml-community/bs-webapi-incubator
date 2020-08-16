open Js.Typed_array;


type t;

type clipboard;
type networkConnection;
type credentialsContainer;
type geolocation;
type mediaDevices;
type mediaSession;
type serviceWorkerContainer;
type xr;
type mediaKeySystemAccess;
type mediaKeySystemConfiguration;
type shareOptions;

[@bs.get] external buildID : t => string = "";
[@bs.get] external clipboard : t => clipboard = "";
[@bs.get] external connection : t => networkConnection = "";
[@bs.get] external cookieEnabled : t => bool = "";
[@bs.get] external credentials : t => credentialsContainer = "";
[@bs.get] external deviceMemory : t => float = "";
[@bs.get] external geolocation : t => geolocation = "";
[@bs.get] external language : t => string = "";
[@bs.get] external maxTouchPoints : t => int = "";
[@bs.get] external mediaDevices : t => mediaDevices = "";
[@bs.get] external mediaSession : t => mediaSession = "";
[@bs.get] external onLine : t => bool = "";
[@bs.get] external oscpu : t => string = "";
[@bs.get] external platform : t => string = "";
[@bs.get] external productSub : t => string = "";
[@bs.get] external serviceWorker : t => serviceWorkerContainer = "";
[@bs.get] external vendor : t => string = "";
[@bs.get] external vendorSub : t => string = "";
[@bs.get] external webdriver : t => bool = "";
[@bs.get] external xr : t => xr = "";

[@bs.send.pipe : t] external canShare : shareOptions => bool = "";
[@bs.send.pipe : t] external registerProtocolHandler : (string, string, string) => unit = "";
[@bs.send.pipe : t] external requestMediaKeySystemAccess : (string, list(mediaKeySystemConfiguration)) => Js.Promise.t(mediaKeySystemAccess) = "";
[@bs.send.pipe : t] external sendBeacon : (
  string,
  [@bs.unwrap] [
    | `ArrayBuffer(ArrayBuffer.t)
    | `Int8Array(Int8Array.t)
    | `Uint8Array(Uint8Array.t)
    | `Uint8ClampedArray(Uint8ClampedArray.t)
    | `Int16Array(Int16Array.t)
    | `Uint16Array(Uint16Array.t)
    | `Int32Array(Int32Array.t)
    | `Uint32Array(Uint32Array.t)
    | `Float32Array(Float32Array.t)
    | `Float64Array(Float64Array.t)
    | `DataView(DataView.t)
    | `Blob(Webapi__Blob.t)
    | `FormData(Fetch.FormData.t)
    | `URLSearchParams(Webapi__Url.URLSearchParams.t)
    | `String(string)
  ]) => bool = "";
[@bs.send.pipe : t] external share : shareOptions => Js.Promise.t(unit) = "";
[@bs.send.pipe : t] external vibrate : (
  [@bs.unwrap] [
    | `Int(int)
    | `IntList(list(int))
  ]) => bool = "";
