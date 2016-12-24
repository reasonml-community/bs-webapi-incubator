set -e

esc=$(printf '\033')
checkmark="${esc}[32m✔${esc}[0m";
crossmark="${esc}[31m✘${esc}[0m";

thisDir=$(dirname "$0")
expected=`cat $thisDir/expected.js`
actual=`cat $thisDir/test.js`

if [[ "$expected" = "$actual" ]]; then
  echo "$checkmark test.js looks like the expected output (expected.js)."
else
  echo "$crossmark test.js looks different than expected.js"
  diff -u $thisDir/expected.js $thisDir/test.js
  exit 1
fi
