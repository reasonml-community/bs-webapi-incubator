open Webapi.Dom;

let navigator = Window.navigator(window);
let _ = Navigator.clipboard(navigator);
let _ = Navigator.cookieEnabled(navigator);
let _ = Navigator.geolocation(navigator);
let _ = Navigator.maxTouchPoints(navigator);
let _ = Navigator.mediaDevices(navigator);
let _ = Navigator.serviceWorker(navigator);
let _ = Navigator.vendor(navigator);

navigator |> Navigator.registerProtocolHandler("web+burger", "https://burgers.example.com/?burger=%s", "Burger handler");
navigator |> Navigator.sendBeacon("/log", `String("a whole lotta burgers"));
navigator |> Navigator.vibrate(200);
navigator |> Navigator.vibrateArray([|100,30,100,30,100,30,200,30,200,30,200,30,100,30,100,30,100|]);
