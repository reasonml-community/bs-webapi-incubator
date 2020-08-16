open Webapi.Dom;
open Navigator;

let _ = buildID(navigator);
let _ = clipboard(navigator);
let _ = connection(navigator);
let _ = cookieEnabled(navigator);
let _ = credentials(navigator);
let _ = deviceMemory(navigator);
let _ = geolocation(navigator);
let _ = language(navigator);
let _ = maxTouchPoints(navigator);
let _ = mediaDevices(navigator);
let _ = mediaSession(navigator);
let _ = onLine(navigator);
let _ = oscpu(navigator);
let _ = platform(navigator);
let _ = productSub(navigator);
let _ = serviceWorker(navigator);
let _ = vendor(navigator);
let _ = vendorSub(navigator);
let _ = webdriver(navigator);
let _ = xr(navigator);

navigator |> registerProtocolHandler("web+burger", "https://burgers.example.com/?burger=%s", "Burger handler");
navigator |> sendBeacon("/log", `String("a whole lotta burgers"));
navigator |> vibrate(`Int(200));
navigator |> vibrate(`IntList([100,30,100,30,100,30,200,30,200,30,200,30,100,30,100,30,100]));
