'use strict';

var ElementRe = require("../../../src/dom/nodes/elementRe");

var el = document.createElement("strong");

var el2 = document.createElement("small");

var $$event = new PointerEvent("my-event");

el.assignedSlot;

el.attributes;

el.classList;

el.className;

el.className = "my-class-name";

el.clientHeight;

el.clientLeft;

el.clientTop;

el.clientWidth;

el.id;

el.id = "my-id";

el.innerHTML;

el.innerHTML = "<strong>stuff</strong>";

el.localName;

ElementRe.namespaceURI(el);

ElementRe.nextElementSibling(el);

el.outerHTML;

el.outerHTML = "<strong>stuff</strong>";

ElementRe.prefix(el);

ElementRe.previousElementSibling(el);

el.scrollHeight;

el.scrollLeft;

el.scrollLeft = 0;

el.scrollTop;

el.scrollTop = 0;

el.scrollWidth;

el.shadowRoot;

el.slot;

el.slot = "<strong>stuff</strong>";

el.tagName;

el.attachShadow({
      mode: "open"
    });

el.animate({
      transform: "translateT(0px)"
    }, {
      duration: 1000
    });

el.closest("input");

el.createShadowRoot();

el.getAttribute("href");

el.getAttributeNS("http://...", "foo");

el.getBoundingClientRect();

el.getClientRects();

el.getElementsByClassName("some-class-name");

el.getElementsByTagName("pre");

el.getElementsByTagNameNS("http://...", "td");

+el.hasAttribute("data-my-value");

+el.hasAttributeNS("http://...", "foo");

+el.hasAttributes();

ElementRe.insertAdjacentElement(/* BeforeBegin */0, el2, el);

ElementRe.insertAdjacentHTML(/* AfterBegin */1, "<strong>text</strong>", el);

ElementRe.insertAdjacentText(/* AfterEnd */3, "text", el);

+el.matches("input");

el.querySelector("input");

el.querySelectorAll("input");

el.releasePointerCapture($$event.pointerId);

el.remove();

el.removeAttribute("href");

el.removeAttributeNS("http://...", "foo");

el.requestFullscreen();

el.requestPointerLock();

el.scrollIntoView();

ElementRe.scrollIntoViewNoAlignToTop(el);

el.scrollIntoView({
      block: "end",
      behvaior: "smooth"
    });

el.setAttribute("href", "http://...");

el.setAttributeNS("http://...", "foo", "bar");

el.setPointerCapture($$event.pointerId);

exports.el      = el;
exports.el2     = el2;
exports.$$event = $$event;
/* el Not a pure module */
