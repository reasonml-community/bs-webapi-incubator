#!/usr/bin/env zsh

for i in $(find src/**/*.re); do
  echo $i
  refmt --in-place --parse re --print ml $i
  mv $i "${i%.*}".ml
done

node ./sed.js `find src/**/*.ml`

mkdir srcsrc

./node_modules/bs-platform/bin/bspack.exe \
-I src \
-I src/storage \
-I src/core \
-I src/gl \
-I src/dom \
-I src/dom/css \
-I src/dom/events \
-I src/dom/html \
-I src/dom/nodes \
-I src/dom/ranges \
-I src/dom/selection \
-I src/dom/sets \
-I src/dom/traversal \
-bs-main ReasonJs \
-o ./srcsrc/reasonJs.ml

./node_modules/bs-platform/bin/bsc.exe srcsrc/reasonJs.ml
