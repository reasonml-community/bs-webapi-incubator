#!/usr/bin/env zsh

for i in $(find src/**/*.re); do
  echo $i
  refmt --in-place --parse re --print ml $i
  mv $i "${i%.*}".ml
done

node ./sed.js `find src/**/*.ml`
