open ReasonJs;

let _ = Location.href location;
let _ = Location.setHref location "http://reason.ml";
let _ = Location.protocol location;
let _ = Location.setProtocol location "https";
let _ = Location.host location;
let _ = Location.setHost location "reason.ml";
let _ = Location.hostname location;
let _ = Location.setHostname location "reason.ml";
let _ = Location.port location;
let _ = Location.setPort location "443";
let _ = Location.pathname location;
let _ = Location.setPathname location "/reason/tools.html";
let _ = Location.search location;
let _ = Location.setSearch location "q=reasonml";
let _ = Location.hash location;
let _ = Location.setHash location "merlin-atom";
let _ = Location.username location;
let _ = Location.setUsername location "alonzo.church";
let _ = Location.password location;
let _ = Location.setPassword location "lambda-the-ultimate";
let _ = Location.origin location;

Location.assign location "http://reason.ml";
Location.reload location;
Location.reloadWithForce location (Js.Boolean.to_js_boolean true);
Location.replace location "http://reason.ml";
let _ = Location.toString location;
