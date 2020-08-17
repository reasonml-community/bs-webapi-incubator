'use strict';


var $$navigator = window.navigator;

$$navigator.clipboard;

$$navigator.cookieEnabled;

$$navigator.geolocation;

$$navigator.maxTouchPoints;

$$navigator.mediaDevices;

$$navigator.serviceWorker;

$$navigator.vendor;

$$navigator.registerProtocolHandler("web+burger", "https://burgers.example.com/?burger=%s", "Burger handler");

$$navigator.sendBeacon("/log", "a whole lotta burgers");

$$navigator.vibrate(200);

$$navigator.vibrate([
      100,
      30,
      100,
      30,
      100,
      30,
      200,
      30,
      200,
      30,
      200,
      30,
      100,
      30,
      100,
      30,
      100
    ]);

exports.$$navigator = $$navigator;
/* navigator Not a pure module */
