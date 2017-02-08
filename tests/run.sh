#!/bin/bash

set -e

esc=$(printf '\033')
checkmark="${esc}[32m✔${esc}[0m";
crossmark="${esc}[31m✘${esc}[0m";
thisDir=$(dirname "$0")

for source_file in $(find "$thisDir" -name "*_test.re"); do
  test_name=${source_file/%_test.re/}

  expected_file=${test_name}_expected.js
  expected=$(cat "$expected_file")

  actual_file=lib/js/${test_name}_test.js
  actual=$(cat "$actual_file")

  if [[ "$expected" = "$actual" ]]; then
    echo "$checkmark $actual_file looks like the expected output ($expected_file)."
  else
    echo "$crossmark $actual_file looks different than $expected_file"
    diff -u "$expected_file" "$actual_file"
    #exit 1
  fi
done
