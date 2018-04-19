# bs-webapi

Experimental bindings to the DOM and other Web APIs.

[![npm](https://img.shields.io/npm/v/bs-webapi.svg)](https://npmjs.org/bs-webapi)
[![Travis](https://img.shields.io/travis/reasonml-community/bs-webapi-incubator/master.svg)](https://travis-ci.org/reasonml-community/bs-webapi-incubator)
[![Issues](https://img.shields.io/github/issues/reasonml-community/bs-webapi-incubator.svg)](https://github.com/reasonml-community/bs-webapi-incubator/issues)
[![Last Commit](https://img.shields.io/github/last-commit/reasonml-community/bs-webapi-incubator.svg)](https://github.com/reasonml-community/bs-webapi-incubator/commits/master)

The bindings are currently undocumented, but as the code mostly just consists of external declarations with type signatures, the code itself is fairly self-documenting. The bindings generally also correspond very well to the Web APIs they bind to, so using MDN along with GitHub should go a long way.

## Installation
```
npm install bs-webapi
```
Then add `bs-webapi` to `bs-dependencies` in your `bsconfig.json`. A minimal example:
```
{
  "name": "my-thing",
  "sources": "src",
  "bs-dependencies": ["bs-webapi"]
}
```

## Usage

See the [examples folder](https://github.com/reasonml-community/bs-webapi-incubator/blob/master/examples/)

## Some notes on the DOM API

The DOM API is mostly organized into interfaces and relies heavily on inheritance. The ergonomics of the API is also heavily dependent on dynamic typing, which makes it somewhat challenging to implement a thin binding layer that is both safe and ergonomic. To achieve this we employ subtyping and implementation inheritance, concepts which aren't very idiomatic to OCaml (or Reason), but all the more beneficial to understand in order to be able to use these bindings effectively.

### Subtyping

The Dom types, and the relationships between them, are actually defined in the `Dom` module that ships with `bs-platform` ([Source code](https://github.com/glennsl/bucklescript/blob/master/jscomp/others/dom.mli)), where you'll find a bunch of types that look like this:

```reason
type _element('a);
type element_like('a) = node_like(_element('a));
type element = element_like(_baseClass);
```

This is subtyping implemented with abstract types and phantom arguments. The details of how this works isn't very important (but see [#23](https://github.com/reasonml-community/bs-webapi-incubator/pull/23) for a detailed explanation of how exactly this trickery works) in order to just use them, but there are a few things you should know:

* If you expand the alias of a concrete DOM type, you'll discover it's actually a list of abstract types. e.g. `element` expands to `_baseClass _element _node _eventTarget_like` This means `element` is a subtype of `_element`, `_node` and `_eventTarget_like`.
* The `_like` type are "open" (because they have a type variable). This means that a function accepting an `'a element_like` will accept any "supertype" of `element_like`. A function accepting just an `element` will only accept an `element` (Technically `element` is actually a "supertype" of `element_like` too).

This system works exceptionally well, but has one significant flaw: It makes type errors even more complicated than they normally are. If you know what to look for it's not that bad, but unfortunately the formatting of these errors don't make looking for it any easier. We hope to improve that in other ways (see [BetterErrors](https://github.com/reasonml/BetterErrors))

### Implementation inheritance

If you've looked through the source code a bit, you've likely come across code like this:

```reason
include EventTargetRe.Impl({ type nonrec t = t });
include NodeRe.Impl({ type nonrec t = t });
include ParentNodeRe.Impl({ type nonrec t = t });
include NonDocumentTypeChildNodeRe.Impl({ type nonrec t = t });
include ChildNodeRe.Impl({ type nonrec t = t });
include SlotableRe.Impl({ type nonrec t = t });
include Impl({ type nonrec t = t });
```

This is the implementation inheritance. Each "inheritable" module defines an "Impl" module where all its exported functions are defined. `include NodeRe.Impl { type nonrec t = t };` means that all the functions in `NodeRe.Impl` should be included in this module, but with the `t` type of that module replaced by the `t` type of this one. And that's it, it now has all the functions.

Implementation inheritance is used instead of subtyping to make it easier to understand which functions operate on any given "subject". If you have an `element` and you need to use a function defined in `Node`, let's say `removeChild` you cannot just use `Node.removeChild`. Instead you need to use `Element.removeChild`, which you can since `Element` inherits from `Node`. As a general rule, always use the function in the module corresponding to the type you have. You'll find this makes it very easy to see what types you're dealing with just by reading the code.

## Changes

### 0.9.1
* Renamed `Document.docType` to `Document.doctype` to fix #95

### 0.9.0
* Support `bs-platform@3.0.0`. If your app isn't using that version, then don't upgrade to `0.9.0`; otherwise, please do!

### 0.8.0
* Added `EventTarget.unsafeAsDocument`, `EventTarget.unsafeAsElement` and `EventTarget.unsafeAsWindow` functions
* Removed deprecated `Bs_webapi` module`
* Added event-specific listener APIs to `EventTarget`, e.g. `EventTarget.addMouseMoveListener(mouseEvent => ...)`
* Added `requestCancellableAnimationFrame` and `cancelAnimationFrame`
* Fixed msising `@bs.return` annotations causing type unsoundness
* Fixed typo in encoding of `insertPosition` type
* Added `Dom.HtmlImageElement`, `File` and `File.Url`
* Fixed `HtmlElement.offsetParent` returning `int` instead of `Dom.Element`

### 0.7.0
* Added `Webapi` module, Deprecated `Bs_webapi`
* Removed deprecated Storage API
* Add `Document.unsafeAshtmlDocument`, `Element.unsafeAsHtmlElement`. Deprecated `Document.asHtmlDocument`, `Element.asHtmlElement`, `HtmlEleement.ofElement`.
* Changed `Dom.history` and `Dom.location` to use `window` instead of `document`

### 0.6.1
* Fix incorrect heuristic in `HtmlElement.ofElement`

### 0.6.0
* Renamed createText to CreateTextNode, according to spec
* Deprecated Storage API, it's been upstreamed to `bs-platform` as `Dom.Storage`
* Removed `ReasonJs`  namespace. Use ` Bs_webapi`  instead
