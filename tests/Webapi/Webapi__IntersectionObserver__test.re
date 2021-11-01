let el = Webapi.Dom.document |> Webapi.Dom.Document.createElement("div");

let body =
  Webapi.Dom.Document.asHtmlDocument(Webapi.Dom.document)->Belt.Option.flatMap(Webapi.Dom.HtmlDocument.body)->TestHelpers.unsafelyUnwrapOption;

Webapi.Dom.Element.setInnerText(el, "Hello There");
Webapi.Dom.Element.setAttribute("style", "margin-top: 800px; margin-bottom: 800px;", el);
Webapi.Dom.Element.appendChild(el, body);

let handler =
  (. entries, observer) => {
    Js.Array.forEach(entry => {
      Js.log(Webapi.IntersectionObserver.IntersectionObserverEntry.time(entry));
      Js.log(Webapi.IntersectionObserver.IntersectionObserverEntry.rootBounds(entry));
      Js.log(Webapi.IntersectionObserver.IntersectionObserverEntry.boundingClientRect(entry));
      Js.log(Webapi.IntersectionObserver.IntersectionObserverEntry.intersectionRect(entry));
      Js.log(Webapi.IntersectionObserver.IntersectionObserverEntry.isIntersecting(entry));
      Js.log(Webapi.IntersectionObserver.IntersectionObserverEntry.intersectionRatio(entry));
      Js.log(Webapi.IntersectionObserver.IntersectionObserverEntry.target(entry));
    }, entries);

    Webapi.IntersectionObserver.unobserve(observer, el);
  };

let observer =
  Webapi.IntersectionObserver.make(handler);

Webapi.IntersectionObserver.observe(observer, el);
Webapi.IntersectionObserver.unobserve(observer, el);
Webapi.IntersectionObserver.observe(observer, el);
Webapi.IntersectionObserver.disconnect(observer);
