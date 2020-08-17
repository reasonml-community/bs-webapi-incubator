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

[@bs.get] external clipboard : t => clipboard = "";
// [@bs.get] external connection : t => networkConnection = ""; /** experimental */
[@bs.get] external cookieEnabled : t => bool = "";
// [@bs.get] external credentials : t => credentialsContainer = ""; /** experimental */
// [@bs.get] external deviceMemory : t => float = ""; /** experimental */
// [@bs.get] external doNotTrack : t => string = ""; /** experimental */
[@bs.get] external geolocation : t => geolocation = "";
// [@bs.get] external keyboard : t => keyboard = ""; /** experimental */
// [@bs.get] external locks : t => lockManager = ""; /** experimental */
[@bs.get] external maxTouchPoints : t => int = "";
// [@bs.get] external mediaCapabilities : t => mediaCapabilities = ""; /** experimental */
[@bs.get] external mediaDevices : t => mediaDevices = "";
// [@bs.get] external mediaSession : t => mediaSession = ""; /** experimental */
// [@bs.get] external permissions : t => permissions = ""; /** experimental */
// [@bs.get] external presentation : t => presentation = ""; /** experimental */
[@bs.get] external serviceWorker : t => serviceWorkerContainer = "";
[@bs.get] external vendor : t => string = "";
// [@bs.get] external vendorSub : t => string = ""; /** non-standard */
// [@bs.get] external wakeLock : t => wakeLock = ""; /** experimental */
// [@bs.get] external webdriver : t => bool = ""; /** experimental */
// [@bs.get] external xr : t => xr = ""; /** experimental */

// [@bs.send.pipe : t] external canShare : shareOptions => bool = ""; /** experimental */
// [@bs.send.pipe : t] external getGamePads : unit => array(gamePad) = ""; /** experimental */
[@bs.send.pipe : t] external registerProtocolHandler : (string, string, string) => unit = "";
[@bs.send.pipe : t] external requestMediaKeySystemAccess : (string, array(mediaKeySystemConfiguration)) => Js.Promise.t(mediaKeySystemAccess) = "";
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
// [@bs.send.pipe : t] external share : shareOptions => Js.Promise.t(unit) = ""; /** experimental */
[@bs.send.pipe : t] external vibrate : int => bool = "vibrate";
[@bs.send.pipe : t] external vibrateArray : array(int) => bool = "vibrate";
