# [Reason](http://facebook.github.io/reason/) bindings to JavaScript, through [BuckleScript](http://bloomberg.github.io/bucklescript/Manual.html) [![Build Status](https://travis-ci.org/BuckleTypes/reason-js.svg?branch=master)](https://travis-ci.org/BuckleTypes/reason-js)

## What Does This Even Mean?

Reason is a syntax on top of OCaml, a great language. BuckleScript compiles OCaml to clean JavaScript. This library provides common JavaScript functions, e.g. `console` and `setInterval`, through Reason (all type checked!); See the usage below!

## Installation
Prerequisite: having [Ninja](https://ninja-build.org/) installed (version 1.7+), e.g. `brew install ninja` if you're on macOS. Then do `npm install -g git://github.com/reasonml/reason-cli.git`

```
npm install reason-js
```

## Usage

```re
/* Looks almost identical to JavaScript, but fully typed! */
let myInterval = ReasonJs.setInterval (fun () => Js.log "hello!") 1000;
```
