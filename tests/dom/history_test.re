open ReasonJs;

let _ = History.length history;
let _ = History.scrollRestoration history;
let _ = History.setScrollRestoration history true;
let _ = History.state history;

History.back history;
History.forward history;
History.go (-2) history;
History.pushState (History.state history) "My title" "http://..." history;
History.replaceState (History.state history) "My title" "http://..." history;
