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

Please only use the modules exposed through the toplevel module `Webapi`, for example `Webapi.Dom.Element`. In particular, don't use the 'flat' modules like `Webapi__Dom__Element` as these are considered private and are not guaranteed to be backwards-compatible.

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
include Webapi__Dom__EventTarget.Impl({ type nonrec t = t });
include Webapi__Dom__Node.Impl({ type nonrec t = t });
include Webapi__Dom__ParentNode.Impl({ type nonrec t = t });
include Webapi__Dom__NonDocumentTypeChildNode.Impl({ type nonrec t = t });
include Webapi__Dom__ChildNode.Impl({ type nonrec t = t });
include Webapi__Dom__Slotable.Impl({ type nonrec t = t });
include Impl({ type nonrec t = t });
```

This is the implementation inheritance. Each "inheritable" module defines an "Impl" module where all its exported functions are defined. `include Webapi__Dom__Node.Impl { type nonrec t = t };` means that all the functions in `Webapi__Dom__Node.Impl` should be included in this module, but with the `t` type of that module replaced by the `t` type of this one. And that's it, it now has all the functions.

Implementation inheritance is used instead of subtyping to make it easier to understand which functions operate on any given "subject". If you have an `element` and you need to use a function defined in `Node`, let's say `removeChild` you cannot just use `Node.removeChild`. Instead you need to use `Element.removeChild`, which you can since `Element` inherits from `Node`. As a general rule, always use the function in the module corresponding to the type you have. You'll find this makes it very easy to see what types you're dealing with just by reading the code.

## Changes

### 0.15.9 (2020-03-14)
* Added `ResizeObserver`

### 0.15.8 (2020-02-22)
* Added `Window.performance` and `Performance.now`

### 0.15.6 (2020-02-08)
* `WheelEvent` now inherits the implementation of `MouseEvent`

### 0.15.6 (2019-11-20)
* Added `DomStringMap`
* Changed `Window.open_` to have optional `features` argument

### 0.15.5 - (2019-10-09)
* Added `keypress` event handler API
* Added `selectionchange` event handler API
* Added `Text.ofNode`

### 0.15.4 - (2019-09-02)
* Added `Selection.setBaseAndExtent`

### 0.15.3 - (2019-08-22)
* Added `NodeList.forEach`
* Added `Node.asNode`

### 0.15.2 - (2019-05-25)
* Added `File.size`

### 0.15.1 - (2019-05-17)
* Added `URLSearchParams.forEach`
* Added `Element.scrollBy` and `Element.srollByWithOptions`

### 0.15.0 - (2019-05-11)
* (Breaking) Changed `DomRect` coordinates to use `float` instead of `int`

*See [CHANGELOG.md](CHANGELOG.md) for earlier releases.*
