open ReasonJs;

let _ = History.length history;
let _ = History.scrollRestoration history;
let _ = History.setScrollRestoration history (Js.Boolean.to_js_boolean true);
let _ = History.state history;

History.back history;
History.forward history;
History.go history (-2);
History.pushState history (History.state history) "My title" "http://...";
History.replaceState history (History.state history) "My title" "http://...";
